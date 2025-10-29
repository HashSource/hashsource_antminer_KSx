__int64 __fastcall core::num::flt2dec::estimator::estimate_scaling_factor(__int64 a1, __int16 a2)
{
  __int64 result; // r0

  HIDWORD(a1) = (unsigned __int64)(a1 - 1) >> 32;
  LODWORD(a1) = __clz(a1 - 1) + 32;
  if ( HIDWORD(a1) )
    LODWORD(a1) = __clz(HIDWORD(a1));
  HIDWORD(result) = a2 - (_DWORD)a1;
  LODWORD(result) = (unsigned __int64)(1292913986LL * SHIDWORD(result) + 0x1344135080LL) >> 32;
  return result;
}
