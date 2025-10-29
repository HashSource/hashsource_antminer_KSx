int __fastcall sub_1ACD28(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  size_t *v3; // r5
  size_t v4; // r6
  int src; // [sp+4h] [bp-4h] BYREF

  src = 0;
  if ( a2 >= 0x80 )
  {
    if ( a2 >= 0x800 )
    {
      if ( a2 >= 0x10000 )
      {
        HIBYTE(src) = a2 & 0x3F | 0x80;
        BYTE2(src) = (a2 >> 6) & 0x3F | 0x80;
        BYTE1(src) = (a2 >> 12) & 0x3F | 0x80;
        LOBYTE(src) = (a2 >> 18) & 7 | 0xF0;
        v2 = 4;
      }
      else
      {
        BYTE2(src) = a2 & 0x3F | 0x80;
        LOBYTE(src) = (a2 >> 12) | 0xE0;
        BYTE1(src) = (a2 >> 6) & 0x3F | 0x80;
        v2 = 3;
      }
    }
    else
    {
      v2 = 2;
      BYTE1(src) = a2 & 0x3F | 0x80;
      LOBYTE(src) = (a2 >> 6) | 0xC0;
    }
  }
  else
  {
    v2 = 1;
    LOBYTE(src) = a2;
  }
  v3 = *(size_t **)(a1 + 8);
  v4 = v3[2];
  if ( *v3 - v4 < v2 )
  {
    sub_797F8(v3, v3[2], v2);
    v4 = v3[2];
  }
  memcpy((void *)(v3[1] + v4), &src, v2);
  v3[2] = v4 + v2;
  return 0;
}
