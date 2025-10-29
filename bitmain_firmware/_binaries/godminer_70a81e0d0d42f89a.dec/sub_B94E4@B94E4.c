int sub_B94E4()
{
  char *v0; // r3
  __int64 v1; // r0
  char *v2; // r2
  __int64 v3; // r4

  v0 = &byte_2EB9A8;
  LODWORD(v1) = "age_and_freq_by_eeprom_chip_ft";
  HIDWORD(v1) = 0;
  v2 = &byte_2EB9A8;
  do
  {
    *((_QWORD *)v2 + 7) = v1;
    v2 += 16;
  }
  while ( v2 != (char *)&unk_2EBA28 );
  LODWORD(v3) = "age_and_freq_by_eeprom_chip_ft";
  HIDWORD(v3) = 0;
  do
  {
    *((_DWORD *)v0 + 174) = "age_and_freq_by_eeprom_chip_ft";
    *((_DWORD *)v0 + 175) = 0;
    v0 += 16;
    *((_QWORD *)v0 + 21) = 600;
    *((_QWORD *)v0 + 53) = 600;
  }
  while ( v0 != (char *)&unk_2EBAA8 );
  dword_2EBD80 = (int)"age_and_freq_by_eeprom_chip_ft";
  dword_2EBD84 = 0;
  *(_QWORD *)&dword_2EB9B0 = v3;
  *(_QWORD *)&dword_2EB9C0 = v3;
  dword_2EBD70 = (int)"age_and_freq_by_eeprom_chip_ft";
  dword_2EBD74 = 0;
  dword_2EBD60 = (int)"age_and_freq_by_eeprom_chip_ft";
  dword_2EBD64 = 0;
  *(_QWORD *)&dword_2EB9D0 = v3;
  byte_2EBD88 = 1;
  return 0;
}
