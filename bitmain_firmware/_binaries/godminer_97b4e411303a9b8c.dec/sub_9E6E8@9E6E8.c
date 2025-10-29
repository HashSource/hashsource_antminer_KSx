int __fastcall sub_9E6E8(int a1, int a2, char *a3)
{
  int v3; // r6
  char v8[12]; // [sp+1Ch] [bp-7Ch] BYREF
  char v9[12]; // [sp+28h] [bp-70h] BYREF
  double v10[4]; // [sp+34h] [bp-64h] BYREF
  char s[68]; // [sp+54h] [bp-44h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    memset(v8, 0, 9);
    memset(v9, 0, 9);
    memset(s, 0, 0x41u);
    memset(v10, 0, sizeof(v10));
    bin2hex((int)v8, a1 + 1072, 4);
    bin2hex((int)v9, v3 + 4, 4);
    bin2hex((int)s, (int)v10, 32);
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}",
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      v9,
      (const char *)(a1 + 1100),
      v8,
      s,
      3);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
