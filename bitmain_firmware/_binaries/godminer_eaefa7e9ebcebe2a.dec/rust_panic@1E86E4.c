void __fastcall __noreturn rust_panic(int a1, int a2)
{
  int v2; // r0
  _DWORD v3[2]; // [sp+0h] [bp-58h] BYREF
  int started; // [sp+8h] [bp-50h] BYREF
  _DWORD v5[2]; // [sp+Ch] [bp-4Ch] BYREF
  _DWORD v6[6]; // [sp+14h] [bp-44h] BYREF
  _DWORD v7[2]; // [sp+2Ch] [bp-2Ch] BYREF
  _DWORD v8[6]; // [sp+34h] [bp-24h] BYREF
  _DWORD v9[2]; // [sp+4Ch] [bp-Ch] BYREF
  _BYTE v10[4]; // [sp+54h] [bp-4h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  started = _rust_start_panic(v3);
  v6[2] = &off_2DE6F8;
  v6[3] = 2;
  v6[4] = v7;
  v6[5] = 1;
  v6[0] = 0;
  v7[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
  v8[2] = &off_2DF448;
  v8[0] = 0;
  v7[0] = v8;
  v8[3] = 1;
  v8[5] = 1;
  v8[4] = v9;
  v9[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v9[0] = &started;
  sub_1D6904(v5, (int)v10, v6);
  sub_1AF2E0((int)v5);
  std::sys::unix::abort_internal(v2);
}
