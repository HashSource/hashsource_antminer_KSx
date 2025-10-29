_DWORD *__fastcall <libc::unix::linux_like::arphdr as core::clone::Clone>::clone(_DWORD *result, int *a2)
{
  int v2; // r2

  v2 = *a2;
  result[1] = a2[1];
  *result = v2;
  return result;
}
