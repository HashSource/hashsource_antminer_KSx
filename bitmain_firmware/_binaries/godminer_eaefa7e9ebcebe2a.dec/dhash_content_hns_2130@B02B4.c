_DWORD *dhash_content_hns_2130()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_B00A0;
  result[1] = sub_B00D4;
  result[2] = sub_B0248;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
