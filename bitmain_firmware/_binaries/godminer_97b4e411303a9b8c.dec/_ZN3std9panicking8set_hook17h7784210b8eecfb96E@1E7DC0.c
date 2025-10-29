void __fastcall std::panicking::set_hook(int a1, int a2)
{
  _BOOL4 is_zero_slow_path; // r0
  void *v6; // r1
  int v7; // r2
  unsigned int v8; // r0
  unsigned int v9; // r1
  void *v10; // [sp+8h] [bp-18h] BYREF
  int v11; // [sp+Ch] [bp-14h]
  char **v12; // [sp+10h] [bp-10h]
  int v13; // [sp+14h] [bp-Ch]
  const char *v14; // [sp+18h] [bp-8h]
  int v15; // [sp+1Ch] [bp-4h]

  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    v13 = 1;
    v15 = 0;
    v10 = 0;
    v12 = &off_2E02D4;
    v14 = aRustc9eb3afe9e;
    core::panicking::panic_fmt((int)&v10, (int)&off_2E02DC);
  }
  if ( __ldrex((unsigned int *)&std::panicking::HOOK) )
  {
    __clrex();
  }
  else if ( !__strex(0x3FFFFFFFu, (unsigned int *)&std::panicking::HOOK) )
  {
    __dmb(0xBu);
    goto LABEL_5;
  }
  std::sys::unix::locks::futex_rwlock::RwLock::write_contended((unsigned int *)&std::panicking::HOOK);
LABEL_5:
  is_zero_slow_path = 1;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
  v6 = (void *)dword_30CC94;
  v7 = dword_30CC98;
  dword_30CC94 = a1;
  dword_30CC98 = a2;
  v11 = v7;
  v10 = v6;
  if ( is_zero_slow_path
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    byte_30CC90 = 1;
  }
  __dmb(0xBu);
  do
  {
    v8 = __ldrex((unsigned int *)&std::panicking::HOOK);
    v9 = v8 - 0x3FFFFFFF;
  }
  while ( __strex(v8 - 0x3FFFFFFF, (unsigned int *)&std::panicking::HOOK) );
  if ( v9 >= 0x40000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&std::panicking::HOOK, v9);
  if ( v10 )
  {
    (*(void (__fastcall **)(void *))v11)(v10);
    if ( *(_DWORD *)(v11 + 4) )
      _rust_dealloc(v10);
  }
}
