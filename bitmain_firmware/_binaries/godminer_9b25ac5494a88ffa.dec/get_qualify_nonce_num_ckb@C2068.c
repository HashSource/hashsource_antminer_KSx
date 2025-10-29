int __fastcall get_qualify_nonce_num_ckb(int a1, float *a2)
{
  unsigned __int64 v2; // d17
  void (__fastcall *v4)(int, double *); // r2
  unsigned __int64 v6; // r0
  double v7; // d19
  float v9; // s15
  double v10; // [sp+0h] [bp-Ch] BYREF

  v4 = *(void (__fastcall **)(int, double *))(a1 + 132);
  v10 = 0.0;
  v4(a1, &v10);
  LODWORD(v2) = *(_DWORD *)(a1 + 424);
  v6 = vshld_u64(1u, v2);
  v7 = sub_26C5E0(v6, HIDWORD(v6));
  v9 = v10 / v7 / 92.0 * 0.3;
  *a2 = v9;
  return 0;
}
