char *dhash_content_dcr_1727()
{
  char *result; // r0

  result = (char *)calloc(1u, 0x18u);
  strcpy(result, "tD\v");
  *((_DWORD *)result + 1) = sub_B44A8;
  *((_DWORD *)result + 2) = sub_B46AC;
  *((_DWORD *)result + 3) = sub_B4644;
  *((_DWORD *)result + 4) = "H";
  *((_DWORD *)result + 5) = 60;
  return result;
}
