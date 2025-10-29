int __fastcall <std::io::stdio::Stdin as std::io::Read>::read_vectored(
        int a1,
        int *a2,
        struct iovec *a3,
        unsigned int a4)
{
  int v4; // r4
  _BOOL4 v9; // r5
  int result; // r0
  unsigned int v11; // r1
  int v12; // [sp+0h] [bp-8h] BYREF
  bool v13; // [sp+4h] [bp-4h]

  v4 = *a2;
  while ( !__ldrex((unsigned int *)v4) )
  {
    if ( !__strex(1u, (unsigned int *)v4) )
    {
      __dmb(0xBu);
      goto LABEL_5;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)v4);
LABEL_5:
  v9 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v9 = !std::panicking::panic_count::is_zero_slow_path();
  v13 = v9;
  v12 = v4;
  <std::io::stdio::StdinLock as std::io::Read>::read_vectored(a1, &v12, a3, a4);
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v4 + 4) = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v11 = __ldrex((unsigned int *)v4);
  while ( __strex(0, (unsigned int *)v4) );
  if ( v11 == 2 )
    return syscall(240, v4, 129, 1);
  return result;
}
