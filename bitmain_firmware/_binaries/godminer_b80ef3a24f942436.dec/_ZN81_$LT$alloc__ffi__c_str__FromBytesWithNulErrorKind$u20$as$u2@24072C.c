int __fastcall <alloc::ffi::c_str::FromBytesWithNulErrorKind as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // [sp+4h] [bp-4h] BYREF

  if ( *a1 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aNotnulterminat, 16);
  v3 = a1 + 1;
  return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aInteriornul, 11, (int)&v3, (int)&off_2EE974);
}
