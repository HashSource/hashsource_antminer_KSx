int __fastcall <object::read::pe::resource::ResourceName as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a1;
  return ((int (__fastcall *)(int, const char *, int, void *, int, int *, int (**)()))core::fmt::Formatter::debug_struct_field1_finish)(
           a2,
           aResourcename,
           12,
           &unk_2AA518,
           6,
           &v3,
           &off_2E2308);
}
