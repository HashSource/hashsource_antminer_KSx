void __fastcall sub_2365C8(unsigned int *a1, int a2, unsigned int a3, unsigned __int8 a4, int a5)
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
  size_t v17; // r0
  size_t v18; // r6
  _BYTE *v19; // r0
  size_t v20; // r7
  size_t *v21; // [sp+10h] [bp-1009Ch]
  unsigned int v23; // [sp+18h] [bp-10094h]
  _BYTE v24[65508]; // [sp+1Ch] [bp-10090h] BYREF
  void *v25; // [sp+10058h] [bp-54h]
  void *v26; // [sp+10064h] [bp-48h]
  void *v27; // [sp+10080h] [bp-2Ch]
  unsigned int v28; // [sp+10084h] [bp-28h] BYREF
  int v29; // [sp+10088h] [bp-24h]
  int v30; // [sp+1008Ch] [bp-20h]
  int v31[7]; // [sp+10090h] [bp-1Ch] BYREF

  v7 = a4;
  if ( a4 >= 0xAu )
    v7 = 10;
  v8 = dword_2B3C5C[v7];
  if ( a4 < 4u )
    v8 |= 0x4000u;
  if ( a5 > 0 )
    v8 |= 0x1000u;
  if ( !a4 )
    v8 |= 0x80000u;
  miniz_oxide::deflate::core::CompressorOxide::new((int)v24, v8);
  v9 = 2;
  if ( a3 >> 1 > 2 )
    v9 = a3 >> 1;
  v23 = a3;
  v10 = _rust_alloc_zeroed(v9);
  if ( !v10 )
    alloc::alloc::handle_alloc_error();
  v11 = v10;
  *a1 = v9;
  v12 = 0;
  a1[1] = v10;
  a1[2] = v9;
  v13 = 0;
  v21 = a1;
  while ( 1 )
  {
    if ( v9 < v13 )
LABEL_33:
      core::slice::index::slice_start_index_len_fail();
    v31[1] = v23 - v12;
    v31[2] = 0;
    v31[3] = 0;
    v31[0] = a2 + v12;
    v31[4] = 1;
    v31[5] = v11 + v13;
    v31[6] = v9 - v13;
    miniz_oxide::deflate::core::compress_inner(&v28, (int)v24, v31, 4u);
    v13 += v30;
    if ( v29 )
      break;
    v14 = v28;
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
        sub_7D848(v21, v9, v9);
        v11 = v21[1];
        v18 = v21[2];
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
      a1 = v21;
      v21[2] = v9;
      goto LABEL_14;
    }
    v9 *= 2;
    a1[2] = v16;
LABEL_14:
    v12 += v14;
    if ( v12 > v23 )
      goto LABEL_33;
  }
  if ( v29 != 1 )
    core::panicking::panic((int)aBugUnexpectedl, 37, (int)&off_2E51F4);
  if ( v9 >= v13 )
    a1[2] = v13;
  _rust_dealloc(v25);
  _rust_dealloc(v26);
  _rust_dealloc(v27);
}
