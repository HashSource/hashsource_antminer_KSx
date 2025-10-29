bool __fastcall <std::fs::Permissions as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_tuple_field1_finish(a2, (int)aPermissions_0, 11, (int)&v3, (int)&off_2CA5C0);
}
