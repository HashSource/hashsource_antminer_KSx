_DWORD *dhash_content_kda_2110()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_B0BAC;
  result[1] = sub_B0A90;
  result[2] = sub_B0DB4;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
