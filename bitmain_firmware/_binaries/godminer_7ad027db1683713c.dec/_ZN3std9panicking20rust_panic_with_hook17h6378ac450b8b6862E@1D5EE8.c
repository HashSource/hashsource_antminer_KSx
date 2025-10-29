void __fastcall __noreturn std::panicking::rust_panic_with_hook(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r4
  unsigned int *addr; // r0
  unsigned int v12; // r4
  unsigned int v13; // r1
  __int64 (__fastcall *v14)(int); // r1
  unsigned int v15; // r0
  unsigned int v16; // r1
  char **v17; // r0
  int v18; // [sp+0h] [bp-40h] BYREF
  int v19; // [sp+4h] [bp-3Ch]
  __int64 v20; // [sp+8h] [bp-38h] BYREF
  int v21; // [sp+10h] [bp-30h]
  int v22; // [sp+14h] [bp-2Ch]
  char v23; // [sp+18h] [bp-28h]
  _DWORD v24[2]; // [sp+1Ch] [bp-24h] BYREF
  int v25[2]; // [sp+24h] [bp-1Ch] BYREF
  char **v26; // [sp+2Ch] [bp-14h]
  int v27; // [sp+30h] [bp-10h]
  const char *v28; // [sp+34h] [bp-Ch]
  int v29; // [sp+38h] [bp-8h]
  _BYTE v30[4]; // [sp+3Ch] [bp-4h] BYREF

  do
    v9 = __ldrex((unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT);
  while ( __strex(v9 + 1, (unsigned int *)&std::panicking::panic_count::GLOBAL_PANIC_COUNT) );
  if ( v9 <= -1 )
  {
    if ( (v9 & 0x7FFFFFFFu) <= 2 )
    {
      v26 = &off_2CA404;
      LODWORD(v20) = aRustc9eb3afe9e;
      HIDWORD(v20) = &off_2CA3F4;
      v21 = a3;
      v22 = a4;
      v27 = 2;
      v29 = 1;
      v28 = (const char *)v24;
      v23 = a5;
      v25[0] = 0;
      v24[1] = <core::panic::panic_info::PanicInfo as core::fmt::Display>::fmt;
      v24[0] = &v20;
      sub_1C4540(&v18, (int)v30, v25);
      if ( (unsigned __int8)v18 != 3 )
        goto LABEL_12;
      v10 = v19;
      (**(void (__fastcall ***)(_DWORD))(v19 + 4))(*(_DWORD *)v19);
LABEL_9:
      if ( *(_DWORD *)(*(_DWORD *)(v10 + 4) + 4) )
        _rust_dealloc(*(void **)v10);
      _rust_dealloc((void *)v10);
      goto LABEL_12;
    }
LABEL_7:
    v27 = 1;
    v26 = (char **)&off_2CA3EC;
    v28 = aRustc9eb3afe9e;
    v29 = 0;
    v25[0] = 0;
    sub_1C4540(&v20, (int)v30, v25);
    if ( (unsigned __int8)v20 != 3 )
      goto LABEL_12;
    v10 = HIDWORD(v20);
    (**(void (__fastcall ***)(_DWORD))(HIDWORD(v20) + 4))(*(_DWORD *)HIDWORD(v20));
    goto LABEL_9;
  }
  addr = (unsigned int *)_tls_get_addr(&dword_2D043C);
  v12 = *addr + 1;
  *addr = v12;
  if ( v12 > 2 )
    goto LABEL_7;
  v23 = a5;
  LODWORD(v20) = aRustc9eb3afe9e;
  HIDWORD(v20) = &off_2CA3F4;
  v21 = a3;
  v22 = a4;
  if ( (unsigned int)std::panicking::HOOK <= 0x3FFFFFFF && (std::panicking::HOOK & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v13 = __ldrex((unsigned int *)&std::panicking::HOOK);
    if ( v13 == std::panicking::HOOK )
    {
      if ( !__strex(std::panicking::HOOK + 1, (unsigned int *)&std::panicking::HOOK) )
      {
        __dmb(0xBu);
LABEL_20:
        v14 = *(__int64 (__fastcall **)(int))(a2 + 16);
        if ( dword_2E961C )
        {
          v20 = v14(a1);
          (*(void (__fastcall **)(int, __int64 *))(dword_2E9620 + 20))(dword_2E961C, &v20);
        }
        else
        {
          v20 = v14(a1);
          std::panicking::default_hook((int)&v20);
        }
        __dmb(0xBu);
        do
        {
          v15 = __ldrex((unsigned int *)&std::panicking::HOOK);
          v16 = v15 - 1;
        }
        while ( __strex(v15 - 1, (unsigned int *)&std::panicking::HOOK) );
        if ( (v16 & 0xBFFFFFFF) == 0x80000000 )
          std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers(
            (unsigned int *)&std::panicking::HOOK,
            v16);
        if ( v12 <= 1 && a5 )
          rust_panic(a1, a2);
        if ( a5 )
          v17 = &off_2CA41C;
        else
          v17 = &off_2CA414;
        v26 = v17;
        v27 = 1;
        v29 = 0;
        v25[0] = 0;
        v28 = aRustc9eb3afe9e;
        sub_1C4540(v24, (int)v30, v25);
        if ( LOBYTE(v24[0]) != 4 )
        {
          sub_19C1B8((int)v24);
          std::sys::unix::abort_internal();
        }
LABEL_12:
        std::sys::unix::abort_internal();
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
