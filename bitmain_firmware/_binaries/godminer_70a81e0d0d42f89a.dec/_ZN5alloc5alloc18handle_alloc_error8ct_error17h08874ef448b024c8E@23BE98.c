void __noreturn alloc::alloc::handle_alloc_error::ct_error()
{
  _DWORD v0[6]; // [sp+0h] [bp-18h] BYREF

  v0[3] = 1;
  v0[2] = &off_2E575C;
  v0[5] = 0;
  v0[0] = 0;
  v0[4] = &unk_2B45C8;
  core::panicking::panic_fmt((int)v0, (int)&off_2E5764);
}
