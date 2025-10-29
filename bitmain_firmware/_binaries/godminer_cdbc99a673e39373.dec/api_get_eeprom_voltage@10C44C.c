int __fastcall api_get_eeprom_voltage(int a1)
{
  int v1; // r0
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = dword_2E9F84[a1 + 2];
  v3 = 0;
  eeprom_get_voltage(v1, &v3);
  return v3;
}
