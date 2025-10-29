char *dhash_content_zec_1746()
{
  char *result; // r0

  result = (char *)calloc(1u, 0x18u);
  strcpy(result, "d:\v");
  *((_DWORD *)result + 1) = sub_B39D8;
  *((_DWORD *)result + 2) = sub_B3C7C;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = "sol";
  *((_DWORD *)result + 5) = 60;
  return result;
}
