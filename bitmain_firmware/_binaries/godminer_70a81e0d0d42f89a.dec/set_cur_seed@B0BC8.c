int __fastcall set_cur_seed(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2EB690);
  *(_QWORD *)&byte_2EB6A8 = 0;
  qword_2EB6B0 = 0;
  dbl_2EB6B8 = 0.0;
  dbl_2EB6C0 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2EB6A8 = *(_DWORD *)a1;
  unk_2EB6AC = v2;
  LODWORD(qword_2EB6B0) = v3;
  HIDWORD(qword_2EB6B0) = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2EB6B8) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2EB6B8) = v5;
  dbl_2EB6C0 = v6;
  return pthread_mutex_unlock(&stru_2EB690);
}
