int __fastcall <std::sys_common::process::CommandEnvs as core::iter::traits::iterator::Iterator>::next(
        _DWORD *a1,
        int *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int result; // r0
  int v7; // r3
  int v8; // r1

  v3 = sub_1ABBE8(a2);
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    result = *(_DWORD *)(v3 + 8);
    v7 = *(_DWORD *)(v4 + 4);
    v8 = *(_DWORD *)(v4 + 8);
    *a1 = v5;
    a1[1] = result;
    a1[2] = v7;
    a1[3] = v8;
  }
  else
  {
    *a1 = 0;
    return 0;
  }
  return result;
}
