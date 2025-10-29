int __fastcall <alloc::collections::TryReserveErrorKind as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  if ( !*(_DWORD *)(a1 + 4) )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aCapacityoverfl, 16);
  v3 = a1;
  v4 = a1;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aAllocerror,
           10,
           (int)&unk_29ECEE,
           6,
           (int)&v3,
           (int)&off_2CF954,
           &unk_29ECF4,
           14,
           &v4,
           &off_2CF964);
}
