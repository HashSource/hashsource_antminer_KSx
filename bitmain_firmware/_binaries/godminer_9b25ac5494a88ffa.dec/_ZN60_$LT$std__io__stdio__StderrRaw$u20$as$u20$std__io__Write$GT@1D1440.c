unsigned int __fastcall <std::io::stdio::StderrRaw as std::io::Write>::write_all(
        unsigned int result,
        int a2,
        char *buf,
        unsigned int a4)
{
  int v4; // r7
  _DWORD *v5; // r4
  int v6; // r8
  unsigned int v7; // r5
  char **v9; // r7
  size_t v10; // r2

  v5 = (_DWORD *)result;
  v6 = 4;
  if ( a4 )
  {
    v7 = a4;
    do
    {
      while ( 1 )
      {
        v10 = v7;
        if ( v7 >= 0x7FFFFFFF )
          v10 = 0x7FFFFFFF;
        result = write(2, buf, v10);
        if ( result == -1 )
          break;
        if ( !result )
        {
          *v5 = 2;
          v5[1] = &off_2DDC28;
          return result;
        }
        if ( v7 < result )
          core::slice::index::slice_start_index_len_fail();
        v7 -= result;
        buf += result;
        if ( !v7 )
        {
          v9 = &off_2DDC28;
LABEL_11:
          *v5 = v6;
          v5[1] = v9;
          return result;
        }
      }
      v9 = (char **)*_errno_location();
      result = (unsigned __int8)std::sys::unix::decode_error_kind(v9);
    }
    while ( (unsigned __int8)result == 35 );
    v6 = 0;
    if ( v9 != (char **)9 )
      goto LABEL_11;
    *(_BYTE *)v5 = 4;
    return 4;
  }
  else
  {
    *(_DWORD *)result = 4;
    *(_DWORD *)(result + 4) = v4;
  }
  return result;
}
