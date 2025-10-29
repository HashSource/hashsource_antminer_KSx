int __fastcall std::thread::sleep(unsigned int a1, unsigned int a2, int tv_nsec)
{
  unsigned __int64 v3; // r4
  int result; // r0
  __time_t v5; // r0
  int v6; // kr00_4
  int v7; // r0
  struct timespec remaining; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v10[6]; // [sp+10h] [bp-18h] BYREF

  v3 = __PAIR64__(a1, a2);
  result = a1 | a2;
  if ( result || tv_nsec >= 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = 0x7FFFFFFF;
        if ( HIDWORD(v3) < 0x7FFFFFFF )
          v5 = HIDWORD(v3);
        if ( (_DWORD)v3 )
          v5 = 0x7FFFFFFF;
        remaining.tv_sec = v5;
        remaining.tv_nsec = tv_nsec;
        v6 = HIDWORD(v3) - v5;
        LODWORD(v3) = (__PAIR64__(v3, HIDWORD(v3)) - (unsigned int)v5) >> 32;
        HIDWORD(v3) -= v5;
        v7 = nanosleep(&remaining, &remaining);
        tv_nsec = 0;
        if ( v7 != -1 )
          break;
        v9 = *_errno_location();
        if ( v9 != 4 )
        {
          v10[2] = 0;
          sub_77E94(0, (int)&v9, (int)&unk_2912B4, v10, (int)&off_2CBB08);
        }
        tv_nsec = remaining.tv_nsec;
        LODWORD(v3) = (__PAIR64__(v3, v6) + remaining.tv_sec) >> 32;
        HIDWORD(v3) = v6 + remaining.tv_sec;
        result = (v6 + remaining.tv_sec) | v3;
        if ( !v3 )
          goto LABEL_12;
      }
      result = v6 | v3;
      if ( !v3 )
      {
LABEL_12:
        if ( tv_nsec <= 0 )
          return result;
      }
    }
  }
  return result;
}
