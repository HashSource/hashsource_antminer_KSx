void __fastcall miniz_oxide::inflate::decompress_to_vec_inner(int a1, int a2, unsigned int a3, char a4, size_t nmemb)
{
  unsigned int v6; // r5
  unsigned int v8; // r11
  int v9; // r8
  void *v10; // r0
  void *v11; // r10
  unsigned int v12; // r7
  unsigned int v13; // r9
  char v14; // r0
  size_t v15; // r6
  unsigned int v16; // r11
  _BYTE *v17; // r0
  int v18; // r1
  unsigned int v19; // [sp+14h] [bp-30h]
  void *v20; // [sp+18h] [bp-2Ch]
  int v21; // [sp+1Ch] [bp-28h]
  char v22; // [sp+20h] [bp-24h]
  size_t v24; // [sp+28h] [bp-1Ch] BYREF
  int v25; // [sp+2Ch] [bp-18h]
  unsigned int v26; // [sp+30h] [bp-14h]
  int v27; // [sp+38h] [bp-Ch] BYREF
  char v28; // [sp+3Ch] [bp-8h]
  int v29; // [sp+40h] [bp-4h]

  v6 = 2 * a3;
  if ( __CFADD__(a3, a3) )
    v6 = -1;
  if ( v6 >= nmemb )
    v6 = nmemb;
  v8 = a3;
  if ( v6 )
  {
    if ( (int)v6 <= -1 )
      alloc::raw_vec::capacity_overflow(nmemb, a2);
    v9 = _rust_alloc_zeroed(v6);
    if ( !v9 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v9 = 1;
  }
  v26 = v6;
  v25 = v9;
  v24 = v6;
  v10 = (void *)_rust_alloc(0x2AE8u);
  if ( !v10 )
    alloc::alloc::handle_alloc_error();
  v11 = v10;
  v22 = a4 | 4;
  memset(v10, 0, 0x2AE6u);
  v12 = 0;
  v13 = 0;
  v20 = v11;
  v19 = v8;
  while ( 1 )
  {
    miniz_oxide::inflate::core::decompress(
      (int)&v27,
      (int)v11,
      (unsigned __int8 *)(a2 + v12),
      v8 - v12,
      v9,
      v6,
      v13,
      v22);
    v14 = v28;
    v13 += v29;
    if ( v28 != 2 )
      break;
    v15 = v6 + v13;
    v14 = 2;
    if ( __CFADD__(v6, v13) || v15 > nmemb )
      goto LABEL_32;
    if ( v15 <= v6 )
    {
      v6 += v13;
      v12 += v27;
      v26 = v15;
      if ( v12 > v8 )
        goto LABEL_27;
    }
    else
    {
      v21 = v27;
      v16 = v6;
      if ( v24 - v6 < v13 )
      {
        sub_7BC78(&v24, v6, v13);
        v9 = v25;
        v16 = v26;
      }
      v17 = (_BYTE *)(v9 + v16);
      if ( v13 >= 2 )
      {
        memset(v17, 0, v13 - 1);
        v16 += v13 - 1;
        v17 = (_BYTE *)(v9 + v16);
LABEL_25:
        v6 = v16 + 1;
        *v17 = 0;
        goto LABEL_26;
      }
      if ( v15 != v6 )
        goto LABEL_25;
      v6 = v16;
LABEL_26:
      v11 = v20;
      v8 = v19;
      v12 += v21;
      v26 = v6;
      if ( v12 > v19 )
LABEL_27:
        core::slice::index::slice_start_index_len_fail();
    }
  }
  if ( v28 )
  {
LABEL_32:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = v14;
    _rust_dealloc(v11);
    if ( v24 )
      _rust_dealloc((void *)v9);
    return;
  }
  if ( v6 < v13 )
    v13 = v6;
  v18 = v25;
  *(_DWORD *)a1 = v24;
  *(_DWORD *)(a1 + 4) = v18;
  *(_DWORD *)(a1 + 8) = v13;
  v26 = v13;
  _rust_dealloc(v11);
}
