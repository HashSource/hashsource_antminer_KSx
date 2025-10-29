int __fastcall utf8_encode(int a1, _BYTE *a2, _DWORD *a3)
{
  if ( a1 >= 0 )
  {
    if ( a1 <= 127 )
    {
      *a2 = a1;
      *a3 = 1;
      return 0;
    }
    if ( a1 < 2048 )
    {
      *a2 = (a1 >> 6) - 64;
      a2[1] = (a1 & 0x3F) + 0x80;
      *a3 = 2;
      return 0;
    }
    if ( a1 < 0x10000 )
    {
      *a2 = (a1 >> 12) - 32;
      a2[1] = (((unsigned int)a1 >> 6) & 0x3F) + 0x80;
      a2[2] = (a1 & 0x3F) + 0x80;
      *a3 = 3;
      return 0;
    }
    if ( a1 < 1114112 )
    {
      *a2 = (a1 >> 18) - 16;
      a2[1] = (((unsigned int)a1 >> 12) & 0x3F) + 0x80;
      a2[2] = (((unsigned int)a1 >> 6) & 0x3F) + 0x80;
      a2[3] = (a1 & 0x3F) + 0x80;
      *a3 = 4;
      return 0;
    }
  }
  return -1;
}
