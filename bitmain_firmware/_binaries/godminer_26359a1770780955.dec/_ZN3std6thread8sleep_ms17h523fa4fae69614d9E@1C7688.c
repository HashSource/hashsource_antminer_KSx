unsigned int __fastcall std::thread::sleep_ms(unsigned int a1)
{
  unsigned int v1; // r5
  unsigned int v2; // r1
  unsigned int result; // r0
  signed int tv_nsec; // r1
  unsigned int v5; // r6
  __time_t v6; // r0
  unsigned int v7; // kr00_4
  struct timespec remaining; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v10[6]; // [sp+10h] [bp-18h] BYREF

  v1 = a1 / 0x3E8;
  v2 = a1 % 0x3E8;
  result = a1 >> 3;
  tv_nsec = v2 * (_DWORD)&loc_F4240
          - 1000000000
          * ((unsigned int)((((v2 * (unsigned int)&loc_F4240) >> 9)
                           * (unsigned __int64)(unsigned int)"str17h2150493e56166623E") >> 32) >> 7);
  if ( result > 0x7C || tv_nsec )
  {
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = 0x7FFFFFFF;
        if ( v1 < 0x7FFFFFFF )
          v6 = v1;
        if ( v5 )
          v6 = 0x7FFFFFFF;
        remaining.tv_nsec = tv_nsec;
        remaining.tv_sec = v6;
        v7 = v1 - v6;
        v5 = (__PAIR64__(v5, v1) - (unsigned int)v6) >> 32;
        v1 -= v6;
        if ( nanosleep(&remaining, &remaining) != -1 )
          break;
        v9 = *_errno_location();
        if ( v9 != 4 )
        {
          v10[2] = 0;
          sub_797AC(0, (int)&v9, (int)&unk_2A49B4, v10, (int)&off_2DFB08);
        }
        tv_nsec = remaining.tv_nsec;
        v5 = (__PAIR64__(v5, v7) + remaining.tv_sec) >> 32;
        v1 = v7 + remaining.tv_sec;
        result = (v7 + remaining.tv_sec) | v5;
        if ( !__PAIR64__(v5, v7 + remaining.tv_sec) )
          goto LABEL_13;
      }
      tv_nsec = 0;
      result = v7 | v5;
      if ( !__PAIR64__(v5, v7) )
      {
LABEL_13:
        if ( tv_nsec <= 0 )
          return result;
      }
    }
  }
  return result;
}
