int __fastcall add_eeprom_device(int a1, int a2)
{
  int v2; // r2

  v2 = dword_30BC2C++;
  dword_30BC28[v2 + 2] = a1;
  return a2;
}
