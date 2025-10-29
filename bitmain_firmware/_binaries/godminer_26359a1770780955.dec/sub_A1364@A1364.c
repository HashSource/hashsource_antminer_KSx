int __fastcall sub_A1364(int a1, int a2, char *a3)
{
  _DWORD *v3; // r3
  const char *v7; // r1
  int v8; // r3
  const char *v10; // [sp+4h] [bp-28h]
  char s[24]; // [sp+14h] [bp-18h] BYREF

  v3 = *(_DWORD **)(a1 + 1132);
  if ( v3 )
  {
    bin2hex((int)s, a1 + 1072, *v3 + 5);
    v7 = *(const char **)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 1920);
    v10 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1920) = v8 + 1;
    snprintf(a3, 0xC00u, "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}", v8, v7, v10, s);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
