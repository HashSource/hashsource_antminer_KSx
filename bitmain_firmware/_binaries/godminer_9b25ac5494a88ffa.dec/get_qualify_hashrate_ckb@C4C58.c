int __fastcall get_qualify_hashrate_ckb(int a1, double *a2)
{
  double v3; // d8
  void (__fastcall *v5)(int, double *); // r2
  const char *v6; // r4
  double v8; // [sp+0h] [bp-Ch] BYREF

  v3 = 0.0;
  v5 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v8 = 0.0;
  v5(a1, &v8);
  if ( *(_BYTE *)(a1 + 296) != 75 || *(_BYTE *)(a1 + 297) != 55 || *(_BYTE *)(a1 + 298) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 240));
  v6 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 240)) + 5);
  if ( !strncmp(v6, "B1C1", 4u) )
  {
    v3 = 0.985000014;
  }
  else if ( !strncmp(v6, "B2C1", 4u) )
  {
    v3 = 0.972000003;
  }
  *a2 = v8 * v3;
  return 0;
}
