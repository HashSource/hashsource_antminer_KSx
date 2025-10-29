char *dhash_content_kda_2110()
{
  char *result; // r0

  result = (char *)calloc(1u, 0x18u);
  strcpy(result, "l\v\v");
  *((_DWORD *)result + 1) = sub_B0A50;
  *((_DWORD *)result + 2) = sub_B0D74;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = "H";
  *((_DWORD *)result + 5) = 60;
  return result;
}
