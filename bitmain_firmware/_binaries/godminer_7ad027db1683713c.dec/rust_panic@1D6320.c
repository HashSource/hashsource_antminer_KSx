void __fastcall __noreturn rust_panic(int a1, int a2)
{
  _DWORD v2[2]; // [sp+0h] [bp-58h] BYREF
  int started; // [sp+8h] [bp-50h] BYREF
  _DWORD v4[2]; // [sp+Ch] [bp-4Ch] BYREF
  int v5[6]; // [sp+14h] [bp-44h] BYREF
  _DWORD v6[2]; // [sp+2Ch] [bp-2Ch] BYREF
  _DWORD v7[6]; // [sp+34h] [bp-24h] BYREF
  _DWORD v8[2]; // [sp+4Ch] [bp-Ch] BYREF
  _BYTE v9[4]; // [sp+54h] [bp-4h] BYREF

  v2[0] = a1;
  v2[1] = a2;
  started = _rust_start_panic(v2);
  v5[2] = (int)&off_2C96F8;
  v5[3] = 2;
  v5[4] = (int)v6;
  v5[5] = 1;
  v5[0] = 0;
  v6[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
  v7[2] = &off_2CA448;
  v7[0] = 0;
  v6[0] = v7;
  v7[3] = 1;
  v7[5] = 1;
  v7[4] = v8;
  v8[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v8[0] = &started;
  sub_1C4540(v4, (int)v9, v5);
  sub_19CF1C((int)v4);
  std::sys::unix::abort_internal();
}
