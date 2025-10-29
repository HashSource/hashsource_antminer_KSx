int __fastcall set_cur_seed(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2D47D8);
  *(_QWORD *)&byte_2D47F0 = 0;
  *(_QWORD *)&algn_2D47F1[7] = 0;
  dbl_2D4800 = 0.0;
  dbl_2D4808 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2D47F0 = *(_DWORD *)a1;
  *(_DWORD *)&algn_2D47F1[3] = v2;
  *(_DWORD *)&algn_2D47F1[7] = v3;
  *(_DWORD *)&algn_2D47F1[11] = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2D4800) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2D4800) = v5;
  dbl_2D4808 = v6;
  return pthread_mutex_unlock(&stru_2D47D8);
}
