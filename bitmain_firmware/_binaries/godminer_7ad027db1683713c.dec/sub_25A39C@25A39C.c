unsigned int __fastcall sub_25A39C(__int64 a1)
{
  int v1; // r12
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r4
  unsigned int v5; // r5
  unsigned int v6; // r2

  LOWORD(v1) = 0;
  v2 = __clz(a1) + 32;
  if ( HIDWORD(a1) )
    v2 = __clz(HIDWORD(a1));
  HIWORD(v1) = 24192;
  v3 = ((unsigned int)a1 >> (32 - (v2 & 0x3F))) | (HIDWORD(a1) << (v2 & 0x3F));
  if ( (int)((v2 & 0x3F) - 32) >= 0 )
    v3 = (_DWORD)a1 << ((v2 & 0x3F) - 32);
  v4 = (_DWORD)a1 << (v2 & 0x3F);
  if ( (int)((v2 & 0x3F) - 32) >= 0 )
    v4 = 0;
  v5 = v2 * (v1 | 0xA1000000) + (v3 >> 8) + v1;
  if ( !a1 )
    v5 = v3 >> 8;
  v6 = (v4 >> 8) | (v3 << 24) | (unsigned __int16)v4;
  return v5 + ((v6 - ((v6 >> 31) & ~(v3 >> 8))) >> 31);
}
