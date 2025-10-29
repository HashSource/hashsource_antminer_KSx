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
  unsigned int v13; // r0
  _DWORD v14[2]; // [sp+28h] [bp-40h] BYREF
  int v15[6]; // [sp+30h] [bp-38h] BYREF
  _DWORD v16[2]; // [sp+48h] [bp-20h] BYREF
  _DWORD v17[6]; // [sp+50h] [bp-18h] BYREF

  v4 = *(unsigned __int8 *)_tls_get_addr(&dword_2D042C);
  if ( v4 != 1 )
  {
    if ( v4 )
    {
      __dmb(0xBu);
      do
        v13 = __ldrex(a2);
      while ( __strex(v13 - 1, a2) );
      if ( v13 == 1 )
      {
        __dmb(0xBu);
        sub_1A3BE4((int)a2);
      }
      core::result::unwrap_failed((int)aCannotAccessAT, 70, (int)v17, (int)&off_2C92F8, (int)&off_2C9778);
    }
    addr = _tls_get_addr(&dword_2D0434);
    std::sys::unix::thread_local_dtor::register_dtor(addr, (int)sub_1E4024);
    *(_BYTE *)_tls_get_addr(&dword_2D042C) = 1;
  }
  if ( *(_DWORD *)_tls_get_addr(&dword_2D0434) )
    core::result::unwrap_failed((int)aAlreadyBorrowe, 16, (int)v17, (int)&off_2C92E8, (int)&off_2CA1E4);
  v6 = (_DWORD *)_tls_get_addr(&dword_2D0434);
  v7 = v6[2];
  *v6 = -1;
  if ( v7 != 2 )
  {
    v15[3] = 2;
    v15[2] = (int)&off_2C96F8;
    v15[4] = (int)v16;
    v15[5] = 1;
    v15[0] = 0;
    v16[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
    v16[0] = v17;
    v17[3] = 1;
    v17[2] = &off_2CA1F4;
    v17[5] = 0;
    v17[4] = aRustc9eb3afe9e;
    v17[0] = 0;
    sub_1C4540(v14, (int)v17, v15);
    if ( LOBYTE(v14[0]) != 4 )
      sub_19C1B8((int)v14);
    std::sys::unix::abort_internal();
  }
  v8 = (_DWORD *)_tls_get_addr(&dword_2D0434);
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
