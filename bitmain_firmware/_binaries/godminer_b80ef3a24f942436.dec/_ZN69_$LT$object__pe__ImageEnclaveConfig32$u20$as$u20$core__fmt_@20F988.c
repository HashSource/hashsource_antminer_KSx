int __fastcall <object::pe::ImageEnclaveConfig32 as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _DWORD v3[26]; // [sp+Ch] [bp-9Ch] BYREF
  int v4; // [sp+74h] [bp-34h] BYREF
  int v5; // [sp+78h] [bp-30h] BYREF
  int v6; // [sp+7Ch] [bp-2Ch] BYREF
  int v7; // [sp+80h] [bp-28h] BYREF
  int v8; // [sp+84h] [bp-24h] BYREF
  int v9; // [sp+88h] [bp-20h] BYREF
  int v10; // [sp+8Ch] [bp-1Ch] BYREF
  int v11; // [sp+90h] [bp-18h] BYREF
  int v12; // [sp+94h] [bp-14h] BYREF
  int v13; // [sp+98h] [bp-10h] BYREF
  int v14; // [sp+9Ch] [bp-Ch] BYREF
  int v15; // [sp+A0h] [bp-8h] BYREF
  int v16; // [sp+A4h] [bp-4h] BYREF

  v5 = a1 + 4;
  v6 = a1 + 8;
  v7 = a1 + 12;
  v8 = a1 + 16;
  v9 = a1 + 20;
  v10 = a1 + 24;
  v11 = a1 + 40;
  v12 = a1 + 56;
  v13 = a1 + 60;
  v14 = a1 + 64;
  v4 = a1;
  v16 = a1 + 72;
  v3[24] = &v16;
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
  v3[25] = &off_2EB638;
  v3[23] = &off_2EB638;
  v3[21] = &off_2EB638;
  v3[19] = &off_2EB638;
  v3[17] = &off_2EB638;
  v3[11] = &off_2EB638;
  v3[9] = &off_2EB638;
  v3[7] = &off_2EB638;
  v3[5] = &off_2EB638;
  v3[3] = &off_2EB638;
  v3[1] = &off_2EB638;
  v15 = a1 + 68;
  v3[15] = &off_2EB4B8;
  v3[13] = &off_2EB4B8;
  return core::fmt::Formatter::debug_struct_fields_finish(a2, (int)&unk_2B502B, 20, (int)&off_2EC328, 13, (int)v3, 13);
}
