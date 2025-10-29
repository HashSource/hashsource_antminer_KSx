int __fastcall core::fmt::Formatter::debug_list(int a1, _DWORD *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, const char *, int))(a2[1] + 12))(*a2, asc_2BF6F2, 1);
  *(_BYTE *)(a1 + 4) = result;
  *(_BYTE *)(a1 + 5) = 0;
  *(_DWORD *)a1 = a2;
  return result;
}
