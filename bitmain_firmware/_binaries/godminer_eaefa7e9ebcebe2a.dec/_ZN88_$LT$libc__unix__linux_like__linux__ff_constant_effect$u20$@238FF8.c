int __fastcall <libc::unix::linux_like::linux::ff_constant_effect as core::clone::Clone>::clone(int result, int *a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *a2;
  v3 = a2[1];
  *(_WORD *)(result + 8) = *((_WORD *)a2 + 4);
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)result = v2;
  return result;
}
