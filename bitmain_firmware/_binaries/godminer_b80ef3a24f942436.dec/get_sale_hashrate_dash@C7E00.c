int __fastcall get_sale_hashrate_dash(int a1, double *a2, _DWORD *a3)
{
  int result; // r0
  double v7; // [sp+0h] [bp-Ch] BYREF

  v7 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v7);
  if ( *(_BYTE *)(a1 + 304) != 68 )
    return 25;
  if ( *(_BYTE *)(a1 + 305) != 57 )
    return 25;
  result = *(unsigned __int8 *)(a1 + 306);
  if ( *(_BYTE *)(a1 + 306) )
    return 25;
  *a2 = v7 * 0.977;
  *a3 = 10;
  return result;
}
