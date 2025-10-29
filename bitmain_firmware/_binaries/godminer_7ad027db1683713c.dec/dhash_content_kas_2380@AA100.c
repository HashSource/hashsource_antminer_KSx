_DWORD *dhash_content_kas_2380()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_A9FB4;
  result[1] = sub_A9FCC;
  result[2] = sub_AA0A4;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
