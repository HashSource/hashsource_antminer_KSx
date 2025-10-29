int __fastcall <object::pe::ImageLinenumber as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+20h] [bp-8h] BYREF
  int v4; // [sp+24h] [bp-4h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  return core::fmt::Formatter::debug_struct_field2_finish(
           a2,
           (int)aImagelinenumbe,
           15,
           (int)&unk_2B4562,
           0x25u,
           (int)&v3,
           (int)&off_2EB638,
           (int)&unk_2B44C1,
           0xAu,
           (int)&v4,
           (int)&off_2EB110);
}
