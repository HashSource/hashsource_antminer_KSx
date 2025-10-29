// Alternative name is '_ZN60_$LT$libc..unix..ipv6_mreq$u20$as$u20$core..clone..Clone$GT$5clone17h5b2144068f9c2d2aE'
_DWORD *__fastcall <libc::unix::linux_like::linux::in6_pktinfo as core::clone::Clone>::clone(
        _DWORD *result,
        _DWORD *a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r12
  int v5; // lr

  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  v5 = a2[4];
  *result = *a2;
  result[1] = v2;
  result[2] = v3;
  result[3] = v4;
  result[4] = v5;
  return result;
}
