unsigned int __fastcall <u16 as core::num::bignum::FullOps>::full_mul_add(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4)
{
  return (a2 * a1 + a3 + (unsigned int)a4) >> 16;
}
