void __fastcall sub_201FEC(__int64 a1)
{
  int v1; // r4
  char v2; // r8
  unsigned int v3; // r0

  v3 = sub_25A39C(a1);
  *(_WORD *)(v1 + 10) = v3;
  *(_BYTE *)(v1 + 9) = v3;
  *(_BYTE *)(v1 + 8) = v2;
  *(_DWORD *)(v1 + 12) = v3;
  JUMPOUT(0x201FD0);
}
