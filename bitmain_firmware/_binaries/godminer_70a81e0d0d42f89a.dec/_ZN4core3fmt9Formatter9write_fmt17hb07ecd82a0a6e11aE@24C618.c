// Alternative name is '_ZN57_$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$9write_fmt17he57a0117286e1606E'
bool __fastcall core::fmt::Formatter::write_fmt(int *a1, int *a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r8
  int v9; // r1
  int v11[6]; // [sp+0h] [bp-18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[4];
  v8 = a2[5];
  v9 = a1[1];
  v11[0] = v3;
  v11[1] = v4;
  v11[2] = v5;
  v11[3] = v6;
  v11[4] = v7;
  v11[5] = v8;
  return core::fmt::write(v2, v9, v11);
}
