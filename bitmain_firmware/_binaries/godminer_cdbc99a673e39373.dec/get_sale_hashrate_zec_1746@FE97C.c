int __fastcall get_sale_hashrate_zec_1746(int a1, double *a2, int *a3)
{
  double v3; // d16
  void (__fastcall *v5)(int, double *); // r5
  int result; // r0
  int v9; // r3
  bool v10; // zf
  double v11; // [sp+0h] [bp-Ch] BYREF

  v5 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v11 = 0.0;
  v5(a1, &v11);
  result = strcmp((const char *)(a1 + 280), "Z15 Pro");
  v10 = result == 0;
  if ( result )
  {
    result = 25;
  }
  else
  {
    v3 = v11;
    v9 = 10;
  }
  if ( v10 )
  {
    *a2 = v3 * 0.920000017;
    *a3 = v9;
  }
  return result;
}
