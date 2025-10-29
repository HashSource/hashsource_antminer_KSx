void __fastcall __noreturn sub_246230(int a1, int a2)
{
  _DWORD v2[6]; // [sp+0h] [bp-20h] BYREF
  _DWORD v3[2]; // [sp+18h] [bp-8h] BYREF

  v2[3] = 1;
  v2[5] = 1;
  v2[4] = v3;
  v3[0] = a1;
  v2[0] = 0;
  v3[1] = sub_25F108;
  v2[2] = &off_2E40F4;
  core::panicking::panic_fmt((int)v2, a2);
}
