int __fastcall get_qualify_nonce_num_ckb(int a1, float *a2)
{
  unsigned __int64 v2; // d17
  void (__fastcall *v4)(int, double *); // r2
  double v6; // d19
  float v8; // s15
  double v9; // [sp+0h] [bp-Ch] BYREF

  v4 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v9 = 0.0;
  v4(a1, &v9);
  LODWORD(v2) = *(_DWORD *)(a1 + 408);
  v6 = COERCE_DOUBLE(sub_25A6F8(vshld_u64(1u, v2)));
  v8 = v9 / v6 / 92.0 * 0.3;
  *a2 = v8;
  return 0;
}
