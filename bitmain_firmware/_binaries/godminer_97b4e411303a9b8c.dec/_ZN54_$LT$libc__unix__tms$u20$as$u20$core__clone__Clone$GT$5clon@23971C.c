// Alternative name is '_ZN70_$LT$libc..unix..linux_like..Dl_info$u20$as$u20$core..clone..Clone$GT$5clone17h8c0f30929f4d6cecE'
// Alternative name is '_ZN76_$LT$libc..unix..linux_like..linux..option$u20$as$u20$core..clone..Clone$GT$5clone17h2f6be51732178c38E'
// Alternative name is '_ZN56_$LT$libc..unix..group$u20$as$u20$core..clone..Clone$GT$5clone17hb961d81a0bb16a41E'
// Alternative name is '_ZN83_$LT$libc..unix..linux_like..linux..inotify_event$u20$as$u20$core..clone..Clone$GT$5clone17hb71be2b195f2c166E'
// Alternative name is '_ZN58_$LT$libc..unix..servent$u20$as$u20$core..clone..Clone$GT$5clone17h996981e2fb6c7df3E'
// Alternative name is '_ZN86_$LT$libc..unix..linux_like..linux..gnu..nl_mmap_req$u20$as$u20$core..clone..Clone$GT$5clone17h77b4dc5baaf12f2dE'
_DWORD *__fastcall <libc::unix::tms as core::clone::Clone>::clone(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  *result = v2;
  result[1] = v3;
  result[2] = v4;
  result[3] = v5;
  return result;
}
