void __fastcall std::panicking::default_hook(int a1)
{
  unsigned int v2; // r1
  char backtrace_style; // r0
  int v4; // r0
  __int64 v5; // r0
  const char **v6; // r5
  __int64 v7; // r0
  int *v8; // r0
  __int64 v9; // r0
  int v10; // r4
  __int64 v11; // r0
  int v12; // r3
  const char *v13; // r2
  const char *v14; // r2
  unsigned int *v15; // r4
  bool v16; // zf
  int v17; // r1
  const char *v18; // r0
  _DWORD *addr; // r0
  unsigned int **v20; // r0
  int v21; // t1
  int v22; // r7
  unsigned int *v23; // r4
  _BOOL4 v25; // r6
  unsigned int v26; // r1
  unsigned int *v27; // r4
  _DWORD *v28; // r0
  unsigned int **v29; // r1
  unsigned int *v30; // r0
  unsigned int v31; // r1
  int v32; // r5
  unsigned int v33; // r0
  unsigned int *v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r0
  char v37; // [sp+Bh] [bp-35h] BYREF
  int v38; // [sp+Ch] [bp-34h] BYREF
  _DWORD v39[2]; // [sp+10h] [bp-30h] BYREF
  unsigned int *v40; // [sp+18h] [bp-28h]
  _DWORD v41[2]; // [sp+1Ch] [bp-24h] BYREF
  _DWORD v42[4]; // [sp+24h] [bp-1Ch] BYREF
  unsigned int *v43; // [sp+34h] [bp-Ch]
  unsigned int *v44; // [sp+38h] [bp-8h]
  unsigned int *v45; // [sp+3Ch] [bp-4h] BYREF

  v2 = *(_DWORD *)_tls_get_addr(&dword_2F0440);
  backtrace_style = 1;
  if ( v2 <= 1 )
    backtrace_style = std::panic::get_backtrace_style();
  v37 = backtrace_style;
  v4 = core::panic::panic_info::PanicInfo::location(a1);
  if ( !v4 )
    core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2EA34C);
  v38 = v4;
  v5 = core::panic::panic_info::PanicInfo::payload(a1);
  v6 = (const char **)v5;
  LODWORD(v7) = (*(int (**)(void))(HIDWORD(v5) + 12))();
  if ( v6 && v7 == 0x89A76C34A9F81AC8LL )
  {
    v8 = (int *)(v6 + 1);
LABEL_10:
    v12 = *v8;
    v13 = *v6;
    goto LABEL_11;
  }
  v9 = core::panic::panic_info::PanicInfo::payload(a1);
  v10 = v9;
  LODWORD(v11) = (*(int (**)(void))(HIDWORD(v9) + 12))();
  v12 = 12;
  v13 = aBoxDynAny;
  if ( v10 && v11 == 0xE7FB33AD8C9AE359LL )
  {
    v8 = (int *)(v10 + 8);
    v6 = (const char **)(v10 + 4);
    goto LABEL_10;
  }
LABEL_11:
  v39[1] = v12;
  v39[0] = v13;
  v15 = sub_1E9D70();
  v16 = v15 == 0;
  v17 = 9;
  if ( v15 )
    v14 = (const char *)v15[2];
  v18 = aUnnamed_0;
  v40 = v15;
  if ( v15 )
  {
    v16 = v14 == 0;
    if ( v14 )
      v18 = (const char *)v15[3];
  }
  if ( !v16 )
  {
    v17 = (int)(v18 - 1);
    v18 = v14;
  }
  v41[0] = v18;
  v42[3] = &v37;
  v42[2] = &v38;
  v42[1] = v39;
  v41[1] = v17;
  v42[0] = v41;
  if ( !byte_3123A8 )
  {
    v43 = 0;
LABEL_43:
    v32 = 0;
    sub_1EB898(v42, &v45, &off_2EA2FC);
    goto LABEL_44;
  }
  byte_3123A8 = 1;
  addr = (_DWORD *)_tls_get_addr(&dword_2F0420);
  v21 = *addr;
  v20 = (unsigned int **)(addr + 1);
  v45 = 0;
  if ( !v21 )
  {
    v20 = sub_1CB168(0);
    if ( !v20 )
      core::result::unwrap_failed((int)aCannotAccessAT, 70, (int)&v45, (int)&off_2E92F8, (int)&off_2E9778);
  }
  v22 = (int)*v20;
  *v20 = 0;
  v43 = (unsigned int *)v22;
  if ( !v22 )
    goto LABEL_43;
  v23 = (unsigned int *)(v22 + 8);
  v44 = (unsigned int *)v22;
  while ( !__ldrex(v23) )
  {
    if ( !__strex(1u, v23) )
    {
      __dmb(0xBu);
      goto LABEL_26;
    }
  }
  __clrex();
  std::sys::unix::locks::futex_mutex::Mutex::lock_contended((unsigned int *)(v22 + 8));
LABEL_26:
  v25 = 0;
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
    v25 = !std::panicking::panic_count::is_zero_slow_path();
  sub_1EB898(v42, v22 + 16, &off_2EA324);
  if ( !v25
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
    && !std::panicking::panic_count::is_zero_slow_path() )
  {
    *(_BYTE *)(v22 + 12) = 1;
  }
  __dmb(0xBu);
  do
    v26 = __ldrex(v23);
  while ( __strex(0, v23) );
  if ( v26 == 2 )
    syscall(240, v22 + 8, 129, 1);
  v27 = v44;
  byte_3123A8 = 1;
  v28 = (_DWORD *)_tls_get_addr(&dword_2F0420);
  v45 = v27;
  v29 = (unsigned int **)(v28 + 1);
  if ( !*v28 )
  {
    v29 = sub_1CB168(0);
    if ( !v29 )
    {
      __dmb(0xBu);
      do
        v36 = __ldrex(v27);
      while ( __strex(v36 - 1, v27) );
      if ( v36 == 1 )
      {
        __dmb(0xBu);
        sub_1B9C60((int)v45);
      }
      core::result::unwrap_failed((int)aCannotAccessAT, 70, (int)&v45, (int)&off_2E92F8, (int)&off_2E9778);
    }
  }
  v30 = *v29;
  *v29 = v27;
  if ( v30 )
  {
    __dmb(0xBu);
    do
      v31 = __ldrex(v30);
    while ( __strex(v31 - 1, v30) );
    if ( v31 == 1 )
    {
      __dmb(0xBu);
      sub_1B9C60((int)v30);
    }
  }
  v15 = v40;
  v32 = 1;
LABEL_44:
  if ( v15 )
  {
    __dmb(0xBu);
    do
      v33 = __ldrex(v15);
    while ( __strex(v33 - 1, v15) );
    if ( v33 == 1 )
    {
      __dmb(0xBu);
      sub_1B9BE4((int)v40);
    }
  }
  v34 = v43;
  if ( !(v32 | (v43 == 0)) )
  {
    __dmb(0xBu);
    do
      v35 = __ldrex(v34);
    while ( __strex(v35 - 1, v34) );
    if ( v35 == 1 )
    {
      __dmb(0xBu);
      sub_1B9C60((int)v43);
    }
  }
}
