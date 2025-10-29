int __fastcall get_cur_seed(double *a1)
{
  int v2; // r1
  __int64 v3; // r2
  int v4; // r1
  double v5; // r2

  pthread_mutex_lock(&stru_2F3B60);
  v2 = unk_2F3B7C;
  v3 = qword_2F3B80;
  *(_DWORD *)a1 = *(_DWORD *)&byte_2F3B78;
  *((_DWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 1) = v3;
  v4 = HIDWORD(dbl_2F3B88);
  v5 = dbl_2F3B90;
  *((_DWORD *)a1 + 4) = LODWORD(dbl_2F3B88);
  *((_DWORD *)a1 + 5) = v4;
  a1[3] = v5;
  return pthread_mutex_unlock(&stru_2F3B60);
}
