void __fastcall sub_215FC0(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int16 v7; // lr
  __int64 v8; // r4
  __int64 v9; // r2

  v8 = *(_QWORD *)(a2 + 8);
  v9 = v8 & a3;
  *(_BYTE *)(a1 + 9) = v9;
  *(_DWORD *)(a1 + 20) = ~HIDWORD(v9);
  *(_WORD *)(a1 + 10) = v7;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = v8;
  *(_DWORD *)(a1 + 16) = ~(_DWORD)v9;
  *(_QWORD *)a1 = 0;
  __asm { POP             {R4,R5,R11,PC} }
}
