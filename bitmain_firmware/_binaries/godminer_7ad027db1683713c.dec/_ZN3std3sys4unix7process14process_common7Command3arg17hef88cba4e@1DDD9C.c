int __fastcall std::sys::unix::process::process_common::Command::arg(int a1, _BYTE *a2, size_t a3)
{
  int v4; // r6
  __int64 v5; // r0
  unsigned int v6; // r3
  int v7; // r5
  int v8; // r2

  v5 = sub_1DEE50(a2, a3, (_BYTE *)(a1 + 125));
  v4 = HIDWORD(v5);
  HIDWORD(v5) = *(_DWORD *)(a1 + 96);
  v6 = *(_DWORD *)(a1 + 108);
  if ( HIDWORD(v5) >= v6 )
    core::panicking::panic_bounds_check(SHIDWORD(v5), v6, (int)&off_2CA918);
  v7 = v5;
  v8 = *(_DWORD *)(a1 + 100);
  LODWORD(v5) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 4 * HIDWORD(v5)) = v7;
  if ( v6 == v8 )
  {
    sub_1A40E4((unsigned int *)(a1 + 100), v6);
    HIDWORD(v5) = *(_DWORD *)(a1 + 96);
    LODWORD(v5) = *(_DWORD *)(a1 + 104);
    v6 = *(_DWORD *)(a1 + 108);
  }
  *(_DWORD *)(v5 + 4 * v6) = 0;
  *(_DWORD *)(a1 + 108) = v6 + 1;
  if ( HIDWORD(v5) == *(_DWORD *)(a1 + 88) )
  {
    sub_1A3EC4((unsigned int *)(a1 + 88), SHIDWORD(v5));
    HIDWORD(v5) = *(_DWORD *)(a1 + 96);
  }
  LODWORD(v5) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 96) = HIDWORD(v5) + 1;
  *(_DWORD *)(v5 + 8 * HIDWORD(v5)) = v7;
  LODWORD(v5) = v5 + 8 * HIDWORD(v5);
  *(_DWORD *)(v5 + 4) = v4;
  return v5;
}
