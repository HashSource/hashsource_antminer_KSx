int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  int v3; // r2
  float v4; // s15

  v3 = *(_DWORD *)(a1 + 332);
  v4 = *(float *)(a1 + 964);
  *a2 = (float)((float)(v4 + v4) / 130050.0) * (double)v3 * (double)(8 * *(_DWORD *)(a1 + 336) - 5) * 1000.0 * 1000.0;
  return 0;
}
