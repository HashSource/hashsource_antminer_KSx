void __fastcall sub_1BE664(int a1, int a2, int a3, int a4, int a5, int a6)
{
  (*(void (__fastcall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) + 32))(
    **(_DWORD **)(a1 + 4),
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) + 32),
    a3,
    a4);
  __asm { POP             {R11,PC} }
}
