int __fastcall get_cur_seed_rvn(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2F3D88);
  v2 = *(_DWORD *)&algn_2F3DA1[3];
  v3 = *(_DWORD *)&algn_2F3DA1[7];
  v4 = *(_DWORD *)&algn_2F3DA1[11];
  *(_DWORD *)a1 = *(_DWORD *)&byte_2F3DA0;
  *(_DWORD *)(a1 + 4) = v2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = v4;
  v5 = HIDWORD(dbl_2F3DB0);
  v6 = dbl_2F3DB8;
  *(_DWORD *)(a1 + 16) = LODWORD(dbl_2F3DB0);
  *(_DWORD *)(a1 + 20) = v5;
  *(double *)(a1 + 24) = v6;
  return pthread_mutex_unlock(&stru_2F3D88);
}
