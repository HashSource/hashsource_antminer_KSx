_DWORD *__fastcall <libc::unix::linux_like::linux::ff_condition_effect as core::clone::Clone>::clone(
        _DWORD *result,
        int *a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *a2;
  v3 = a2[1];
  result[2] = a2[2];
  result[1] = v3;
  *result = v2;
  return result;
}
