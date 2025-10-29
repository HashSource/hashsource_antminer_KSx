size_t __fastcall std::sys::unix::fd::FileDesc::read_to_end(_DWORD *a1, int *a2, size_t *a3)
{
  int v3; // r10
  size_t v5; // r9
  unsigned int v6; // r4
  int v7; // r11
  int v8; // r5
  unsigned int v9; // r7
  char *v10; // r8
  size_t v11; // r2
  unsigned int v12; // r0
  int v13; // r7
  unsigned int v14; // r1
  bool v15; // zf
  ssize_t v16; // r0
  size_t v17; // r7
  size_t v18; // r8
  int v19; // r5
  ssize_t v20; // r0
  size_t v22; // [sp+0h] [bp-2Ch]
  _DWORD buf[9]; // [sp+8h] [bp-24h] BYREF

  v3 = *a3;
  v5 = a3[2];
  v6 = 0;
  v7 = *a2;
  v8 = *a3;
  v22 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = v8 - v5;
      if ( v8 == v5 && v9 < 0x20 )
      {
        sub_79740(a3, v8, 32);
        v8 = *a3;
        v5 = a3[2];
        v9 = *a3 - v5;
        if ( v9 < v6 )
LABEL_30:
          core::slice::index::slice_start_index_len_fail();
      }
      else if ( v9 < v6 )
      {
        goto LABEL_30;
      }
      v10 = (char *)(a3[1] + v5);
      memset(&v10[v6], 0, v9 - v6);
      v11 = v9;
      if ( v9 >= 0x7FFFFFFF )
        v11 = 0x7FFFFFFF;
      v12 = read(v7, v10, v11);
      if ( v12 != -1 )
        break;
      v13 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v13) != 35 )
      {
        *a1 = 0;
        a1[1] = v13;
        return 0;
      }
    }
    v14 = v12;
    if ( v9 > v12 )
      v14 = v9;
    if ( !v12 )
      break;
    if ( v9 < v12 )
      core::slice::index::slice_end_index_len_fail();
    v5 += v12;
    v15 = v8 == v3;
    v6 = v14 - v12;
    if ( v8 == v3 )
      v15 = v8 == v5;
    a3[2] = v5;
    if ( v15 )
    {
      memset(buf, 0, 32);
      v16 = read(v7, buf, 0x20u);
      v17 = v16;
      if ( v16 != -1 )
      {
        if ( !v16 )
          goto LABEL_27;
        goto LABEL_22;
      }
      do
      {
        v19 = *_errno_location();
        if ( (unsigned __int8)std::sys::unix::decode_error_kind(v19) != 35 )
        {
          *a1 = 0;
          a1[1] = v19;
          return 0;
        }
        v20 = read(v7, buf, 0x20u);
      }
      while ( v20 == -1 );
      v17 = v20;
      if ( !v20 )
      {
LABEL_27:
        *(_BYTE *)a1 = 4;
        a1[1] = v3 - v22;
        return v3 - v22;
      }
LABEL_22:
      if ( v17 >= 0x21 )
        core::slice::index::slice_end_index_len_fail();
      sub_79740(a3, v3, v17);
      v18 = a3[2];
      v8 = *a3;
      memcpy((void *)(a3[1] + v18), buf, v17);
      v5 = v18 + v17;
      a3[2] = v18 + v17;
    }
  }
  *(_BYTE *)a1 = 4;
  a1[1] = v5 - v22;
  return v5 - v22;
}
