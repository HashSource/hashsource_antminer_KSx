void __fastcall sub_213ED4(int a1, int a2)
{
  int v2; // r4
  char v3; // r8
  float v4; // r0

  v4 = sub_26C284(a1, a2);
  *(_WORD *)(v2 + 10) = LOWORD(v4);
  *(_BYTE *)(v2 + 9) = LOBYTE(v4);
  *(_BYTE *)(v2 + 8) = v3;
  *(float *)(v2 + 12) = v4;
  JUMPOUT(0x213EB8);
}
