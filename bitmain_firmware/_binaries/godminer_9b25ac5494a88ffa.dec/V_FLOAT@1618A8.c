int __fastcall V_FLOAT(int a1, char *s)
{
  __int64 v2; // d0
  size_t v5; // r0

  ++dword_30ABFC;
  v5 = strlen(s);
  *(_DWORD *)a1 = s;
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 4) = v5;
  return a1;
}
