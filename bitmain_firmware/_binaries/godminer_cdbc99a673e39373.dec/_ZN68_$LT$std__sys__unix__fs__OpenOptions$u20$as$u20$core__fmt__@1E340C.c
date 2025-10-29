int __fastcall <std::sys::unix::fs::OpenOptions as core::fmt::Debug>::fmt(int a1, int a2)
{
  _DWORD v3[16]; // [sp+10h] [bp-60h] BYREF
  int v4; // [sp+50h] [bp-20h] BYREF
  int v5; // [sp+54h] [bp-1Ch] BYREF
  int v6; // [sp+58h] [bp-18h] BYREF
  int v7; // [sp+5Ch] [bp-14h] BYREF
  int v8; // [sp+60h] [bp-10h] BYREF
  int v9; // [sp+64h] [bp-Ch] BYREF
  int v10; // [sp+68h] [bp-8h] BYREF
  int v11; // [sp+6Ch] [bp-4h] BYREF

  v3[14] = &v11;
  v4 = a1 + 8;
  v3[12] = &v10;
  v5 = a1 + 9;
  v3[10] = &v9;
  v6 = a1 + 10;
  v3[8] = &v8;
  v7 = a1 + 11;
  v3[6] = &v7;
  v8 = a1 + 12;
  v3[4] = &v6;
  v10 = a1;
  v11 = a1 + 4;
  v3[11] = &off_2CB5F0;
  v3[9] = &off_2CB5F0;
  v3[7] = &off_2CB5F0;
  v3[5] = &off_2CB5F0;
  v3[3] = &off_2CB5F0;
  v3[1] = &off_2CB5F0;
  v9 = a1 + 13;
  v3[2] = &v5;
  v3[0] = &v4;
  v3[15] = &off_2CA1A0;
  v3[13] = &off_2CA3B8;
  return ((int (__fastcall *)(int, const char *, int, char **, int, _DWORD *, int))core::fmt::Formatter::debug_struct_fields_finish)(
           a2,
           aOpenoptions,
           11,
           &off_2CBC48,
           8,
           v3,
           8);
}
