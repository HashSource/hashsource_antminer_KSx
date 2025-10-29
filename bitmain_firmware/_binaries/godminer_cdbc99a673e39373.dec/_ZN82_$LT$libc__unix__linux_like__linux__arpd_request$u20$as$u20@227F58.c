_DWORD *__fastcall <libc::unix::linux_like::linux::arpd_request as core::clone::Clone>::clone(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  _DWORD *result; // r0
  int v7; // r3
  int v8; // r12
  int v9; // lr

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v2 = a2 + 3;
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  result = a1 + 3;
  v7 = v2[1];
  v8 = v2[2];
  v9 = v2[3];
  *result = *v2;
  result[1] = v7;
  result[2] = v8;
  result[3] = v9;
  return result;
}
