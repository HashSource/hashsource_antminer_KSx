int __fastcall <f32 as core::num::dec2flt::float::RawFloat>::integer_decode(int result)
{
  int v1; // s0
  char v2; // r2
  int v3; // r3

  *(_DWORD *)(result + 4) = 0;
  v2 = -1;
  if ( v1 > -1 )
    v2 = 1;
  *(_BYTE *)(result + 10) = v2;
  *(_WORD *)(result + 8) = (unsigned __int8)((unsigned int)v1 >> 23) - 150;
  v3 = v1 & 0x7FFFFF | 0x800000;
  if ( !(unsigned __int8)((unsigned int)v1 >> 23) )
    v3 = (2 * v1) & 0xFFFFFE;
  *(_DWORD *)result = v3;
  return result;
}
