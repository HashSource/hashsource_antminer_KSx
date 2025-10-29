int __fastcall <object::pe::ImageExportDirectory as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[22]; // [sp+Ch] [bp-84h] BYREF
  int v4; // [sp+64h] [bp-2Ch] BYREF
  int v5; // [sp+68h] [bp-28h] BYREF
  int v6; // [sp+6Ch] [bp-24h] BYREF
  int v7; // [sp+70h] [bp-20h] BYREF
  int v8; // [sp+74h] [bp-1Ch] BYREF
  int v9; // [sp+78h] [bp-18h] BYREF
  int v10; // [sp+7Ch] [bp-14h] BYREF
  int v11; // [sp+80h] [bp-10h] BYREF
  int v12; // [sp+84h] [bp-Ch] BYREF
  int v13; // [sp+88h] [bp-8h] BYREF
  int v14; // [sp+8Ch] [bp-4h] BYREF

  v5 = a1 + 4;
  v6 = a1 + 8;
  v7 = a1 + 10;
  v8 = a1 + 12;
  v9 = a1 + 16;
  v10 = a1 + 20;
  v11 = a1 + 24;
  v12 = a1 + 28;
  v4 = a1;
  v14 = a1 + 36;
  v3[20] = &v14;
  v3[18] = &v13;
  v3[16] = &v12;
  v3[14] = &v11;
  v3[12] = &v10;
  v3[10] = &v9;
  v3[8] = &v8;
  v3[6] = &v7;
  v3[4] = &v6;
  v3[2] = &v5;
  v3[0] = &v4;
  v3[21] = &off_2E1638;
  v3[19] = &off_2E1638;
  v3[17] = &off_2E1638;
  v3[15] = &off_2E1638;
  v3[13] = &off_2E1638;
  v3[11] = &off_2E1638;
  v3[9] = &off_2E1638;
  v3[3] = &off_2E1638;
  v3[1] = &off_2E1638;
  v13 = a1 + 32;
  v3[7] = &off_2E1110;
  v3[5] = &off_2E1110;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_2A9A38, 20, &off_2E1EF8, 11, v3, 11);
}
