int __fastcall get_cur_seed(double *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  double v6; // r2

  pthread_mutex_lock(&stru_2D32E8);
  v2 = *(_DWORD *)&algn_2D3301[3];
  v3 = *(_DWORD *)&algn_2D3301[7];
  v4 = *(_DWORD *)&algn_2D3301[11];
  *(_DWORD *)a1 = *(_DWORD *)&byte_2D3300;
  *((_DWORD *)a1 + 1) = v2;
  *((_DWORD *)a1 + 2) = v3;
  *((_DWORD *)a1 + 3) = v4;
  v5 = HIDWORD(dbl_2D3310);
  v6 = dbl_2D3318;
  *((_DWORD *)a1 + 4) = LODWORD(dbl_2D3310);
  *((_DWORD *)a1 + 5) = v5;
  a1[3] = v6;
  return pthread_mutex_unlock(&stru_2D32E8);
}
