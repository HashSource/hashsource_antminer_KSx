_DWORD *__fastcall std::sys_common::thread_info::set(int *a1, unsigned int *a2)
{
  int v4; // r0
  int addr; // r0
  _DWORD *v6; // r0
  int v7; // r1
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *result; // r0
  int v13; // r0
  unsigned int v14; // r0
  _DWORD v15[2]; // [sp+28h] [bp-40h] BYREF
  _DWORD v16[6]; // [sp+30h] [bp-38h] BYREF
  _DWORD v17[2]; // [sp+48h] [bp-20h] BYREF
  _DWORD v18[6]; // [sp+50h] [bp-18h] BYREF

  v4 = *(unsigned __int8 *)_tls_get_addr(&dword_2E7454);
  if ( v4 != 1 )
  {
    if ( v4 )
    {
      __dmb(0xBu);
      do
        v14 = __ldrex(a2);
      while ( __strex(v14 - 1, a2) );
      if ( v14 == 1 )
      {
        __dmb(0xBu);
        sub_1B8108((int)a2);
      }
      core::result::unwrap_failed((int)aCannotAccessAT, 70, (int)v18, (int)&off_2E02F8, (int)&off_2E0778);
    }
    addr = _tls_get_addr(&dword_2E745C);
    std::sys::unix::thread_local_dtor::register_dtor(addr, sub_1F8548);
    *(_BYTE *)_tls_get_addr(&dword_2E7454) = 1;
  }
  if ( *(_DWORD *)_tls_get_addr(&dword_2E745C) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v18, (int)&off_2E02E8, (int)&off_2E11E4);
  v6 = (_DWORD *)_tls_get_addr(&dword_2E745C);
  v7 = v6[2];
  *v6 = -1;
  if ( v7 != 2 )
  {
    v16[3] = 2;
    v16[2] = &off_2E06F8;
    v16[4] = v17;
    v16[5] = 1;
    v16[0] = 0;
    v17[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
    v17[0] = v18;
    v18[3] = 1;
    v18[2] = &off_2E11F4;
    v18[5] = 0;
    v18[4] = aRustc9eb3afe9e;
    v18[0] = 0;
    sub_1D8A64(v15, (int)v18, v16);
    v13 = LOBYTE(v15[0]);
    if ( LOBYTE(v15[0]) != 4 )
      sub_1B06DC((int)v15);
    std::sys::unix::abort_internal(v13);
  }
  v8 = (_DWORD *)_tls_get_addr(&dword_2E745C);
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  *v8 = 0;
  v8[1] = a2;
  result = v8 + 2;
  *result = v9;
  result[1] = v10;
  result[2] = v11;
  return result;
}
