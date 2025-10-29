int __fastcall std::process::Command::spawn(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // r5
  int v10; // [sp+0h] [bp-20h] BYREF
  int v11; // [sp+4h] [bp-1Ch]
  int v12; // [sp+8h] [bp-18h]
  int v13; // [sp+Ch] [bp-14h]
  int v14; // [sp+10h] [bp-10h]
  int v15; // [sp+14h] [bp-Ch]
  int v16; // [sp+18h] [bp-8h]

  sub_1F55A8(&v10, a2, 0, 1);
  if ( v10 == 2 )
  {
    result = v11;
    v4 = v12;
    *a1 = 2;
    a1[1] = result;
    a1[2] = v4;
  }
  else
  {
    v5 = v11;
    v6 = v12;
    v7 = v13;
    v8 = v15;
    result = v14;
    v9 = v16;
    *a1 = v10;
    a1[1] = v5;
    a1[2] = v6;
    a1[3] = v7;
    a1[4] = result;
    a1[5] = v8;
    a1[6] = v9;
  }
  return result;
}
