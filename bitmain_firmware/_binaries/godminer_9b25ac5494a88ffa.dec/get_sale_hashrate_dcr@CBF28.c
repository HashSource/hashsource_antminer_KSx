int __fastcall get_sale_hashrate_dcr(int a1, double *a2, _DWORD *a3)
{
  int result; // r0
  double v7; // [sp+0h] [bp-Ch] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v7);
  if ( *(_BYTE *)(a1 + 296) != 68 )
    return 25;
  if ( *(_BYTE *)(a1 + 297) != 82 )
    return 25;
  if ( *(_BYTE *)(a1 + 298) != 55 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 299);
  if ( *(_BYTE *)(a1 + 299) )
    return 25;
  *a2 = v7 * 0.985;
  *a3 = 100;
  return result;
}
