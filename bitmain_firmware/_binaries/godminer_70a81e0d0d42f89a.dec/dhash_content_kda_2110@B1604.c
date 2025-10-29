_DWORD *dhash_content_kda_2110()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_B1394;
  result[1] = sub_B1278;
  result[2] = sub_B159C;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
