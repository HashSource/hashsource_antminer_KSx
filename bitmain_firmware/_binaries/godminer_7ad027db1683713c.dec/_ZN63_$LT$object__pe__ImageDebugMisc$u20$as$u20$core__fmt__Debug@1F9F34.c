int __fastcall <object::pe::ImageDebugMisc as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
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
           (int)&unk_294C1D,
           14,
           (int)&unk_294C2B,
           9u,
           (int)&v3,
           (int)&off_2CB638,
           (int)aLength,
           6u,
           (int)&v4,
           (int)&off_2CB638,
           (int)&unk_294C34,
           7u,
           (int)&v5,
           (int)&off_2CB0D0,
           (int)&unk_292BBA,
           8u,
           (int)&v6,
           (int)&off_2CC448);
}
