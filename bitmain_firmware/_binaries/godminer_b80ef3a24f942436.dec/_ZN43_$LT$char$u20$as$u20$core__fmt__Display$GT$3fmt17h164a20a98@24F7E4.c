int __fastcall <char as core::fmt::Display>::fmt(unsigned int *a1, int *a2)
{
  int v2; // r2
  unsigned int v3; // r3
  bool v4; // zf
  unsigned int v5; // r2
  int v7; // [sp+4h] [bp-4h] BYREF

  v2 = a2[2];
  v3 = *a1;
  v4 = v2 == 1;
  if ( v2 != 1 )
    v4 = a2[4] == 1;
  if ( !v4 )
    return (*(int (__fastcall **)(_DWORD, unsigned int))(a2[1] + 16))(*a2, v3);
  v7 = 0;
  if ( v3 >= 0x80 )
  {
    if ( v3 >= 0x800 )
    {
      if ( v3 >= 0x10000 )
      {
        HIBYTE(v7) = v3 & 0x3F | 0x80;
        LOBYTE(v7) = (v3 >> 18) | 0xF0;
        BYTE2(v7) = (v3 >> 6) & 0x3F | 0x80;
        BYTE1(v7) = (v3 >> 12) & 0x3F | 0x80;
        v5 = 4;
      }
      else
      {
        BYTE2(v7) = v3 & 0x3F | 0x80;
        LOBYTE(v7) = (v3 >> 12) | 0xE0;
        BYTE1(v7) = (v3 >> 6) & 0x3F | 0x80;
        v5 = 3;
      }
    }
    else
    {
      v5 = 2;
      BYTE1(v7) = v3 & 0x3F | 0x80;
      LOBYTE(v7) = (v3 >> 6) | 0xC0;
    }
  }
  else
  {
    v5 = 1;
    LOBYTE(v7) = v3;
  }
  return core::fmt::Formatter::pad(a2, (char *)&v7, v5);
}
