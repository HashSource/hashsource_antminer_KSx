int __fastcall sub_1E58D4(int a1, int a2, int a3, char a4)
{
  _BOOL4 v9; // r4
  void (__fastcall *v10)(int, int, _DWORD *); // r3
  int result; // r0
  unsigned int v12; // r1
  _DWORD v13[6]; // [sp+0h] [bp-24h] BYREF
  _DWORD v14[2]; // [sp+18h] [bp-Ch] BYREF
  char v15; // [sp+23h] [bp-1h] BYREF

  while ( !__ldrex(&dword_30CC78) )
  {
    if ( !__strex(1u, &dword_30CC78) )
    {
      __dmb(0xBu);
      goto LABEL_4;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended(&dword_30CC78);
LABEL_4:
  v9 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v9 = !std::panicking::panic_count::is_zero_slow_path();
  v10 = *(void (__fastcall **)(int, int, _DWORD *))(a3 + 36);
  v13[3] = 1;
  v13[2] = &off_2DF980;
  v13[5] = 1;
  v13[4] = v14;
  v13[0] = 0;
  v14[1] = <std::sys_common::backtrace::_print::DisplayBacktrace as core::fmt::Display>::fmt;
  v14[0] = &v15;
  v15 = a4;
  v10(a1, a2, v13);
  if ( !v9
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    byte_30CC7C = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v12 = __ldrex(&dword_30CC78);
  while ( __strex(0, &dword_30CC78) );
  if ( v12 == 2 )
    return syscall(240, &dword_30CC78, 129, 1);
  return result;
}
