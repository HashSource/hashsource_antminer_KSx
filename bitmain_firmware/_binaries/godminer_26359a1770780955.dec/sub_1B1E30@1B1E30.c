int __fastcall sub_1B1E30(size_t *a1, unsigned int a2)
{
  size_t v4; // r1
  unsigned int v6; // r6
  int v7; // r0
  char v8; // r1
  size_t v9; // r5
  int src; // [sp+4h] [bp-4h] BYREF

  if ( a2 < 0x80 )
  {
    v4 = a1[2];
    if ( v4 == *a1 )
    {
      sub_1B68C4(a1);
      v4 = a1[2];
    }
    *(_BYTE *)(a1[1] + v4) = a2;
    a1[2] = v4 + 1;
    return 0;
  }
  src = 0;
  if ( a2 < 0x800 )
  {
    v6 = 2;
    BYTE1(src) = a2 & 0x3F | 0x80;
    v7 = (a2 >> 6) | 0xC0;
LABEL_10:
    LOBYTE(src) = v7;
    goto LABEL_11;
  }
  v8 = a2 & 0x3F | 0x80;
  if ( a2 >= 0x10000 )
  {
    HIBYTE(src) = v8;
    BYTE2(src) = (a2 >> 6) & 0x3F | 0x80;
    v6 = 4;
    BYTE1(src) = (a2 >> 12) & 0x3F | 0x80;
    v7 = (a2 >> 18) & 7 | 0xF0;
    goto LABEL_10;
  }
  BYTE2(src) = v8;
  LOBYTE(src) = (a2 >> 12) | 0xE0;
  v6 = 3;
  BYTE1(src) = (a2 >> 6) & 0x3F | 0x80;
LABEL_11:
  v9 = a1[2];
  if ( *a1 - v9 < v6 )
  {
    sub_797F8(a1, a1[2], v6);
    v9 = a1[2];
  }
  memcpy((void *)(a1[1] + v9), &src, v6);
  a1[2] = v9 + v6;
  return 0;
}
