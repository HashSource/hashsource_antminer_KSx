int __fastcall set_cur_seed(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2F3B60);
  *(_QWORD *)&byte_2F3B78 = 0;
  qword_2F3B80 = 0;
  dbl_2F3B88 = 0.0;
  dbl_2F3B90 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2F3B78 = *(_DWORD *)a1;
  unk_2F3B7C = v2;
  LODWORD(qword_2F3B80) = v3;
  HIDWORD(qword_2F3B80) = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2F3B88) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2F3B88) = v5;
  dbl_2F3B90 = v6;
  return pthread_mutex_unlock(&stru_2F3B60);
}
