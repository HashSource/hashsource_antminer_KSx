int __fastcall <std::io::stdio::StderrLock as std::io::Write>::write_all(
        int a1,
        _DWORD *a2,
        char *buf,
        unsigned int a4)
{
  char **v4; // r5
  _DWORD *v6; // r4
  unsigned int v7; // r6
  int v8; // r9
  size_t v10; // r2
  unsigned int v11; // r0
  int result; // r0
  _BYTE v13[4]; // [sp+4h] [bp-4h] BYREF

  v6 = (_DWORD *)(*a2 + 12);
  if ( *v6 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v13, (int)&off_2DD2E8, (int)&off_2DDB74);
  v7 = a4;
  v8 = 4;
  *v6 = -1;
  if ( !a4 )
    goto LABEL_17;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v7;
      if ( v7 >= 0x7FFFFFFF )
        v10 = 0x7FFFFFFF;
      v11 = write(2, buf, v10);
      if ( v11 == -1 )
        break;
      if ( !v11 )
      {
        v4 = &off_2DDC28;
        v8 = 2;
        goto LABEL_17;
      }
      if ( v7 < v11 )
        core::slice::index::slice_start_index_len_fail();
      v7 -= v11;
      buf += v11;
      if ( !v7 )
      {
LABEL_12:
        v4 = &off_2DDC28;
        goto LABEL_17;
      }
    }
    v4 = (char **)*_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v4) != 35 )
      break;
    if ( !v7 )
      goto LABEL_12;
  }
  v8 = 0;
  if ( v4 == (char **)9 )
  {
    *(_BYTE *)a1 = 4;
  }
  else
  {
LABEL_17:
    *(_DWORD *)a1 = v8;
    *(_DWORD *)(a1 + 4) = v4;
  }
  result = *v6 + 1;
  *v6 = result;
  return result;
}
