int __fastcall core::num::fmt::Formatted::len(_DWORD *a1)
{
  int result; // r0
  int v3; // r2
  _DWORD *v4; // r1
  int v5; // r2
  int v6; // r3
  unsigned int v7; // lr

  result = a1[1];
  v3 = a1[3];
  if ( v3 )
  {
    v4 = (_DWORD *)(a1[2] + 4);
    v5 = 12 * v3;
    do
    {
      if ( *((_WORD *)v4 - 2) )
      {
        if ( *((_WORD *)v4 - 2) == 1 )
        {
          v7 = *((unsigned __int16 *)v4 - 1);
          if ( v7 >= 0x3E8 )
          {
            v6 = 5;
            if ( v7 < 0x2710 )
              v6 = 4;
          }
          else
          {
            v6 = 1;
            if ( v7 >= 0xA )
            {
              v6 = 3;
              if ( v7 < 0x64 )
                v6 = 2;
            }
          }
        }
        else
        {
          v6 = v4[1];
        }
      }
      else
      {
        v6 = *v4;
      }
      result += v6;
      v4 += 3;
      v5 -= 12;
    }
    while ( v5 );
  }
  return result;
}
