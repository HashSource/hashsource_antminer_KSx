_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_AF65C;
  result[1] = sub_AF6C0;
  result[2] = sub_AF83C;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
