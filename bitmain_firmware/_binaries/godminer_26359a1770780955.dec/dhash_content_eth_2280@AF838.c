_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_AF564;
  result[1] = sub_AF5C8;
  result[2] = sub_AF744;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
