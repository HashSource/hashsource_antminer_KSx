_QWORD *__fastcall V_STR(_QWORD *a1, char *s, const char *a3)
{
  __int64 v5; // r6
  size_t v6; // r0

  LODWORD(v5) = s;
  ++dword_2E95A4;
  HIDWORD(v5) = strlen(s);
  v6 = strlen(a3);
  *a1 = v5;
  a1[1] = 0;
  a1[2] = 0;
  *((_DWORD *)a1 + 4) = a3;
  a1[3] = 0;
  *((_DWORD *)a1 + 6) = v6;
  return a1;
}
