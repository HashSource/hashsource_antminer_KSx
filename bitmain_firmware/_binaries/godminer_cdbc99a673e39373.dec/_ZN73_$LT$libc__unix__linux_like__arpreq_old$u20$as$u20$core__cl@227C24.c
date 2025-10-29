int *__fastcall <libc::unix::linux_like::arpreq_old as core::clone::Clone>::clone(_DWORD *a1, int *a2)
{
  int *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  int v6; // lr
  _DWORD *v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r12
  int v11; // lr
  int *result; // r0
  int v13; // r3
  int v14; // r4
  int v15; // r12
  int v16; // lr

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v2 = a2 + 4;
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  v7 = a1 + 4;
  v8 = *v2;
  v9 = v2[1];
  v10 = v2[2];
  v11 = v2[3];
  v2 += 4;
  *v7 = v8;
  v7[1] = v9;
  v7[2] = v10;
  v7[3] = v11;
  result = v7 + 4;
  v13 = v2[1];
  v14 = v2[2];
  v15 = v2[3];
  v16 = v2[4];
  *result = *v2;
  result[1] = v13;
  result[2] = v14;
  result[3] = v15;
  result[4] = v16;
  return result;
}
