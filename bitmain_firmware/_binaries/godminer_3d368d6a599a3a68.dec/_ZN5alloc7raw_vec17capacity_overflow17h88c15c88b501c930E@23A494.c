void __noreturn alloc::raw_vec::capacity_overflow()
{
  _DWORD v0[6]; // [sp+0h] [bp-18h] BYREF

  v0[3] = 1;
  v0[2] = &off_2E3744;
  v0[5] = 0;
  v0[0] = 0;
  v0[4] = &unk_2B2AA8;
  core::panicking::panic_fmt((int)v0, (int)&off_2E374C);
}
