int __fastcall get_cur_seed(int a1)
{
  int v2; // r1
  __int64 v3; // r2
  int v4; // r1
  double v5; // r2

  pthread_mutex_lock(&stru_2EB690);
  v2 = unk_2EB6AC;
  v3 = qword_2EB6B0;
  *(_DWORD *)a1 = *(_DWORD *)&byte_2EB6A8;
  *(_DWORD *)(a1 + 4) = v2;
  *(_QWORD *)(a1 + 8) = v3;
  v4 = HIDWORD(dbl_2EB6B8);
  v5 = dbl_2EB6C0;
  *(_DWORD *)(a1 + 16) = LODWORD(dbl_2EB6B8);
  *(_DWORD *)(a1 + 20) = v4;
  *(double *)(a1 + 24) = v5;
  return pthread_mutex_unlock(&stru_2EB690);
}
