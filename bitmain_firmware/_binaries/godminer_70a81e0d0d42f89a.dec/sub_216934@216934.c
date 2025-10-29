void __fastcall sub_216934(int a1, int a2, unsigned __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v9; // r4
  __int64 v10; // kr00_8
  __int64 v11; // r2

  v9 = *(_QWORD *)(a2 + 8);
  v10 = (a3 >> 1) + 1;
  v11 = v9 & a3 ^ v10;
  *(_DWORD *)(a1 + 12) = v11;
  *(_DWORD *)(a1 + 20) = (unsigned __int64)(v10 - v11) >> 32;
  *(_WORD *)(a1 + 10) = v9;
  *(_BYTE *)(a1 + 9) = v10;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = v10 - v11;
  *(_QWORD *)a1 = 0;
  __asm { POP             {R4-R6,R8,R9,PC} }
}
