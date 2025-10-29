int __fastcall sub_1D6D8C(_DWORD *a1, int a2, char *buf, unsigned int a4)
{
  unsigned int v5; // r5
  int v7; // r7
  size_t v8; // r2
  unsigned int v9; // r0

  if ( a4 )
  {
    v5 = a4;
    do
    {
      while ( 1 )
      {
        v8 = v5;
        if ( v5 >= 0x7FFFFFFF )
          v8 = 0x7FFFFFFF;
        v9 = write(2, buf, v8);
        if ( v9 == -1 )
          break;
        if ( !v9 )
        {
          *a1 = 2;
          a1[1] = &off_2DFC28;
          return 2;
        }
        if ( v5 < v9 )
          core::slice::index::slice_start_index_len_fail();
        v5 -= v9;
        buf += v9;
        if ( !v5 )
          goto LABEL_10;
      }
      v7 = *_errno_location();
    }
    while ( (unsigned __int8)std::sys::unix::decode_error_kind(v7) == 35 );
    *a1 = 0;
    a1[1] = v7;
    return 0;
  }
  else
  {
LABEL_10:
    *(_BYTE *)a1 = 4;
    return 4;
  }
}
