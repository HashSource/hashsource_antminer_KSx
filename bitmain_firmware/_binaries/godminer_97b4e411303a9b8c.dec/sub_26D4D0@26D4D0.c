unsigned __int64 __fastcall sub_26D4D0(__int64 a1)
{
  unsigned int v1; // r2

  if ( !a1 )
    return 0;
  v1 = __clz(a1) + 32;
  if ( HIDWORD(a1) )
    v1 = __clz(HIDWORD(a1));
  HIDWORD(a1) = ((unsigned int)a1 >> (32 - v1)) | (HIDWORD(a1) << v1);
  if ( (int)(v1 - 32) >= 0 )
    HIDWORD(a1) = (_DWORD)a1 << (v1 - 32);
  LODWORD(a1) = (_DWORD)a1 << v1;
  if ( (int)(v1 - 32) >= 0 )
    LODWORD(a1) = 0;
  return __PAIR64__((HIDWORD(a1) >> 11) - (v1 << 20), a1 >> 11)
       + (((((_DWORD)a1 << 21) - (unsigned int)((~(unsigned int)(a1 >> 11) & ((_DWORD)a1 << 21 >> 31)) != 0)) >> 31)
        | 0x43D0000000000000LL);
}
