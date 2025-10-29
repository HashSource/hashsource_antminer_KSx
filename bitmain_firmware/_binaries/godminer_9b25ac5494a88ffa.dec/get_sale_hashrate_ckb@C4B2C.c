int __fastcall get_sale_hashrate_ckb(int a1, double *a2, _DWORD *a3)
{
  double v4; // d8
  void (__fastcall *v6)(int, double *); // r5
  const char *v8; // r4
  double v10; // [sp+0h] [bp-Ch] BYREF

  v4 = 0.0;
  v6 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v10 = 0.0;
  v6(a1, &v10);
  if ( *(_BYTE *)(a1 + 296) != 75 || *(_BYTE *)(a1 + 297) != 55 || *(_BYTE *)(a1 + 298) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 240));
  v8 = (const char *)(api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 240)) + 5);
  if ( !strncmp(v8, "B1C1", 4u) || !strncmp(v8, "B1C2", 4u) )
  {
    v4 = 0.982900023;
  }
  else if ( !strncmp(v8, "B2C1", 4u) )
  {
    v4 = 0.970799983;
  }
  else if ( !strncmp(v8, "B2C2", 4u) )
  {
    v4 = 0.970799983;
  }
  *a2 = v10 * v4;
  *a3 = 50;
  return 0;
}
