void __fastcall sub_201B1C(int a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // r3
  int v8; // r4
  char v9; // r5
  unsigned int v10; // r2

  v10 = sub_25A39C(a2);
  *(_WORD *)(v8 + 10) = v10;
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_BYTE *)(v8 + 9) = v10;
  *(_BYTE *)(v8 + 8) = v9;
  *(_DWORD *)(v8 + 12) = v10;
  *(_DWORD *)(v8 + 16) = v10;
  *(_DWORD *)(v8 + 20) = v7;
  __asm { POP             {R4,R5,R11,PC} }
}
