int __fastcall set_cur_seed(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2EA388);
  *(_QWORD *)&byte_2EA3A0 = 0;
  *(_QWORD *)&algn_2EA3A1[7] = 0;
  dbl_2EA3B0 = 0.0;
  dbl_2EA3B8 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2EA3A0 = *(_DWORD *)a1;
  *(_DWORD *)&algn_2EA3A1[3] = v2;
  *(_DWORD *)&algn_2EA3A1[7] = v3;
  *(_DWORD *)&algn_2EA3A1[11] = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2EA3B0) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2EA3B0) = v5;
  dbl_2EA3B8 = v6;
  return pthread_mutex_unlock(&stru_2EA388);
}
