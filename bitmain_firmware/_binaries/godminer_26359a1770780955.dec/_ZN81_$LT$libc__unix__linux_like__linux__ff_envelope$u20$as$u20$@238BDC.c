// Alternative name is '_ZN58_$LT$libc..unix..winsize$u20$as$u20$core..clone..Clone$GT$5clone17h66a59e0d63b66360E'
// Alternative name is '_ZN78_$LT$libc..unix..linux_like..linux..input_id$u20$as$u20$core..clone..Clone$GT$5clone17hc5952aac15c4a8adE'
_DWORD *__fastcall <libc::unix::linux_like::linux::ff_envelope as core::clone::Clone>::clone(_DWORD *result, int *a2)
{
  int v2; // r2

  v2 = *a2;
  result[1] = a2[1];
  *result = v2;
  return result;
}
