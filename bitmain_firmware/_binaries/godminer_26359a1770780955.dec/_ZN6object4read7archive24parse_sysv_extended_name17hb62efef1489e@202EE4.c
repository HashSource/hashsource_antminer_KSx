int __fastcall object::read::archive::parse_sysv_extended_name(_BYTE *a1, int a2, int a3, unsigned int a4)
{
  _BOOL4 v4; // r6
  __int64 v5; // kr20_8
  bool v6; // zf
  int v7; // t1
  __int64 v8; // r6
  __int64 v9; // kr08_8
  int v10; // r5
  int v12; // r6
  int v13; // r2
  unsigned int v14; // r8
  unsigned int v15; // r1

  if ( a2 && *a1 == 32 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = a2 == 0;
    if ( a2 )
    {
      v7 = (unsigned __int8)*a1++;
      v4 = v7;
      v6 = v7 == 32;
    }
    if ( v6 )
      break;
    LODWORD(v8) = v4 - 48;
    if ( (unsigned int)v8 <= 9 )
    {
      v9 = 10LL * (unsigned int)v5;
      v10 = (10 * (unsigned __int64)HIDWORD(v5)) >> 32;
      HIDWORD(v8) = (unsigned __int64)(10 * v5) >> 32;
      if ( !is_mul_ok(HIDWORD(v5), 0xAu) )
        v10 = 1;
      if ( !(v10 | ((HIDWORD(v9) + (unsigned __int64)(unsigned int)(10 * HIDWORD(v5))) >> 32)) )
      {
        --a2;
        v5 = (unsigned int)v9 + v8;
        v4 = __CFADD__(__CFADD__((_DWORD)v9, (_DWORD)v8), HIDWORD(v8));
        if ( !v4 )
          continue;
      }
    }
    return 0;
  }
  if ( HIDWORD(v5) )
    return 0;
  v12 = a3 + v5;
  v13 = a3 + v5;
  if ( a4 < (unsigned int)v5 )
    return 0;
  v14 = a4 - v5;
  if ( a4 == (_DWORD)v5 )
    return v12;
  if ( memchr::memchr::fallback::memchr2(47, 0, v13, a4 - v5) && v15 > v14 )
    core::slice::index::slice_end_index_len_fail();
  return v12;
}
