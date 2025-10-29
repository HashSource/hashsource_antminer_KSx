_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_AFB1C;
  result[1] = sub_AFB80;
  result[2] = sub_AFCFC;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
