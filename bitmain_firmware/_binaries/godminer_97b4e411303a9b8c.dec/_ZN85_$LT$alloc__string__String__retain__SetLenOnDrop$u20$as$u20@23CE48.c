int __fastcall <alloc::string::String::retain::SetLenOnDrop as core::ops::drop::Drop>::drop(int *a1)
{
  int v1; // r1
  int v2; // r2
  int result; // r0

  v1 = *a1;
  v2 = a1[1];
  result = a1[2];
  *(_DWORD *)(result + 8) = v1 - v2;
  return result;
}
