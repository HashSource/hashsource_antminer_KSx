void __fastcall __noreturn std::panicking::rust_panic_with_hook(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r0
  int v11; // r4
  unsigned int *addr; // r0
  unsigned int v13; // r4
  unsigned int v14; // r1
  __int64 (__fastcall *v15)(int); // r1
  unsigned int v16; // r0
  unsigned int v17; // r1
  char **v18; // r0
  int v19; // r0
  int v20; // [sp+0h] [bp-40h] BYREF
  int v21; // [sp+4h] [bp-3Ch]
  __int64 v22; // [sp+8h] [bp-38h] BYREF
  int v23; // [sp+10h] [bp-30h]
  int v24; // [sp+14h] [bp-2Ch]
  char v25; // [sp+18h] [bp-28h]
  _DWORD v26[2]; // [sp+1Ch] [bp-24h] BYREF
  _DWORD v27[2]; // [sp+24h] [bp-1Ch] BYREF
  char **v28; // [sp+2Ch] [bp-14h]
  int v29; // [sp+30h] [bp-10h]
  const char *v30; // [sp+34h] [bp-Ch]
  int v31; // [sp+38h] [bp-8h]
  _BYTE v32[4]; // [sp+3Ch] [bp-4h] BYREF

  do
    v9 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v9 + 1, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  if ( v9 <= -1 )
  {
    if ( (v9 & 0x7FFFFFFFu) <= 2 )
    {
      v28 = &off_2DF404;
      LODWORD(v22) = aRustc9eb3afe9e;
      HIDWORD(v22) = &off_2DF3F4;
      v23 = a3;
      v24 = a4;
      v29 = 2;
      v31 = 1;
      v30 = (const char *)v26;
      v25 = a5;
      v27[0] = 0;
      v26[1] = <core::panic::panic_info::PanicInfo as core::fmt::Display>::fmt;
      v26[0] = &v22;
      sub_1D70B4(&v20, (int)v32, v27);
      v10 = (unsigned __int8)v20;
      if ( (unsigned __int8)v20 != 3 )
        goto LABEL_12;
      v11 = v21;
      (**(void (__fastcall ***)(_DWORD))(v21 + 4))(*(_DWORD *)v21);
LABEL_9:
      if ( *(_DWORD *)(*(_DWORD *)(v11 + 4) + 4) )
        _rust_dealloc(*(void **)v11);
      _rust_dealloc((void *)v11);
      goto LABEL_12;
    }
LABEL_7:
    v29 = 1;
    v28 = (char **)&off_2DF3EC;
    v30 = aRustc9eb3afe9e;
    v31 = 0;
    v27[0] = 0;
    sub_1D70B4(&v22, (int)v32, v27);
    v10 = (unsigned __int8)v22;
    if ( (unsigned __int8)v22 != 3 )
      goto LABEL_12;
    v11 = HIDWORD(v22);
    (**(void (__fastcall ***)(_DWORD))(HIDWORD(v22) + 4))(*(_DWORD *)HIDWORD(v22));
    goto LABEL_9;
  }
  addr = (unsigned int *)_tls_get_addr(&dword_2E5460);
  v13 = *addr + 1;
  *addr = v13;
  if ( v13 > 2 )
    goto LABEL_7;
  v25 = a5;
  LODWORD(v22) = aRustc9eb3afe9e;
  HIDWORD(v22) = &off_2DF3F4;
  v23 = a3;
  v24 = a4;
  if ( (unsigned int)std::panicking::HOOK <= 0x3FFFFFFF && (std::panicking::HOOK & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v14 = __ldrex((unsigned int *)&std::panicking::HOOK);
    if ( v14 == std::panicking::HOOK )
    {
      if ( !__strex(std::panicking::HOOK + 1, (unsigned int *)&std::panicking::HOOK) )
      {
        __dmb(0xBu);
LABEL_20:
        v15 = *(__int64 (__fastcall **)(int))(a2 + 16);
        if ( dword_307C4C )
        {
          v22 = v15(a1);
          (*(void (__fastcall **)(int, __int64 *))(dword_307C50 + 20))(dword_307C4C, &v22);
        }
        else
        {
          v22 = v15(a1);
          std::panicking::default_hook((int)&v22);
        }
        __dmb(0xBu);
        do
        {
          v16 = __ldrex((unsigned int *)&std::panicking::HOOK);
          v17 = v16 - 1;
        }
        while ( __strex(v16 - 1, (unsigned int *)&std::panicking::HOOK) );
        if ( (v17 & 0xBFFFFFFF) == 0x80000000 )
          std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers(
            (unsigned int *)&std::panicking::HOOK,
            v17);
        if ( v13 <= 1 && a5 )
          rust_panic(a1, a2);
        if ( a5 )
          v18 = &off_2DF41C;
        else
          v18 = &off_2DF414;
        v28 = v18;
        v29 = 1;
        v31 = 0;
        v27[0] = 0;
        v30 = aRustc9eb3afe9e;
        sub_1D70B4(v26, (int)v32, v27);
        v10 = LOBYTE(v26[0]);
        if ( LOBYTE(v26[0]) != 4 )
        {
          sub_1AED2C((int)v26);
          std::sys::unix::abort_internal(v19);
        }
LABEL_12:
        std::sys::unix::abort_internal(v10);
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&std::panicking::HOOK);
  goto LABEL_20;
}
