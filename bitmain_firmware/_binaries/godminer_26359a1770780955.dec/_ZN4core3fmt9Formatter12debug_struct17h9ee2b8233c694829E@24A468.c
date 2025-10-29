int __fastcall core::fmt::Formatter::debug_struct(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, int, int))(a2[1] + 12))(*a2, a3, a4);
  *(_BYTE *)(a1 + 4) = result;
  *(_BYTE *)(a1 + 5) = 0;
  *(_DWORD *)a1 = a2;
  return result;
}
