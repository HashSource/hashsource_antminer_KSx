int __fastcall <f32 as core::fmt::float::GeneralFormat>::already_rounded_value_should_use_exponential(_DWORD *a1)
{
  return (COERCE_FLOAT(*a1 & 0x7FFFFFFF) >= 1.0e16)
       | (COERCE_FLOAT(*a1 & 0x7FFFFFFF) != 0.0) & (COERCE_FLOAT(*a1 & 0x7FFFFFFF) < 0.0001);
}
