void __fastcall sub_216054(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r4
  char v9; // r5
  double v10; // r0

  v10 = sub_26EC20(a3, a4);
  *(_WORD *)(v8 + 10) = LOWORD(v10);
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_BYTE *)(v8 + 9) = LOBYTE(v10);
  *(_BYTE *)(v8 + 8) = v9;
  *(_DWORD *)(v8 + 12) = LODWORD(v10);
  *(double *)(v8 + 16) = v10;
  __asm { POP             {R4,R5,R11,PC} }
}
