int __fastcall std::sys::unix::process::process_inner::<impl std::os::linux::process::ChildExt for std::process::Child>::pidfd(
        _DWORD *a1,
        int a2)
{
  int v3; // r1
  int v4; // t1
  int result; // r0
  _DWORD v6[2]; // [sp+0h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a2 + 12);
  v3 = a2 + 12;
  if ( v4 == -1 )
  {
    sub_1D3A70(v6, aNoPidfdWasCrea, 21);
    result = v6[0];
    v3 = v6[1];
    *a1 = v6[0];
  }
  else
  {
    result = 4;
    *(_BYTE *)a1 = 4;
  }
  a1[1] = v3;
  return result;
}
