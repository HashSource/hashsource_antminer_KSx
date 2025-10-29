void __fastcall __noreturn sub_7D530(int a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r8
  int v7; // [sp+10h] [bp-20h] BYREF
  void *v8; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v9[6]; // [sp+18h] [bp-18h] BYREF

  v7 = a1;
  v8 = &unk_2A4E28;
  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  v5 = a2[4];
  v6 = a2[5];
  v9[0] = *a2;
  v9[1] = v2;
  v9[2] = v3;
  v9[3] = v4;
  v9[4] = v5;
  v9[5] = v6;
  core::panicking::assert_failed_inner(1, &v7, &off_2E1EEC, &v8, &off_2E1EEC, v9, &off_2E1BF4);
}
