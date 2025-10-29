_DWORD *dhash_content_kas_2380()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x18u);
  *result = sub_B03A4;
  result[1] = sub_B03BC;
  result[2] = sub_B0494;
  result[3] = 0;
  result[4] = "H";
  result[5] = 60;
  return result;
}
