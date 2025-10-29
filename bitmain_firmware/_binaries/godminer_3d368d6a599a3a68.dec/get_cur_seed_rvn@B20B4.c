int __fastcall get_cur_seed_rvn(int a1)
{
  int v2; // r1
  __int64 v3; // r2
  int v4; // r1
  double v5; // r2

  pthread_mutex_lock(&stru_2E9560);
  v2 = unk_2E957C;
  v3 = qword_2E9580;
  *(_DWORD *)a1 = *(_DWORD *)&byte_2E9578;
  *(_DWORD *)(a1 + 4) = v2;
  *(_QWORD *)(a1 + 8) = v3;
  v4 = HIDWORD(dbl_2E9588);
  v5 = dbl_2E9590;
  *(_DWORD *)(a1 + 16) = LODWORD(dbl_2E9588);
  *(_DWORD *)(a1 + 20) = v4;
  *(double *)(a1 + 24) = v5;
  return pthread_mutex_unlock(&stru_2E9560);
}
