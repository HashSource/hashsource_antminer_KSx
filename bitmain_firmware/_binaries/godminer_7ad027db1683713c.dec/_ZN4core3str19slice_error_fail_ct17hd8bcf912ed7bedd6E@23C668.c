void __fastcall __noreturn core::str::slice_error_fail_ct(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v5[3] = 1;
  v5[2] = &off_2CF488;
  v5[5] = 0;
  v5[0] = 0;
  v5[4] = aLibraryCoreSrc;
  core::panicking::panic_fmt((int)v5, a5);
}
