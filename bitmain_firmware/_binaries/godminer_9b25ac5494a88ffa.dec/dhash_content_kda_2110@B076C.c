_DWORD *dhash_content_kda_2110()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_B04FC;
  result[1] = sub_B03E0;
  result[2] = sub_B0704;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
