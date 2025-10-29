void __fastcall std::sys::unix::process::process_common::Command::cwd(int a1, int a2, int a3)
{
  __int64 v4; // r0
  int v5; // r5
  _BYTE *v6; // r0
  int v7; // r6
  int v8; // r1

  v4 = sub_1F19C4(a2, a3, a1 + 125);
  v5 = v4;
  v6 = *(_BYTE **)(a1 + 16);
  v7 = HIDWORD(v4);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 20);
    *v6 = 0;
    if ( v8 )
      _rust_dealloc(v6);
  }
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 20) = v7;
}
