int __fastcall get_cur_seed(int a1)
{
  int v2; // r1
  __int64 v3; // r2
  int v4; // r1
  double v5; // r2

  pthread_mutex_lock(&stru_2E9380);
  v2 = unk_2E939C;
  v3 = qword_2E93A0;
  *(_DWORD *)a1 = *(_DWORD *)&byte_2E9398;
  *(_DWORD *)(a1 + 4) = v2;
  *(_QWORD *)(a1 + 8) = v3;
  v4 = HIDWORD(dbl_2E93A8);
  v5 = dbl_2E93B0;
  *(_DWORD *)(a1 + 16) = LODWORD(dbl_2E93A8);
  *(_DWORD *)(a1 + 20) = v4;
  *(double *)(a1 + 24) = v5;
  return pthread_mutex_unlock(&stru_2E9380);
}
