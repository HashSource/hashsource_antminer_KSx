void __fastcall __noreturn sub_77CC8(int a1, _DWORD *a2, int a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r8
  int v8; // [sp+10h] [bp-20h] BYREF
  void *v9; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v10[6]; // [sp+18h] [bp-18h] BYREF

  v8 = a1;
  v9 = &unk_2901D8;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2[4];
  v7 = a2[5];
  v10[0] = *a2;
  v10[1] = v3;
  v10[2] = v4;
  v10[3] = v5;
  v10[4] = v6;
  v10[5] = v7;
  core::panicking::assert_failed_inner(0, (int)&v8, (int)&off_2C9378, (int)&v9, (int)&off_2C9378, v10, a3);
}
