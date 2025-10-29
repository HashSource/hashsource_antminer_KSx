_DWORD *dhash_content_kas_2380()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_B02AC;
  result[1] = sub_B02C4;
  result[2] = sub_B039C;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
