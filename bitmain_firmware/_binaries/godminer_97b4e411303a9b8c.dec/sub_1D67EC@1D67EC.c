size_t __fastcall sub_1D67EC(_DWORD *a1, int fd, size_t *a3)
{
  int v3; // r10
  size_t v5; // r9
  unsigned int v8; // r11
  int v9; // r5
  unsigned int v10; // r4
  size_t v11; // r2
  unsigned int v12; // r0
  int v13; // r4
  bool v14; // zf
  ssize_t v15; // r0
  size_t v16; // r4
  size_t v17; // r9
  ssize_t v18; // r0
  size_t v20; // [sp+4h] [bp-28h]
  _DWORD buf[9]; // [sp+8h] [bp-24h] BYREF

  v3 = *a3;
  v5 = a3[2];
  v8 = 0;
  v9 = *a3;
  v20 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v9 - v5;
      if ( v9 == v5 && v10 < 0x20 )
      {
        sub_798B0(a3, v9, 32);
        v9 = *a3;
        v5 = a3[2];
        v10 = *a3 - v5;
      }
      v11 = v10;
      if ( v10 >= 0x7FFFFFFF )
        v11 = 0x7FFFFFFF;
      v12 = read(fd, (void *)(a3[1] + v5), v11);
      if ( v12 != -1 )
        break;
      v13 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v13) != 35 )
        goto LABEL_27;
    }
    if ( v8 <= v12 )
      v8 = v12;
    if ( !v12 )
      break;
    if ( v8 > v10 || v12 > v10 )
      core::slice::index::slice_end_index_len_fail();
    v5 += v12;
    v14 = v9 == v3;
    v8 -= v12;
    if ( v9 == v3 )
      v14 = v9 == v5;
    a3[2] = v5;
    if ( v14 )
    {
      memset(buf, 0, 32);
      v15 = read(fd, buf, 0x20u);
      v16 = v15;
      if ( v15 == -1 )
      {
        while ( 1 )
        {
          v13 = *_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v13) != 35 )
            break;
          v18 = read(fd, buf, 0x20u);
          if ( v18 != -1 )
          {
            v16 = v18;
            if ( v18 )
              goto LABEL_21;
            goto LABEL_26;
          }
        }
LABEL_27:
        *a1 = 0;
        a1[1] = v13;
        return 0;
      }
      if ( !v15 )
      {
LABEL_26:
        *(_BYTE *)a1 = 4;
        a1[1] = v3 - v20;
        return v3 - v20;
      }
LABEL_21:
      if ( v16 >= 0x21 )
        core::slice::index::slice_end_index_len_fail();
      sub_798B0(a3, v3, v16);
      v17 = a3[2];
      v9 = *a3;
      memcpy((void *)(a3[1] + v17), buf, v16);
      v5 = v17 + v16;
      a3[2] = v5;
    }
  }
  *(_BYTE *)a1 = 4;
  a1[1] = v5 - v20;
  return v5 - v20;
}
