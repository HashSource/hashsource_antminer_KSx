int __fastcall <std::io::Guard as core::ops::drop::Drop>::drop(int *a1)
{
  int v1; // r1
  int result; // r0

  v1 = *a1;
  result = a1[1];
  *(_DWORD *)(result + 8) = v1;
  return result;
}
