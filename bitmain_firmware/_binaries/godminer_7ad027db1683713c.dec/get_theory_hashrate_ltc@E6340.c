int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  int v3; // r2
  float v4; // s15

  v3 = *(_DWORD *)(a1 + 312);
  v4 = *(float *)(a1 + 940);
  *a2 = (float)((float)(v4 + v4) / 130050.0) * (double)v3 * (double)(8 * *(_DWORD *)(a1 + 316) - 5) * 1000.0 * 1000.0;
  return 0;
}
