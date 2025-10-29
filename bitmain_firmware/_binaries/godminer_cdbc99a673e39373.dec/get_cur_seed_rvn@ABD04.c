int __fastcall get_cur_seed_rvn(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2D49B8);
  v2 = *(_DWORD *)&algn_2D49D1[3];
  v3 = *(_DWORD *)&algn_2D49D1[7];
  v4 = *(_DWORD *)&algn_2D49D1[11];
  *(_DWORD *)a1 = *(_DWORD *)&byte_2D49D0;
  *(_DWORD *)(a1 + 4) = v2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v4;
  v5 = HIDWORD(dbl_2D49E0);
  v6 = dbl_2D49E8;
  *(_DWORD *)(a1 + 16) = LODWORD(dbl_2D49E0);
  *(_DWORD *)(a1 + 20) = v5;
  *(double *)(a1 + 24) = v6;
  return pthread_mutex_unlock(&stru_2D49B8);
}
