void __fastcall __noreturn sub_79864(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r9
  int v10; // [sp+10h] [bp-20h] BYREF
  int v11; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v12[6]; // [sp+18h] [bp-18h] BYREF

  v11 = a3;
  v10 = a2;
  v5 = a4[1];
  v6 = a4[2];
  v7 = a4[3];
  v8 = a4[4];
  v9 = a4[5];
  v12[0] = *a4;
  v12[1] = v5;
  v12[2] = v6;
  v12[3] = v7;
  v12[4] = v8;
  v12[5] = v9;
  core::panicking::assert_failed_inner(a1, &v10, &off_2DF3B8, &v11, &off_2DF3B8, v12, a5);
}
