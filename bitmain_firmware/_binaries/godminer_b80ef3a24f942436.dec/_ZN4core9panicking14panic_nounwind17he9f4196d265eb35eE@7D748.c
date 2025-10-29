void __fastcall __noreturn core::panicking::panic_nounwind(int a1, int a2)
{
  _DWORD v2[6]; // [sp+0h] [bp-20h] BYREF
  _DWORD v3[2]; // [sp+18h] [bp-8h] BYREF

  v2[3] = 1;
  v2[2] = v3;
  v3[1] = a2;
  v3[0] = a1;
  v2[5] = 0;
  v2[0] = 0;
  v2[4] = aLibraryCoreSrc;
  core::panicking::panic_nounwind_fmt((int)v2, (int)&off_2EF0E4);
}
