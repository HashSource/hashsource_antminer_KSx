int __fastcall <object::pe::ImageCor20Header as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[24]; // [sp+10h] [bp-90h] BYREF
  int v4; // [sp+70h] [bp-30h] BYREF
  int v5; // [sp+74h] [bp-2Ch] BYREF
  int v6; // [sp+78h] [bp-28h] BYREF
  int v7; // [sp+7Ch] [bp-24h] BYREF
  int v8; // [sp+80h] [bp-20h] BYREF
  int v9; // [sp+84h] [bp-1Ch] BYREF
  int v10; // [sp+88h] [bp-18h] BYREF
  int v11; // [sp+8Ch] [bp-14h] BYREF
  int v12; // [sp+90h] [bp-10h] BYREF
  int v13; // [sp+94h] [bp-Ch] BYREF
  int v14; // [sp+98h] [bp-8h] BYREF
  int v15; // [sp+9Ch] [bp-4h] BYREF

  v5 = a1 + 4;
  v6 = a1 + 6;
  v7 = a1 + 8;
  v8 = a1 + 16;
  v9 = a1 + 20;
  v10 = a1 + 24;
  v11 = a1 + 32;
  v12 = a1 + 40;
  v13 = a1 + 48;
  v4 = a1;
  v15 = a1 + 64;
  v3[22] = &v15;
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
  v3[11] = &off_2E0638;
  v3[9] = &off_2E0638;
  v3[1] = &off_2E0638;
  v14 = a1 + 56;
  v3[23] = &off_2E00B0;
  v3[21] = &off_2E00B0;
  v3[19] = &off_2E00B0;
  v3[17] = &off_2E00B0;
  v3[15] = &off_2E00B0;
  v3[13] = &off_2E00B0;
  v3[7] = &off_2E00B0;
  v3[5] = &off_2E0110;
  v3[3] = &off_2E0110;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, &unk_2A883C, 16, &off_2E1558, 12, v3, 12);
}
