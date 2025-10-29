int __fastcall api_get_eeprom_PT2_freq(int a1)
{
  int v1; // r0
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = dword_2E8A94[a1];
  v3 = 0;
  eeprom_get_PT2_freq(v1, &v3);
  return v3;
}
