void __fastcall sub_2220A0(unsigned int *a1, int a2, unsigned int a3, unsigned __int8 a4, int a5)
{
  int v7; // r1
  int v8; // r1
  unsigned int v9; // r7
  int v10; // r0
  int v11; // r5
  unsigned int v12; // r9
  unsigned int v13; // r4
  unsigned int v14; // r10
  unsigned int v15; // r0
  int v16; // r0
  unsigned int v17; // r0
  unsigned int v18; // r6
  _BYTE *v19; // r0
  size_t v20; // r7
  char **v21; // [sp+4h] [bp-100A8h]
  unsigned int *v22; // [sp+10h] [bp-1009Ch]
  unsigned int v24; // [sp+18h] [bp-10094h]
  _BYTE v25[65508]; // [sp+1Ch] [bp-10090h] BYREF
  void *v26; // [sp+10058h] [bp-54h]
  void *v27; // [sp+10064h] [bp-48h]
  void *v28; // [sp+10080h] [bp-2Ch]
  unsigned int v29; // [sp+10084h] [bp-28h] BYREF
  int v30; // [sp+10088h] [bp-24h]
  int v31; // [sp+1008Ch] [bp-20h]
  int v32[7]; // [sp+10090h] [bp-1Ch] BYREF

  v7 = a4;
  if ( a4 >= 0xAu )
    v7 = 10;
  v8 = dword_29CA4C[v7];
  if ( a4 < 4u )
    v8 |= 0x4000u;
  if ( a5 > 0 )
    v8 |= 0x1000u;
  if ( !a4 )
    v8 |= 0x80000u;
  miniz_oxide::deflate::core::CompressorOxide::new((int)v25, v8);
  v9 = 2;
  if ( a3 >> 1 > 2 )
    v9 = a3 >> 1;
  v24 = a3;
  v10 = _rust_alloc_zeroed(v9);
  if ( !v10 )
    alloc::alloc::handle_alloc_error();
  v11 = v10;
  *a1 = v9;
  v12 = 0;
  a1[1] = v10;
  a1[2] = v9;
  v13 = 0;
  v22 = a1;
  v21 = &off_2CE1E4;
  while ( 1 )
  {
    if ( v9 < v13 )
      goto LABEL_34;
    v32[1] = v24 - v12;
    v32[2] = 0;
    v32[3] = 0;
    v32[0] = a2 + v12;
    v32[4] = 1;
    v32[5] = v11 + v13;
    v32[6] = v9 - v13;
    miniz_oxide::deflate::core::compress_inner(&v29, (int)v25, v32, 4u);
    v13 += v31;
    if ( v30 )
      break;
    v14 = v29;
    v15 = v9 - v13;
    if ( v9 < v13 )
      v15 = 0;
    if ( v15 >= 0x1E )
      goto LABEL_14;
    v16 = 2 * v9;
    if ( v9 < 2 * v9 )
    {
      v17 = *a1;
      v18 = v9;
      if ( v17 - v9 < v9 )
      {
        sub_7BB70(v22, v9, v9);
        v11 = v22[1];
        v18 = v22[2];
      }
      v19 = (_BYTE *)(v11 + v18);
      if ( v9 >= 2 )
      {
        v20 = v9 - 1;
        memset(v19, 0, v20);
        v18 += v20;
        v19 = (_BYTE *)(v11 + v18);
        goto LABEL_27;
      }
      if ( v9 == 2 * v9 )
      {
        v9 = v18;
      }
      else
      {
LABEL_27:
        *v19 = 0;
        v9 = v18 + 1;
      }
      a1 = v22;
      v22[2] = v9;
      goto LABEL_14;
    }
    v9 *= 2;
    a1[2] = v16;
LABEL_14:
    v12 += v14;
    if ( v12 > v24 )
    {
      v9 = v24;
      v13 = v12;
      v21 = &off_2CE1D4;
LABEL_34:
      core::slice::index::slice_start_index_len_fail(v13, v9, (int)v21);
    }
  }
  if ( v30 != 1 )
    core::panicking::panic((int)aBugUnexpectedl, 37, (int)&off_2CE1F4);
  if ( v9 >= v13 )
    a1[2] = v13;
  _rust_dealloc(v26);
  _rust_dealloc(v27);
  _rust_dealloc(v28);
}
