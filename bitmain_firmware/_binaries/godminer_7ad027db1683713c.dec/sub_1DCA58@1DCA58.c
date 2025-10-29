int __fastcall sub_1DCA58(_DWORD *a1, char *name, char *value)
{
  _BOOL4 v7; // r5
  int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r1
  int result; // r0
  int v12; // r0
  unsigned int v13; // r0

  if ( __ldrex((unsigned int *)&dword_2E966C) )
  {
    __clrex();
  }
  else if ( !__strex(0x3FFFFFFFu, (unsigned int *)&dword_2E966C) )
  {
    __dmb(0xBu);
    goto LABEL_4;
  }
  std::sys::unix::locks::futex_rwlock::RwLock::write_contended((unsigned int *)&dword_2E966C);
LABEL_4:
  v7 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v7 = !std::panicking::panic_count::is_zero_slow_path();
  v8 = (unsigned __int8)byte_2E9674;
  if ( setenv(name, value, 1) == -1 )
  {
    v12 = *_errno_location();
    *a1 = 0;
    a1[1] = v12;
    if ( v8 )
    {
LABEL_8:
      if ( !v7
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
        && !std::panicking::panic_count::is_zero_slow_path() )
      {
        byte_2E9674 = 1;
      }
      __dmb(0xBu);
      do
      {
        v9 = __ldrex((unsigned int *)&dword_2E966C);
        v10 = v9 - 0x3FFFFFFF;
        result = __strex(v9 - 0x3FFFFFFF, (unsigned int *)&dword_2E966C);
      }
      while ( result );
      goto LABEL_18;
    }
  }
  else
  {
    *(_BYTE *)a1 = 4;
    if ( v8 )
      goto LABEL_8;
  }
  if ( !v7
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    byte_2E9674 = 1;
  }
  __dmb(0xBu);
  do
  {
    v13 = __ldrex((unsigned int *)&dword_2E966C);
    v10 = v13 - 0x3FFFFFFF;
    result = __strex(v13 - 0x3FFFFFFF, (unsigned int *)&dword_2E966C);
  }
  while ( result );
LABEL_18:
  if ( v10 >= 0x40000000 )
    return std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_2E966C, v10);
  return result;
}
