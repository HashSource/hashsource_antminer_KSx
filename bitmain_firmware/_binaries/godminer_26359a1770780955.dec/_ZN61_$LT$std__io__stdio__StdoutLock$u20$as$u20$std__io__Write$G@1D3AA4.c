int __fastcall <std::io::stdio::StdoutLock as std::io::Write>::flush(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  int *v4; // r4
  int v5; // r1
  int result; // r0
  _DWORD v7[3]; // [sp+8h] [bp-10h] BYREF
  _BYTE v8[4]; // [sp+14h] [bp-4h] BYREF

  v3 = *a2;
  v4 = (int *)(*a2 + 12);
  if ( *v4 )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v8, (int)&off_2DE2E8, (int)&off_2DEB14);
  *(_DWORD *)(v3 + 12) = -1;
  sub_1CF0E0((int)v7, v3 + 16);
  if ( LOBYTE(v7[0]) == 4 )
  {
    *a1 = 4;
  }
  else
  {
    v5 = v7[1];
    *a1 = v7[0];
    a1[1] = v5;
  }
  result = *v4 + 1;
  *v4 = result;
  return result;
}
