int *__fastcall object::read::coff::section::<impl object::pe::ImageSectionHeader>::coff_file_range(
        int *result,
        int a2)
{
  int v2; // r2
  int v3; // r2

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 36) & 0x80) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    result[1] = *(_DWORD *)(a2 + 20);
    result[2] = v3;
    v2 = 1;
  }
  *result = v2;
  return result;
}
