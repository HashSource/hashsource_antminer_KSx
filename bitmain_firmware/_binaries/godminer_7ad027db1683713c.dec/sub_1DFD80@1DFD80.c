int __fastcall sub_1DFD80(int a1, int a2)
{
  _DWORD *v2; // r6
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
  _DWORD v23[2]; // [sp+4h] [bp-B4h] BYREF
  int v24[6]; // [sp+Ch] [bp-ACh] BYREF
  int *v25; // [sp+24h] [bp-94h] BYREF
  void *v26; // [sp+28h] [bp-90h]
  struct sigaction v27; // [sp+2Ch] [bp-8Ch] BYREF

  v6 = *(unsigned __int8 *)_tls_get_addr(&dword_2D042C);
  if ( v6 != 1 )
  {
    if ( v6 )
    {
      v10 = 0;
      goto LABEL_12;
    }
    v2 = sub_1E4024;
    addr = _tls_get_addr(&dword_2D0434);
    std::sys::unix::thread_local_dtor::register_dtor(addr, (int)sub_1E4024);
    *(_BYTE *)_tls_get_addr(&dword_2D042C) = 1;
  }
  if ( *(_DWORD *)_tls_get_addr(&dword_2D0434) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)&v27, (int)&off_2C92E8, (int)&off_2CA1D4);
  v8 = (_DWORD *)_tls_get_addr(&dword_2D0434);
  v9 = v8[2];
  *v8 = -1;
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      v10 = 0;
      v2 = std::thread::Thread::new(0, -1);
      v11 = (int *)_tls_get_addr(&dword_2D0434);
      v12 = *v11;
      v11[1] = (int)v2;
      v11[2] = 0;
      v9 = v12 + 1;
    }
    else
    {
      v13 = _tls_get_addr(&dword_2D0434);
      v2 = *(_DWORD **)(v13 + 12);
      v10 = 1;
      v3 = *(_DWORD *)(v13 + 16);
      v9 = 0;
    }
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)_tls_get_addr(&dword_2D0434) = v9;
LABEL_12:
  v14 = libc::unix::linux_like::linux::gnu::<impl libc::unix::linux_like::linux::gnu::b32::arm::siginfo_t>::si_addr(a2);
  v15 = v10 == 0;
  v16 = v15 | ((unsigned int)v2 <= v14);
  v17 = v15 > v16;
  if ( v15 != v16 )
    v17 = v3 > v14;
  if ( v17 )
  {
    v19 = std::thread::current();
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
    v24[0] = (int)v20;
    v27.sa_mask.__val[2] = 2;
    v27.sa_mask.__val[4] = 1;
    v25 = v24;
    v27.sa_mask.__val[3] = (unsigned int)&v25;
    v24[1] = v21;
    v27.sa_handler = 0;
    v26 = sub_19A74C;
    v27.sa_mask.__val[1] = (unsigned int)&off_2CAA80;
    sub_1C4540(v23, (int)&v27, (int *)&v27);
    if ( LOBYTE(v23[0]) != 4 )
      sub_19C1B8((int)v23);
    __dmb(0xBu);
    do
      v22 = __ldrex(v19);
    while ( __strex(v22 - 1, v19) );
    if ( v22 == 1 )
    {
      __dmb(0xBu);
      sub_1A3BE4((int)v19);
    }
    v24[3] = 2;
    v24[2] = (int)&off_2C96F8;
    v24[4] = (int)&v25;
    v24[5] = 1;
    v24[0] = 0;
    v26 = <core::fmt::Arguments as core::fmt::Display>::fmt;
    v25 = (int *)&v27;
    v27.sa_mask.__val[2] = 1;
    v27.sa_mask.__val[1] = (unsigned int)&off_2CAA90;
    v27.sa_mask.__val[4] = 0;
    v27.sa_mask.__val[3] = (unsigned int)aRustc9eb3afe9e;
    v27.sa_handler = 0;
    sub_1C4540(v23, (int)&v27, v24);
    if ( LOBYTE(v23[0]) != 4 )
      sub_19C1B8((int)v23);
    std::sys::unix::abort_internal();
  }
  memset(&v27, 0, sizeof(v27));
  return sigaction(a1, &v27, 0);
}
