void __fastcall sub_2340EC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( *(_DWORD *)a1 )
  {
    --*(_DWORD *)a1;
    __asm { POP             {R11,PC} }
  }
  *(_BYTE *)(a1 + 8) = 1;
  __asm { POP             {R11,PC} }
}
