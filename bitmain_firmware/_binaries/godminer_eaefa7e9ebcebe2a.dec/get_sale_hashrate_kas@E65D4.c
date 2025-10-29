int __fastcall get_sale_hashrate_kas(int a1, double *a2, _DWORD *a3)
{
  int v7; // r5
  double v8; // [sp+0h] [bp-Ch] BYREF

  v8 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v8);
  if ( *(_BYTE *)(a1 + 300) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 301) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 302) != 51 )
    return 25;
  v7 = *(unsigned __int8 *)(a1 + 303);
  if ( *(_BYTE *)(a1 + 303) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 244));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 244));
  *a2 = v8 * 0.980000019;
  *a3 = 100;
  return v7;
}
