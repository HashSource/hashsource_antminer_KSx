int __fastcall sub_1C5C38(_DWORD *a1, _DWORD *a2, unsigned __int8 a3, size_t *a4)
{
  unsigned int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r7
  _DWORD *v8; // r8
  int v9; // r4
  char *v10; // r9
  unsigned int v11; // r0
  size_t v12; // r5
  char *v13; // r6
  ssize_t v14; // r0
  int *v15; // r0
  int v16; // r7
  unsigned int v17; // r0
  char *v18; // r6
  unsigned int v19; // r10
  char *v20; // r0
  unsigned int v21; // r3
  int v22; // r8
  size_t v23; // r6
  size_t v24; // r0
  size_t v25; // r6
  unsigned int v28; // [sp+4h] [bp-18h]
  int c; // [sp+Ch] [bp-10h]
  char *v31; // [sp+14h] [bp-8h]
  size_t nbytes; // [sp+18h] [bp-4h]

  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = a2;
  v9 = 0;
  v10 = (char *)*a2;
  v28 = v5;
  if ( v5 >= 0x7FFFFFFF )
    v5 = 0x7FFFFFFF;
  nbytes = v5;
  c = a3;
  do
  {
    if ( v6 >= v7 )
    {
      v11 = v8[4];
      v12 = v28 - v11;
      if ( v28 < v11 )
        core::slice::index::slice_start_index_len_fail();
      v13 = &v10[v11];
      while ( 1 )
      {
        memset(v13, 0, v12);
        v14 = read(0, v10, nbytes);
        if ( v14 != -1 )
        {
          v7 = v14;
          goto LABEL_13;
        }
        v15 = _errno_location();
        v16 = *v15;
        if ( *v15 == 9 )
          break;
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(*v15) != 35 )
        {
          *a1 = 0;
          a1[1] = v16;
          return 0;
        }
      }
      v7 = 0;
LABEL_13:
      v17 = v7;
      if ( v28 > v7 )
        v17 = v28;
      v6 = 0;
      v8[2] = 0;
      v8[3] = v7;
      v8[4] = v17;
    }
    v18 = &v10[v6];
    v19 = v7 - v6;
    v20 = (char *)memchr(&v10[v6], c, v7 - v6);
    v31 = v20;
    if ( v20 )
    {
      v21 = v20 - v18;
      v22 = v20 - v18 + 1;
      if ( v20 - v18 == -1 )
        core::slice::index::slice_end_index_overflow_fail((int)&off_2CACB8);
      if ( v21 >= v19 )
        core::slice::index::slice_end_index_len_fail();
      v23 = a4[2];
      if ( *a4 - v23 <= v21 )
      {
        sub_77EE0(a4, a4[2], v22);
        v23 = a4[2];
      }
      memcpy((void *)(a4[1] + v23), &v10[v6], v22);
      v24 = v23 + v22;
      v19 = v22;
      v8 = a2;
    }
    else
    {
      v25 = a4[2];
      if ( *a4 - v25 < v19 )
      {
        sub_77EE0(a4, a4[2], v7 - v6);
        v25 = a4[2];
      }
      memcpy((void *)(a4[1] + v25), &v10[v6], v7 - v6);
      v24 = v25 + v19;
    }
    a4[2] = v24;
    v6 += v19;
    v9 += v19;
    if ( v6 >= v7 )
      v6 = v7;
    v8[2] = v6;
  }
  while ( !v31 && v19 );
  *(_BYTE *)a1 = 4;
  a1[1] = v9;
  return 4;
}
