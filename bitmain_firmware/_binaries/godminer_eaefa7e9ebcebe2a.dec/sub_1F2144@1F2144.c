int __fastcall sub_1F2144(int a1, int a2)
{
  int (*v2)(); // r6
  unsigned int v3; // r8
  int v6; // r0
  int addr; // r0
  _DWORD *v8; // r0
  int v9; // r7
  int v10; // r4
  int *v11; // r0
  int v12; // r1
  int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r1
  bool v17; // cc
  unsigned int *v19; // r4
  const char *v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  int v23; // r0
  _DWORD v24[2]; // [sp+4h] [bp-B4h] BYREF
  _DWORD v25[6]; // [sp+Ch] [bp-ACh] BYREF
  struct sigaction *v26; // [sp+24h] [bp-94h] BYREF
  int (*v27)(); // [sp+28h] [bp-90h]
  struct sigaction v28; // [sp+2Ch] [bp-8Ch] BYREF

  v6 = *(unsigned __int8 *)_tls_get_addr(&dword_2E5450);
  if ( v6 != 1 )
  {
    if ( v6 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    v2 = sub_1F63E8;
    addr = _tls_get_addr(&dword_2E5458);
    std::sys::unix::thread_local_dtor::register_dtor(addr, sub_1F63E8);
    *(_BYTE *)_tls_get_addr(&dword_2E5450) = 1;
  }
  if ( *(_DWORD *)_tls_get_addr(&dword_2E5458) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)&v28, (int)&off_2DE2E8, (int)&off_2DF1D4);
  v8 = (_DWORD *)_tls_get_addr(&dword_2E5458);
  v9 = v8[2];
  *v8 = -1;
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      v10 = 0;
      v2 = (int (*)())std::thread::Thread::new(0, -1);
      v11 = (int *)_tls_get_addr(&dword_2E5458);
      v12 = *v11;
      v11[1] = (int)v2;
      v11[2] = 0;
      v9 = v12 + 1;
    }
    else
    {
      v13 = _tls_get_addr(&dword_2E5458);
      v2 = *(int (**)())(v13 + 12);
      v10 = 1;
      v3 = *(_DWORD *)(v13 + 16);
      v9 = 0;
    }
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)_tls_get_addr(&dword_2E5458) = v9;
LABEL_12:
  v14 = libc::unix::linux_like::linux::gnu::<impl libc::unix::linux_like::linux::gnu::b32::arm::siginfo_t>::si_addr(a2);
  v15 = v10 == 0;
  v16 = v15 | ((unsigned int)v2 <= v14);
  v17 = v15 > v16;
  if ( v15 != v16 )
    v17 = v3 > v14;
  if ( v17 )
  {
    v19 = (unsigned int *)std::thread::current();
    v20 = (const char *)v19[2];
    if ( v20 )
    {
      v21 = v19[3] - 1;
    }
    else
    {
      v21 = 9;
      v20 = aUnknown_0;
    }
    v25[0] = v20;
    v28.sa_mask.__val[2] = 2;
    v28.sa_mask.__val[4] = 1;
    v26 = (struct sigaction *)v25;
    v28.sa_mask.__val[3] = (unsigned int)&v26;
    v25[1] = v21;
    v28.sa_handler = 0;
    v27 = (int (*)())sub_1ACB10;
    v28.sa_mask.__val[1] = (unsigned int)&off_2DFA80;
    sub_1D6904(v24, (int)&v28, &v28);
    if ( LOBYTE(v24[0]) != 4 )
      sub_1AE57C((int)v24);
    __dmb(0xBu);
    do
      v22 = __ldrex(v19);
    while ( __strex(v22 - 1, v19) );
    if ( v22 == 1 )
    {
      __dmb(0xBu);
      sub_1B5FA8((int)v19);
    }
    v25[3] = 2;
    v25[2] = &off_2DE6F8;
    v25[4] = &v26;
    v25[5] = 1;
    v25[0] = 0;
    v27 = <core::fmt::Arguments as core::fmt::Display>::fmt;
    v26 = &v28;
    v28.sa_mask.__val[2] = 1;
    v28.sa_mask.__val[1] = (unsigned int)&off_2DFA90;
    v28.sa_mask.__val[4] = 0;
    v28.sa_mask.__val[3] = (unsigned int)aRustc9eb3afe9e;
    v28.sa_handler = 0;
    sub_1D6904(v24, (int)&v28, v25);
    v23 = LOBYTE(v24[0]);
    if ( LOBYTE(v24[0]) != 4 )
      sub_1AE57C((int)v24);
    std::sys::unix::abort_internal(v23);
  }
  memset(&v28, 0, sizeof(v28));
  return sigaction(a1, &v28, 0);
}
