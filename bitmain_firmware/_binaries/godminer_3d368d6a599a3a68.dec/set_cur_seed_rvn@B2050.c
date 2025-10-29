int __fastcall set_cur_seed_rvn(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2E9560);
  *(_QWORD *)&byte_2E9578 = 0;
  qword_2E9580 = 0;
  dbl_2E9588 = 0.0;
  dbl_2E9590 = 0.0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)&byte_2E9578 = *(_DWORD *)a1;
  unk_2E957C = v2;
  LODWORD(qword_2E9580) = v3;
  HIDWORD(qword_2E9580) = v4;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(double *)(a1 + 24);
  LODWORD(dbl_2E9588) = *(_DWORD *)(a1 + 16);
  HIDWORD(dbl_2E9588) = v5;
  dbl_2E9590 = v6;
  return pthread_mutex_unlock(&stru_2E9560);
}
