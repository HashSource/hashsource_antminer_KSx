// Alternative name is '_ZN74_$LT$libc..unix..linux_like..linux..spwd$u20$as$u20$core..clone..Clone$GT$5clone17h0d7b395168a50e18E'
// Alternative name is '_ZN83_$LT$libc..unix..linux_like..linux..gnu..glob64_t$u20$as$u20$core..clone..Clone$GT$5clone17h2e04e8ee6e4163cfE'
int *__fastcall <libc::unix::linux_like::linux::glob_t as core::clone::Clone>::clone(_DWORD *a1, int *a2)
{
  int *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r12
  int v6; // lr
  int *result; // r0
  int v8; // r3
  int v9; // r4
  int v10; // r12
  int v11; // lr

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v2 = a2 + 4;
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  result = a1 + 4;
  v8 = v2[1];
  v9 = v2[2];
  v10 = v2[3];
  v11 = v2[4];
  *result = *v2;
  result[1] = v8;
  result[2] = v9;
  result[3] = v10;
  result[4] = v11;
  return result;
}
