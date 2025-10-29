void __noreturn _rust_foreign_exception()
{
  int v0; // r0
  int v1; // r4
  int v2; // [sp+4h] [bp-44h] BYREF
  int v3; // [sp+8h] [bp-40h]
  _DWORD v4[6]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v5[2]; // [sp+24h] [bp-24h] BYREF
  _DWORD v6[6]; // [sp+2Ch] [bp-1Ch] BYREF
  _BYTE v7[4]; // [sp+44h] [bp-4h] BYREF

  v4[3] = 2;
  v4[2] = &off_2DE6F8;
  v4[4] = v5;
  v4[5] = 1;
  v4[0] = 0;
  v5[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
  v5[0] = v6;
  v6[3] = 1;
  v6[2] = &off_2DF2B4;
  v6[5] = 0;
  v6[4] = aRustc9eb3afe9e;
  v6[0] = 0;
  sub_1D70B4(&v2, (int)v7, v4);
  v0 = (unsigned __int8)v2;
  if ( (unsigned __int8)v2 == 3 )
  {
    v1 = v3;
    (**(void (__fastcall ***)(_DWORD))(v3 + 4))(*(_DWORD *)v3);
    if ( *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4) )
      _rust_dealloc(*(void **)v1);
    _rust_dealloc((void *)v1);
  }
  std::sys::unix::abort_internal(v0);
}
