int __fastcall <object::pe::ImageNtHeaders64 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  int v3; // [sp+2Ch] [bp+0h] BYREF
  int v4; // [sp+30h] [bp+4h] BYREF
  int v5; // [sp+34h] [bp+8h] BYREF

  v3 = a1;
  v4 = a1 + 4;
  v5 = a1 + 24;
  return core::fmt::Formatter::debug_struct_field3_finish(
           a2,
           (int)&aE32Lastpagesiz[16],
           16,
           (int)aSignature,
           9u,
           (int)&v3,
           (int)&off_2CB638,
           (int)&unk_293D56,
           0xBu,
           (int)&v4,
           (int)&off_2CBCA0,
           (int)&unk_293D61,
           0xFu,
           (int)&v5,
           (int)&off_2CBCB0);
}
