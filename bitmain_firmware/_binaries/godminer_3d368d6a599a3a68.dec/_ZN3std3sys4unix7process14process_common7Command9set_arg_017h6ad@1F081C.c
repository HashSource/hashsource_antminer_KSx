void __fastcall std::sys::unix::process::process_common::Command::set_arg_0(int a1, int a2, int a3)
{
  __int64 v4; // r0
  __int64 v5; // kr00_8
  int v6; // r5
  int v7; // r7

  v4 = sub_1F19C4(a2, a3, a1 + 125);
  v5 = v4;
  if ( !*(_DWORD *)(a1 + 108) )
    core::panicking::panic_bounds_check(0, 0, (int)&off_2DF8F8);
  v6 = HIDWORD(v4);
  v7 = *(_DWORD *)(a1 + 92);
  **(_DWORD **)(a1 + 104) = v4;
  if ( !*(_DWORD *)(a1 + 96) )
    core::panicking::panic_bounds_check(0, 0, (int)&off_2DF908);
  **(_BYTE **)v7 = 0;
  if ( *(_DWORD *)(v7 + 4) )
    _rust_dealloc(*(void **)v7);
  *(_DWORD *)v7 = v5;
  *(_DWORD *)(v7 + 4) = v6;
}
