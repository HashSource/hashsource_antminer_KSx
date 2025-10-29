unsigned int __fastcall sub_1C37C4(_DWORD *a1, unsigned int *a2)
{
  int v2; // r10
  unsigned int v4; // r8
  unsigned int v6; // r7
  int v7; // r5
  unsigned int v8; // r4
  char *v9; // r6
  size_t v10; // r2
  unsigned int v11; // r0
  int v12; // r4
  int v13; // r1
  bool v14; // zf
  ssize_t v15; // r0
  size_t v16; // r4
  unsigned int v17; // r8
  ssize_t v18; // r0
  unsigned int v20; // [sp+4h] [bp-28h]
  _DWORD buf[9]; // [sp+8h] [bp-24h] BYREF

  v2 = *a2;
  v4 = a2[2];
  v6 = 0;
  v20 = v4;
  v7 = *a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = v7 - v4;
      if ( v7 == v4 && v8 < 0x20 )
      {
        sub_77DD8(a2, v7, 32);
        v7 = *a2;
        v4 = a2[2];
        v8 = *a2 - v4;
        if ( v8 < v6 )
LABEL_30:
          core::slice::index::slice_start_index_len_fail(v6, v8, (int)&off_2C9AB4);
      }
      else if ( v8 < v6 )
      {
        goto LABEL_30;
      }
      v9 = (char *)(a2[1] + v4);
      memset(&v9[v6], 0, v8 - v6);
      v10 = v8;
      if ( v8 >= 0x7FFFFFFF )
        v10 = 0x7FFFFFFF;
      v11 = read(0, v9, v10);
      if ( v11 != -1 )
        break;
      v12 = *_errno_location();
      if ( (unsigned __int8)std::sys::unix::decode_error_kind(v12) != 35 )
      {
LABEL_28:
        *a1 = 0;
        a1[1] = v12;
        return 0;
      }
    }
    v13 = v11;
    if ( v8 > v11 )
      v13 = v8;
    if ( !v11 )
      break;
    if ( v8 < v11 )
      core::slice::index::slice_end_index_len_fail(v13, v8, (int)&off_2C9AA4);
    v4 += v11;
    v14 = v7 == v2;
    v6 = v13 - v11;
    if ( v7 == v2 )
      v14 = v7 == v4;
    a2[2] = v4;
    if ( v14 )
    {
      memset(buf, 0, 32);
      v15 = read(0, buf, 0x20u);
      v16 = v15;
      if ( v15 == -1 )
      {
        do
        {
          v12 = *_errno_location();
          if ( (unsigned __int8)std::sys::unix::decode_error_kind(v12) != 35 )
            goto LABEL_28;
          v18 = read(0, buf, 0x20u);
        }
        while ( v18 == -1 );
        v16 = v18;
        if ( !v18 )
        {
LABEL_27:
          *(_BYTE *)a1 = 4;
          a1[1] = v2 - v20;
          return v2 - v20;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_27;
      }
      if ( v16 >= 0x21 )
        core::slice::index::slice_end_index_len_fail(v16, 32, (int)&off_2C9BC4);
      sub_77DD8(a2, v2, v16);
      v17 = a2[2];
      v7 = *a2;
      memcpy((void *)(a2[1] + v17), buf, v16);
      v4 = v17 + v16;
      a2[2] = v4;
    }
  }
  *(_BYTE *)a1 = 4;
  a1[1] = v4 - v20;
  return v4 - v20;
}
