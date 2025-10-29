int __fastcall <object::pe::ImageDebugMisc as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // [sp+40h] [bp-10h] BYREF
  int v4; // [sp+44h] [bp-Ch] BYREF
  int v5; // [sp+48h] [bp-8h] BYREF
  int v6; // [sp+4Ch] [bp-4h] BYREF

  v4 = a1 + 4;
  v3 = a1;
  v5 = a1 + 8;
  v6 = a1 + 9;
  return core::fmt::Formatter::debug_struct_field4_finish(
           a2,
           &unk_2ABE2D,
           14,
           &unk_2ABE3B,
           9,
           &v3,
           &off_2E2638,
           aLength,
           6,
           &v4,
           &off_2E2638,
           &unk_2ABE44,
           7,
           &v5,
           &off_2E20D0,
           &unk_2A9DCA,
           8,
           &v6,
           &off_2E3448);
}
