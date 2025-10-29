int __fastcall std::sys::unix::process::process_inner::<impl std::os::linux::process::ChildExt for std::process::Child>::take_pidfd(
        _DWORD *a1,
        int a2)
{
  int result; // r0
  int v4; // r1
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  result = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = -1;
  if ( result == -1 )
  {
    sub_1CFD34(v5, aNoPidfdWasCrea, 21);
    result = v5[0];
    v4 = v5[1];
    *a1 = v5[0];
    a1[1] = v4;
  }
  else
  {
    a1[1] = result;
    *(_BYTE *)a1 = 4;
  }
  return result;
}
