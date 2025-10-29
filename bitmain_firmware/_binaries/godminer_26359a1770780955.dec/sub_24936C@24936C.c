int __fastcall sub_24936C(int *a1, unsigned int a2)
{
  unsigned int v2; // r2
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  if ( a2 < 0x80 )
  {
    v2 = 1;
LABEL_5:
    LOBYTE(v4) = a2;
    return <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(a1, (int)&v4, v2);
  }
  v2 = 2;
  if ( a2 < 0x800 )
  {
    BYTE1(v4) = a2 & 0x3F | 0x80;
    a2 = (a2 >> 6) | 0xC0;
    goto LABEL_5;
  }
  if ( a2 >= 0x10000 )
  {
    HIBYTE(v4) = a2 & 0x3F | 0x80;
    BYTE2(v4) = (a2 >> 6) & 0x3F | 0x80;
    BYTE1(v4) = (a2 >> 12) & 0x3F | 0x80;
    LOBYTE(v4) = (a2 >> 18) & 7 | 0xF0;
    return <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(a1, (int)&v4, 4u);
  }
  else
  {
    BYTE2(v4) = a2 & 0x3F | 0x80;
    LOBYTE(v4) = (a2 >> 12) | 0xE0;
    BYTE1(v4) = (a2 >> 6) & 0x3F | 0x80;
    return <core::fmt::builders::PadAdapter as core::fmt::Write>::write_str(a1, (int)&v4, 3u);
  }
}
