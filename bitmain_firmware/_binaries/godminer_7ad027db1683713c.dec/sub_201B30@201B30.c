void __fastcall sub_201B30(int a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // r4
  char v8; // r5
  unsigned __int64 v9; // r0

  v9 = sub_25A6F8(a2);
  *(_WORD *)(v7 + 10) = v9;
  *(_DWORD *)v7 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 9) = v9;
  *(_BYTE *)(v7 + 8) = v8;
  *(_DWORD *)(v7 + 12) = v9;
  *(_QWORD *)(v7 + 16) = v9;
  __asm { POP             {R4,R5,R11,PC} }
}
