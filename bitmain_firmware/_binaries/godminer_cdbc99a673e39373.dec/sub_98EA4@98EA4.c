int __fastcall sub_98EA4(int a1, int a2, char *a3)
{
  int *v3; // r5
  int v6; // r4
  const char *v7; // r9
  const char *v8; // r8
  int v9; // r0
  char s[12]; // [sp+18h] [bp-2Ch] BYREF
  char v12[9]; // [sp+24h] [bp-20h] BYREF
  __int64 v13; // [sp+2Dh] [bp-17h]
  __int64 v14; // [sp+35h] [bp-Fh]

  v3 = *(int **)(a1 + 1132);
  if ( v3 )
  {
    memset(v12, 0, sizeof(v12));
    memset(s, 0, 9);
    v6 = a1 + 1088;
    v13 = 0;
    v14 = 0;
    bin2hex((int)s, a1 + 1072, 4);
    bin2hex((int)v12, (int)(v3 + 1), *v3);
    v7 = *(const char **)(a2 + 16);
    v8 = *(const char **)(v6 + 36);
    v9 = rand();
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
      v7,
      v8,
      v12,
      (const char *)(v6 + 12),
      s,
      v9 % 3 + 10);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
