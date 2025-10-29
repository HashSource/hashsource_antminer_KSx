int __fastcall std::sys::unix::process::process_common::Command::arg(unsigned int *a1, int a2, int a3)
{
  int v4; // r6
  __int64 v5; // r0
  unsigned int v6; // r3
  int v7; // r5
  unsigned int v8; // r2

  v5 = sub_1F1114(a2, a3, (char *)a1 + 125);
  v4 = HIDWORD(v5);
  HIDWORD(v5) = a1[24];
  v6 = a1[27];
  if ( HIDWORD(v5) >= v6 )
    core::panicking::panic_bounds_check(SHIDWORD(v5), v6, (int)&off_2DF918);
  v7 = v5;
  v8 = a1[25];
  LODWORD(v5) = a1[26];
  *(_DWORD *)(v5 + 4 * HIDWORD(v5)) = v7;
  if ( v6 == v8 )
  {
    sub_1B63A8(a1 + 25, v6);
    HIDWORD(v5) = a1[24];
    LODWORD(v5) = a1[26];
    v6 = a1[27];
  }
  *(_DWORD *)(v5 + 4 * v6) = 0;
  a1[27] = v6 + 1;
  if ( HIDWORD(v5) == a1[22] )
  {
    sub_1B6188(a1 + 22, SHIDWORD(v5));
    HIDWORD(v5) = a1[24];
  }
  LODWORD(v5) = a1[23];
  a1[24] = HIDWORD(v5) + 1;
  *(_DWORD *)(v5 + 8 * HIDWORD(v5)) = v7;
  LODWORD(v5) = v5 + 8 * HIDWORD(v5);
  *(_DWORD *)(v5 + 4) = v4;
  return v5;
}
