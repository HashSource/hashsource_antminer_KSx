void __fastcall __noreturn core::result::unwrap_failed(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD v5[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-30h] BYREF
  _DWORD v7[6]; // [sp+10h] [bp-28h] BYREF
  _DWORD v8[4]; // [sp+28h] [bp-10h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v6[0] = a3;
  v6[1] = a4;
  v7[3] = 2;
  v7[5] = 2;
  v7[4] = v8;
  v7[0] = 0;
  v8[2] = v6;
  v8[0] = v5;
  v7[2] = &off_2CF15C;
  v8[3] = sub_24A52C;
  v8[1] = sub_24CE40;
  core::panicking::panic_fmt((int)v7, a5);
}
