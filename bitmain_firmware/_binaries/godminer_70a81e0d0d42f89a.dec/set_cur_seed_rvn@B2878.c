int __fastcall set_cur_seed_rvn(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2EB870);
  *(_QWORD *)&byte_2EB888 = 0;
  qword_2EB890 = 0;
  dbl_2EB898 = 0.0;
  dbl_2EB8A0 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2EB888 = *(_DWORD *)a1;
  unk_2EB88C = v2;
  LODWORD(qword_2EB890) = v3;
  HIDWORD(qword_2EB890) = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2EB898) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2EB898) = v5;
  dbl_2EB8A0 = v6;
  return pthread_mutex_unlock(&stru_2EB870);
}
