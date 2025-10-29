int __fastcall sub_270788(__int64 a1)
{
  unsigned __int64 v1; // kr00_8
  unsigned int v2; // r2
  unsigned int v3; // lr
  unsigned int v4; // r3

  if ( !a1 )
    return 0;
  LODWORD(a1) = a1 ^ (SHIDWORD(a1) >> 31);
  v1 = __PAIR64__(HIDWORD(a1) ^ (unsigned int)(SHIDWORD(a1) >> 31), a1)
     - __PAIR64__(SHIDWORD(a1) >> 31, SHIDWORD(a1) >> 31);
  v2 = __clz(a1 - (SHIDWORD(a1) >> 31)) + 32;
  if ( (__PAIR64__(HIDWORD(a1) ^ (unsigned int)(SHIDWORD(a1) >> 31), a1)
      - __PAIR64__(SHIDWORD(a1) >> 31, SHIDWORD(a1) >> 31)) >> 32 )
    v2 = __clz(HIDWORD(v1));
  v3 = ((unsigned int)v1 >> (32 - v2)) | (HIDWORD(v1) << v2);
  if ( (int)(v2 - 32) >= 0 )
    v3 = (_DWORD)v1 << (v2 - 32);
  v4 = (_DWORD)v1 << v2;
  if ( (int)(v2 - 32) >= 0 )
    v4 = 0;
  return (((unsigned __int64)v4 >> 11) | (v3 << 21))
       + (((v4 << 21) - ((~(((unsigned __int64)v4 >> 11) | (v3 << 21)) & (v4 << 21 >> 31)) != 0)) >> 31);
}
