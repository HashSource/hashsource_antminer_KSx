int __fastcall sub_1C9C8C(int a1, int a2)
{
  _BOOL4 is_zero_slow_path; // r9
  int v5; // r0
  void *v6; // r1
  int v7; // r2
  int v8; // r5
  int v9; // r1
  int result; // r0
  unsigned int v11; // r1
  int v12; // [sp+4h] [bp-2Ch] BYREF
  int v13; // [sp+8h] [bp-28h] BYREF
  void *ptr; // [sp+Ch] [bp-24h]
  int v15; // [sp+10h] [bp-20h]
  _DWORD v16[2]; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v17[3]; // [sp+1Ch] [bp-14h] BYREF
  _DWORD v18[2]; // [sp+28h] [bp-8h] BYREF

  v12 = a2;
  while ( !__ldrex(&dword_30AC58) )
  {
    if ( !__strex(1u, &dword_30AC58) )
    {
      __dmb(0xBu);
      goto LABEL_5;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended(&dword_30AC58);
LABEL_5:
  is_zero_slow_path = 1;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
  v18[1] = &off_2DE450;
  ptr = (void *)4;
  v18[0] = v17;
  v17[2] = v16;
  v17[1] = &v12;
  v15 = 0;
  v13 = 0;
  v16[0] = 0;
  v17[0] = &v13;
  Unwind_Backtrace(sub_1F7B98, v18);
  if ( v15 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v5 = v13;
    v6 = ptr;
    v7 = v15;
    v8 = v16[1];
    if ( !v16[0] )
      v8 = 0;
    *(_DWORD *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 12) = v5;
    *(_DWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 20) = v7;
  }
  else
  {
    v9 = v13;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    if ( v9 )
      _rust_dealloc(ptr);
  }
  if ( is_zero_slow_path
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    byte_30AC5C = 1;
  }
  result = 0;
  __dmb(0xBu);
  do
    v11 = __ldrex(&dword_30AC58);
  while ( __strex(0, &dword_30AC58) );
  if ( v11 == 2 )
    return syscall(240, &dword_30AC58, 129, 1);
  return result;
}
