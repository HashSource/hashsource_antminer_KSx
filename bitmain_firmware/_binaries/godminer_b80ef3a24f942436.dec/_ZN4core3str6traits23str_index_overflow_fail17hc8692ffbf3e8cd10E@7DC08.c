void __fastcall __noreturn core::str::traits::str_index_overflow_fail(int a1)
{
  _DWORD v1[6]; // [sp+0h] [bp-18h] BYREF

  v1[3] = 1;
  v1[2] = &off_2EF3C8;
  v1[5] = 0;
  v1[0] = 0;
  v1[4] = aLibraryCoreSrc;
  core::panicking::panic_fmt((int)v1, a1);
}
