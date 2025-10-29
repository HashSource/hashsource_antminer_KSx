int __fastcall <f64 as core::fmt::float::GeneralFormat>::already_rounded_value_should_use_exponential(_QWORD *a1)
{
  return (COERCE_DOUBLE(*a1 & 0x7FFFFFFFFFFFFFFFLL) >= 1.0e16)
       | (COERCE_DOUBLE(*a1 & 0x7FFFFFFFFFFFFFFFLL) != 0.0) & (COERCE_DOUBLE(*a1 & 0x7FFFFFFFFFFFFFFFLL) < 0.0001);
}
