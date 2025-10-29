int __fastcall <memchr::memmem::twoway::Shift as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  _DWORD *v3; // lr
  const char *v4; // r1
  void *v5; // r3
  int v6; // r0
  _DWORD *v8; // [sp+10h] [bp-8h] BYREF
  _DWORD *v9; // [sp+14h] [bp-4h] BYREF

  if ( *a1 )
  {
    v3 = &v9;
    v4 = (const char *)&unk_2AA991;
    v9 = a1 + 1;
    v5 = &unk_2AA98C;
    v6 = 5;
  }
  else
  {
    v3 = &v8;
    v8 = a1 + 1;
    v4 = aSmall;
    v5 = &unk_2AA99B;
    v6 = 6;
  }
  return core::fmt::Formatter::debug_struct_field1_finish(a2, v4, 5, v5, v6, v3, &off_2E16F8);
}
