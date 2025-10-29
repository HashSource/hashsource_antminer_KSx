void __noreturn _rust_foreign_exception()
{
  int v0; // r4
  int v1; // [sp+4h] [bp-44h] BYREF
  int v2; // [sp+8h] [bp-40h]
  int v3[6]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v4[2]; // [sp+24h] [bp-24h] BYREF
  _DWORD v5[6]; // [sp+2Ch] [bp-1Ch] BYREF
  _BYTE v6[4]; // [sp+44h] [bp-4h] BYREF

  v3[3] = 2;
  v3[2] = (int)&off_2C96F8;
  v3[4] = (int)v4;
  v3[5] = 1;
  v3[0] = 0;
  v4[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
  v4[0] = v5;
  v5[3] = 1;
  v5[2] = &off_2CA2B4;
  v5[5] = 0;
  v5[4] = aRustc9eb3afe9e;
  v5[0] = 0;
  sub_1C4540(&v1, (int)v6, v3);
  if ( (unsigned __int8)v1 == 3 )
  {
    v0 = v2;
    (**(void (__fastcall ***)(_DWORD))(v2 + 4))(*(_DWORD *)v2);
    if ( *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4) )
      _rust_dealloc(*(void **)v0);
    _rust_dealloc((void *)v0);
  }
  std::sys::unix::abort_internal();
}
