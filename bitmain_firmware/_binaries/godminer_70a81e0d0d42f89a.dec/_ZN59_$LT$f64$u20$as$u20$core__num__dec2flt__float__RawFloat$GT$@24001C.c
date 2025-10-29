int __fastcall <f64 as core::num::dec2flt::float::RawFloat>::integer_decode(int result)
{
  __int64 v1; // d0
  __int64 v2; // r4
  int v3; // r3
  char v4; // r2

  LODWORD(v2) = v1;
  v3 = (HIDWORD(v1) >> 20) & 0x7FF;
  if ( v3 )
    HIDWORD(v2) = HIDWORD(v1) & 0xFFFFF | 0x100000;
  else
    v2 = (2 * v1) & 0x1FFFFFFFFFFFFFLL;
  *(_WORD *)(result + 8) = v3 - 1075;
  v4 = -1;
  *(_QWORD *)result = v2;
  if ( SHIDWORD(v1) > -1 )
    v4 = 1;
  *(_BYTE *)(result + 10) = v4;
  return result;
}
