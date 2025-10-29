unsigned __int64 __fastcall be256todouble(unsigned __int64 *a1)
{
  sub_25A6F8(_byteswap_uint64(*a1));
  sub_25A6F8(_byteswap_uint64(a1[1]));
  sub_25A6F8(_byteswap_uint64(a1[2]));
  return sub_25A6F8(_byteswap_uint64(a1[3]));
}
