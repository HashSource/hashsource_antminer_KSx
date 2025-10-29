int __fastcall get_qualify_hashrate_hns(int a1, double *a2)
{
  double v3; // d8
  void (__fastcall *v5)(int, double *); // r2
  const char *v7; // r4
  double v8; // [sp+0h] [bp-Ch] BYREF

  v3 = 0.0;
  v5 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v8 = 0.0;
  v5(a1, &v8);
  if ( *(_BYTE *)(a1 + 300) != 72 || *(_BYTE *)(a1 + 301) != 83 || *(_BYTE *)(a1 + 302) != 51 || *(_BYTE *)(a1 + 303) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 244));
  v7 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 244)) + 5);
  if ( !strncmp(v7, "B1C1", 4u) )
  {
    v3 = 0.99000001;
  }
  else if ( !strncmp(v7, "B2C1", 4u) )
  {
    v3 = 0.970700026;
  }
  *a2 = v8 * v3;
  return 0;
}
