_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_AFB5C;
  result[1] = sub_AFBC0;
  result[2] = sub_AFD3C;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
