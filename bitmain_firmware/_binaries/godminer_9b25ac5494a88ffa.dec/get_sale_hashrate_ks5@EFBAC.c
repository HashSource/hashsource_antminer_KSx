int __fastcall get_sale_hashrate_ks5(int a1, double *a2, _DWORD *a3)
{
  int v7; // r5
  double v8; // [sp+0h] [bp-Ch] BYREF

  v8 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v8);
  if ( *(_BYTE *)(a1 + 296) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 297) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 298) != 53 )
    return 25;
  v7 = *(unsigned __int8 *)(a1 + 299);
  if ( *(_BYTE *)(a1 + 299) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 240));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 240));
  *a2 = v8 * 0.980000019;
  *a3 = 1000;
  return v7;
}
