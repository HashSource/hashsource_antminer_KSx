int __fastcall get_cur_seed_rvn(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2EA568);
  v2 = *(_DWORD *)&algn_2EA581[3];
  v3 = *(_DWORD *)&algn_2EA581[7];
  v4 = *(_DWORD *)&algn_2EA581[11];
  *(_DWORD *)a1 = *(_DWORD *)&byte_2EA580;
  *(_DWORD *)(a1 + 4) = v2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v4;
  v5 = HIDWORD(dbl_2EA590);
  v6 = dbl_2EA598;
  *(_DWORD *)(a1 + 16) = LODWORD(dbl_2EA590);
  *(_DWORD *)(a1 + 20) = v5;
  *(double *)(a1 + 24) = v6;
  return pthread_mutex_unlock(&stru_2EA568);
}
