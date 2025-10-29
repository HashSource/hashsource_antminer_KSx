int __fastcall V_BOOL(int a1, char *s, char a3)
{
  size_t v6; // r0

  ++dword_312384;
  v6 = strlen(s);
  *(_DWORD *)a1 = s;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 2;
  *(_BYTE *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 4) = v6;
  return a1;
}
