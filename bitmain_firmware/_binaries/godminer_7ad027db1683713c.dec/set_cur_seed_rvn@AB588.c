int __fastcall set_cur_seed_rvn(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2D34C8);
  *(_QWORD *)&byte_2D34E0 = 0;
  *(_QWORD *)&algn_2D34E1[7] = 0;
  dbl_2D34F0 = 0.0;
  dbl_2D34F8 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2D34E0 = *(_DWORD *)a1;
  *(_DWORD *)&algn_2D34E1[3] = v2;
  *(_DWORD *)&algn_2D34E1[7] = v3;
  *(_DWORD *)&algn_2D34E1[11] = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2D34F0) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2D34F0) = v5;
  dbl_2D34F8 = v6;
  return pthread_mutex_unlock(&stru_2D34C8);
}
