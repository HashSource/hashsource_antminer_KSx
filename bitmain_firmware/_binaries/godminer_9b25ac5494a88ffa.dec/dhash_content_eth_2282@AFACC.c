_DWORD *dhash_content_eth_2282()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_AF7F8;
  result[1] = sub_AF85C;
  result[2] = sub_AF9D8;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
