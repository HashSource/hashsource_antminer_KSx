int __fastcall sub_2159D4(int *a1, int a2, unsigned int a3)
{
  int v3; // r12
  unsigned int v4; // r0
  int v5; // lr
  _BOOL4 v6; // r0

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 4);
  v5 = v4 - a3;
  v6 = *(_DWORD *)v3 != 0 || v4 < a3;
  *(_DWORD *)v3 = v6;
  *(_DWORD *)(v3 + 4) = v5;
  if ( v6 )
    return 1;
  else
    return <core::fmt::Formatter as core::fmt::Write>::write_str(*(_DWORD **)(v3 + 8));
}
