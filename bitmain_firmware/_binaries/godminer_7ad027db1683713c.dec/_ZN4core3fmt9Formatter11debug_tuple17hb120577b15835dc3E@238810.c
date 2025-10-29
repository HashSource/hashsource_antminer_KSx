int __fastcall core::fmt::Formatter::debug_tuple(int a1, _DWORD *a2, int a3, int a4)
{
  *(_BYTE *)(a1 + 8) = (*(int (__fastcall **)(_DWORD, int, int))(a2[1] + 12))(*a2, a3, a4);
  *(_BYTE *)(a1 + 9) = a4 == 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = a2;
  return 0;
}
