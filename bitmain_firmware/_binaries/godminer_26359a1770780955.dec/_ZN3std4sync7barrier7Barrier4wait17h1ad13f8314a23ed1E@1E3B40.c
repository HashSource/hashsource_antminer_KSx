bool __fastcall std::sync::barrier::Barrier::wait(int a1)
{
  _BOOL4 v3; // r2
  unsigned int v4; // r1
  int v5; // r7
  unsigned int v6; // r0
  int *v7; // r5
  int v8; // r6
  unsigned int v9; // r0
  unsigned int *v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r1
  unsigned int v15; // [sp+Ch] [bp-18h]
  unsigned int v16; // [sp+10h] [bp-14h]
  _BOOL4 v17; // [sp+14h] [bp-10h]
  int v18; // [sp+18h] [bp-Ch] BYREF
  bool v19; // [sp+1Ch] [bp-8h]

  while ( !__ldrex((unsigned int *)a1) )
  {
    if ( !__strex(1u, (unsigned int *)a1) )
    {
      __dmb(0xBu);
      goto LABEL_4;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)a1);
LABEL_4:
  v3 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 4) )
      goto LABEL_6;
LABEL_34:
    v19 = v3;
    v18 = a1;
    core::result::unwrap_failed((int)&unk_2A432A, 43, (int)&v18, (int)&off_2DE338, (int)&off_2DF0A4);
  }
  v3 = !std::panicking::panic_count::is_zero_slow_path();
  if ( *(_BYTE *)(a1 + 4) )
    goto LABEL_34;
LABEL_6:
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 8) + 1;
  *(_DWORD *)(a1 + 8) = v6;
  v16 = v4;
  v15 = v6;
  v17 = v3;
  if ( v6 >= v4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v11 = (unsigned int *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v5 + 1;
    do
      v12 = __ldrex(v11);
    while ( __strex(v12 + 1, v11) );
    syscall(240, v11, 129, 0x7FFFFFFF);
  }
  else
  {
    v7 = (int *)(a1 + 16);
LABEL_9:
    while ( v5 == *(_DWORD *)(a1 + 12) )
    {
      v8 = *v7;
      __dmb(0xBu);
      do
        v9 = __ldrex((unsigned int *)a1);
      while ( __strex(0, (unsigned int *)a1) );
      if ( v9 == 2 )
        syscall(240, a1, 129, 1);
      v18 = 0;
      while ( *v7 == v8 && syscall(240, a1 + 16, 137, v8, v18, 0, -1) <= -1 && *_errno_location() == 4 )
        ;
      do
      {
        if ( __ldrex((unsigned int *)a1) )
        {
          __clrex();
          std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)a1);
          if ( *(_BYTE *)(a1 + 4) )
            goto LABEL_21;
          goto LABEL_9;
        }
      }
      while ( __strex(1u, (unsigned int *)a1) );
      __dmb(0xBu);
      if ( *(_BYTE *)(a1 + 4) )
      {
LABEL_21:
        v19 = v17;
        v18 = a1;
        core::result::unwrap_failed((int)&unk_2A432A, 43, (int)&v18, (int)&off_2DE338, (int)&off_2DF0B4);
      }
    }
  }
  if ( !v17
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(a1 + 4) = 1;
  }
  __dmb(0xBu);
  do
    v13 = __ldrex((unsigned int *)a1);
  while ( __strex(0, (unsigned int *)a1) );
  if ( v13 == 2 )
    syscall(240, a1, 129, 1);
  return v15 >= v16;
}
