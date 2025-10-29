int __fastcall <object::pe::ImageHotPatchInfo as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _DWORD v3[14]; // [sp+Ch] [bp-54h] BYREF
  int v4; // [sp+44h] [bp-1Ch] BYREF
  int v5; // [sp+48h] [bp-18h] BYREF
  int v6; // [sp+4Ch] [bp-14h] BYREF
  int v7; // [sp+50h] [bp-10h] BYREF
  int v8; // [sp+54h] [bp-Ch] BYREF
  int v9; // [sp+58h] [bp-8h] BYREF
  int v10; // [sp+5Ch] [bp-4h] BYREF

  v3[12] = &v10;
  v3[10] = &v9;
  v5 = a1 + 4;
  v3[8] = &v8;
  v6 = a1 + 8;
  v3[6] = &v7;
  v7 = a1 + 12;
  v3[4] = &v6;
  v8 = a1 + 16;
  v3[2] = &v5;
  v4 = a1;
  v9 = a1 + 20;
  v3[0] = &v4;
  v10 = a1 + 24;
  v3[13] = &off_2EB638;
  v3[11] = &off_2EB638;
  v3[9] = &off_2EB638;
  v3[7] = &off_2EB638;
  v3[5] = &off_2EB638;
  v3[3] = &off_2EB638;
  v3[1] = &off_2EB638;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, (int)&unk_2B4E22, 17, (int)&off_2EC2A0, 7, (int)v3, 7);
}
