int __fastcall get_theory_hashrate_kas(int a1, double *a2)
{
  float v2; // s15

  v2 = *(float *)(a1 + 976);
  *a2 = v2 * 4140.0 * 1000.0 * 1000.0;
  return 0;
}
