void __fastcall sub_216040(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r3
  int v9; // r4
  char v10; // r5
  float v11; // r2

  v11 = sub_26E8C4(a3, a4);
  *(_WORD *)(v9 + 10) = LOWORD(v11);
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  *(_BYTE *)(v9 + 9) = LOBYTE(v11);
  *(_BYTE *)(v9 + 8) = v10;
  *(float *)(v9 + 12) = v11;
  *(float *)(v9 + 16) = v11;
  *(_DWORD *)(v9 + 20) = v8;
  __asm { POP             {R4,R5,R11,PC} }
}
