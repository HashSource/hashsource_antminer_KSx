int __fastcall core::num::diy_float::Fp::normalize(__int64 *a1)
{
  __int64 v1; // r2
  unsigned int v2; // r0
  unsigned int v3; // r0
  unsigned int v4; // r12
  int v5; // r1

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 1);
  if ( !v2 )
    v2 = v1;
  if ( HIDWORD(v1) )
    HIDWORD(v1) = v1;
  LODWORD(v1) = v2;
  if ( v2 < 0x10000 )
  {
    LODWORD(v1) = (v2 << 16) | HIWORD(HIDWORD(v1));
    HIDWORD(v1) <<= 16;
  }
  v3 = v1;
  if ( (unsigned int)v1 < 0x1000000 )
  {
    v3 = ((_DWORD)v1 << 8) | HIBYTE(HIDWORD(v1));
    HIDWORD(v1) <<= 8;
  }
  v4 = v3;
  if ( v3 < 0x10000000 )
  {
    v4 = (16 * v3) | (HIDWORD(v1) >> 28);
    HIDWORD(v1) *= 16;
  }
  v5 = v4;
  if ( v4 < 0x40000000 )
  {
    v5 = (4 * v4) | (HIDWORD(v1) >> 30);
    HIDWORD(v1) *= 4;
  }
  return HIDWORD(v1) << (v5 > -1);
}
