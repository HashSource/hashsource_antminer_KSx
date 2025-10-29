size_t __fastcall std::sys_common::wtf8::Wtf8Buf::push_code_point_unchecked(size_t *a1, unsigned int a2)
{
  unsigned int v3; // r5
  int v4; // r0
  size_t v5; // r6
  int src; // [sp+4h] [bp-4h] BYREF

  src = 0;
  if ( a2 < 0x80 )
  {
    v3 = 1;
    LOBYTE(src) = a2;
    goto LABEL_9;
  }
  if ( a2 >= 0x800 )
  {
    if ( a2 < 0x10000 )
    {
      BYTE2(src) = a2 & 0x3F | 0x80;
      LOBYTE(src) = (a2 >> 12) | 0xE0;
      BYTE1(src) = (a2 >> 6) & 0x3F | 0x80;
      v3 = 3;
      goto LABEL_9;
    }
    HIBYTE(src) = a2 & 0x3F | 0x80;
    BYTE2(src) = (a2 >> 6) & 0x3F | 0x80;
    v3 = 4;
    BYTE1(src) = (a2 >> 12) & 0x3F | 0x80;
    LOBYTE(v4) = (a2 >> 18) & 7 | 0xF0;
  }
  else
  {
    v3 = 2;
    BYTE1(src) = a2 & 0x3F | 0x80;
    v4 = (a2 >> 6) | 0xC0;
  }
  LOBYTE(src) = v4;
LABEL_9:
  v5 = a1[2];
  if ( *a1 - v5 < v3 )
  {
    sub_798B0(a1, a1[2], v3);
    v5 = a1[2];
  }
  memcpy((void *)(a1[1] + v5), &src, v3);
  a1[2] = v5 + v3;
  return v5 + v3;
}
