int std::panicking::take_hook()
{
  int v1; // r0
  unsigned int v2; // r0
  unsigned int v3; // r1
  int result; // r0
  _BOOL4 is_zero_slow_path; // r0
  int v6; // r1
  int v7; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h]
  char **v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]
  const char *v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    v10 = 1;
    v9 = &off_2CA2D4;
    v12 = 0;
    v7 = 0;
    v11 = aRustc9eb3afe9e;
    core::panicking::panic_fmt((int)&v7, (int)&off_2CA2EC);
  }
  if ( __ldrex((unsigned int *)&std::panicking::HOOK) )
  {
    __clrex();
LABEL_17:
    std::sys::unix::locks::futex_rwlock::RwLock::write_contended((unsigned int *)&std::panicking::HOOK);
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) == 0 )
      goto LABEL_5;
LABEL_18:
    is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
    v6 = dword_2E961C;
    dword_2E961C = 0;
    v7 = v6;
    v8 = dword_2E9620;
    if ( !is_zero_slow_path )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( __strex(0x3FFFFFFFu, (unsigned int *)&std::panicking::HOOK) )
    goto LABEL_17;
  __dmb(0xBu);
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    goto LABEL_18;
LABEL_5:
  v1 = dword_2E961C;
  dword_2E961C = 0;
  v7 = v1;
  v8 = dword_2E9620;
LABEL_6:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    byte_2E9618 = 1;
  }
LABEL_7:
  __dmb(0xBu);
  do
  {
    v2 = __ldrex((unsigned int *)&std::panicking::HOOK);
    v3 = v2 - 0x3FFFFFFF;
  }
  while ( __strex(v2 - 0x3FFFFFFF, (unsigned int *)&std::panicking::HOOK) );
  if ( v3 >= 0x40000000 )
    std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&std::panicking::HOOK, v3);
  result = v7;
  if ( !v7 )
    return 1;
  return result;
}
