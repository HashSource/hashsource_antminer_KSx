void __fastcall __noreturn sub_7DA90(int a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // [sp+10h] [bp-20h] BYREF
  int v9; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v10[6]; // [sp+18h] [bp-18h] BYREF

  v9 = a2;
  v8 = a1;
  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  v6 = a3[4];
  v7 = a3[5];
  v10[0] = *a3;
  v10[1] = v3;
  v10[2] = v4;
  v10[3] = v5;
  v10[4] = v6;
  v10[5] = v7;
  core::panicking::assert_failed_inner(0, &v8, &off_2E4908, &v9, &off_2E4908, v10, &off_2E4258);
}
