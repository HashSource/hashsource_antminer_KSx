void __fastcall __noreturn core::panicking::panic_nounwind_fmt(int a1, int a2)
{
  _DWORD v2[4]; // [sp+4h] [bp-14h] BYREF
  char v3; // [sp+14h] [bp-4h]

  v3 = 0;
  v2[3] = a2;
  v2[2] = a1;
  v2[1] = &off_2E60D4;
  v2[0] = aLibraryCoreSrc;
  rust_begin_unwind(v2);
}
