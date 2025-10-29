void __fastcall __noreturn core::panicking::panic_fmt(int a1, int a2)
{
  _DWORD v2[4]; // [sp+4h] [bp-14h] BYREF
  char v3; // [sp+14h] [bp-4h]

  v2[2] = a1;
  v3 = 1;
  v2[3] = a2;
  v2[1] = &off_2EF0D4;
  v2[0] = aLibraryCoreSrc;
  rust_begin_unwind((int)v2);
}
