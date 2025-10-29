int __fastcall core::fmt::Formatter::debug_map(int a1, _DWORD *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, asc_29F1A1, 1);
  *(_BYTE *)(a1 + 7) = 1;
  *(_WORD *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 4) = result;
  *(_DWORD *)a1 = a2;
  return result;
}
