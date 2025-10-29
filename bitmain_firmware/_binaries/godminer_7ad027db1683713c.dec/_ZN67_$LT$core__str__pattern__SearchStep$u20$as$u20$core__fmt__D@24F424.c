int __fastcall <core::str::pattern::SearchStep as core::fmt::Debug>::fmt(_DWORD *a1, _DWORD *a2)
{
  void *v2; // r12
  int v3; // r2
  _DWORD *v5; // [sp+10h] [bp-8h] BYREF
  _DWORD *v6; // [sp+14h] [bp-4h] BYREF

  if ( !*a1 )
  {
    v6 = a1 + 2;
    v2 = &unk_2A2C49;
    v5 = a1 + 1;
    v3 = 5;
    return core::fmt::Formatter::debug_tuple_field2_finish(
             a2,
             (int)v2,
             v3,
             (int)&v5,
             (int)&off_2CF908,
             (int)&v6,
             (int)&off_2CF908);
  }
  if ( *a1 == 1 )
  {
    v6 = a1 + 2;
    v2 = &unk_2A2D89;
    v5 = a1 + 1;
    v3 = 6;
    return core::fmt::Formatter::debug_tuple_field2_finish(
             a2,
             (int)v2,
             v3,
             (int)&v5,
             (int)&off_2CF908,
             (int)&v6,
             (int)&off_2CF908);
  }
  return (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, aDone, 4);
}
