int __fastcall sub_1E0778(_DWORD *a1)
{
  char *v2; // r0
  void *v3; // r6
  int v4; // r7
  char *v5; // r4
  char *v6; // r4
  int v7; // r0
  struct sigaltstack ss; // [sp+4h] [bp-Ch] BYREF

  v2 = (char *)sub_1E00D8();
  v3 = (void *)*a1;
  v4 = a1[1];
  v5 = v2;
  (*(void (__fastcall **)(_DWORD))(v4 + 12))(*a1);
  if ( *(_DWORD *)(v4 + 4) )
    _rust_dealloc(v3);
  _rust_dealloc(a1);
  if ( v5 )
  {
    ss.ss_size = 0x2000;
    ss.ss_flags = 2;
    ss.ss_sp = 0;
    sigaltstack(&ss, 0);
    v6 = &v5[-sysconf(30)];
    v7 = sysconf(30);
    munmap(v6, v7 + 0x2000);
  }
  return 0;
}
