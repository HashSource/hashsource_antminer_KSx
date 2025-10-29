double __fastcall be256todouble(unsigned int *a1)
{
  sub_26C9C0(bswap32(a1[1]), bswap32(*a1));
  sub_26C9C0(bswap32(a1[3]), bswap32(a1[2]));
  sub_26C9C0(bswap32(a1[5]), bswap32(a1[4]));
  return sub_26C9C0(bswap32(a1[7]), bswap32(a1[6]));
}
