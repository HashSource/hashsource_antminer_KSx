// Alternative name is '_ZN76_$LT$libc..unix..linux_like..linux..sembuf$u20$as$u20$core..clone..Clone$GT$5clone17ha0ceae438c57d415E'
int __fastcall <libc::unix::linux_like::linux::gnu::b32::arm::seccomp_notif_sizes as core::clone::Clone>::clone(
        int result,
        int *a2)
{
  int v2; // r2

  v2 = *a2;
  *(_WORD *)(result + 4) = *((_WORD *)a2 + 2);
  *(_DWORD *)result = v2;
  return result;
}
