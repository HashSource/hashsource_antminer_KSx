_DWORD *dhash_content_eth_2282()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_AF8B0;
  result[1] = sub_AF914;
  result[2] = sub_AFA90;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
