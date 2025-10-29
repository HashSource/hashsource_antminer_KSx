void __fastcall __noreturn core::panicking::panic(int a1, int a2, int a3)
{
  _DWORD v3[6]; // [sp+0h] [bp-20h] BYREF
  _DWORD v4[2]; // [sp+18h] [bp-8h] BYREF

  v3[3] = 1;
  v3[2] = v4;
  v4[1] = a2;
  v4[0] = a1;
  v3[5] = 0;
  v3[0] = 0;
  v3[4] = aLibraryCoreSrc;
  core::panicking::panic_fmt((int)v3, a3);
}
