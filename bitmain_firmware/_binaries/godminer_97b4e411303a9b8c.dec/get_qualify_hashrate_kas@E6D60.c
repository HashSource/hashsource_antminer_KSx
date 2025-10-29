int __fastcall get_qualify_hashrate_kas(int a1, double *a2)
{
  int v5; // r5
  double v6; // [sp+0h] [bp-8h] BYREF

  v6 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v6);
  if ( *(_BYTE *)(a1 + 300) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 301) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 302) != 51 )
    return 25;
  v5 = *(unsigned __int8 *)(a1 + 303);
  if ( *(_BYTE *)(a1 + 303) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 244));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 244));
  *a2 = v6 * 0.980000019;
  return v5;
}
