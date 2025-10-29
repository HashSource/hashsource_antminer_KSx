int __fastcall get_qualify_hashrate_zec_1746(int a1, double *a2)
{
  double v2; // d16
  void (__fastcall *v4)(int, double *); // r2
  int result; // r0
  bool v7; // zf
  double v8; // [sp+0h] [bp-Ch] BYREF

  v4 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v8 = 0.0;
  v4(a1, &v8);
  result = strcmp((const char *)(a1 + 280), "Z15 Pro");
  v7 = result == 0;
  if ( result )
    result = 25;
  else
    v2 = v8;
  if ( v7 )
    *a2 = v2 * 0.959999979;
  return result;
}
