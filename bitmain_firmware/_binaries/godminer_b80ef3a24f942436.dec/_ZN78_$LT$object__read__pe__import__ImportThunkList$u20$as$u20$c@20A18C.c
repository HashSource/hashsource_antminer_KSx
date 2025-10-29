int __fastcall <object::read::pe::import::ImportThunkList as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return core::fmt::Formatter::debug_struct_field1_finish(
           a2,
           (int)aImportthunklis,
           15,
           (int)aData_0,
           4u,
           (int)&v3,
           (int)&off_2EB3B8);
}
