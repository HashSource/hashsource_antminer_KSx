int __fastcall <alloc::collections::TryReserveErrorKind as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  if ( !*(_DWORD *)(a1 + 4) )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  v3 = a1;
  v4 = a1;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aAllocerror,
           10,
           (int)&unk_29D79E,
           6u,
           (int)&v3,
           (int)&off_2CE954,
           (int)&unk_29D7A4,
           0xEu,
           (int)&v4,
           (int)&off_2CE964);
}
