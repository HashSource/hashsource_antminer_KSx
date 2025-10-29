_DWORD *__fastcall std::fs::FileTimes::set_accessed(_DWORD *a1, int *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // lr
  _DWORD *result; // r0
  int v11; // r3
  int v12; // r12
  int v13; // lr

  *a2 = a3;
  a2[1] = a4;
  a2[2] = a5;
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v5 = a2 + 4;
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v8;
  a1[3] = v9;
  result = a1 + 4;
  v11 = v5[1];
  v12 = v5[2];
  v13 = v5[3];
  *result = *v5;
  result[1] = v11;
  result[2] = v12;
  result[3] = v13;
  return result;
}
