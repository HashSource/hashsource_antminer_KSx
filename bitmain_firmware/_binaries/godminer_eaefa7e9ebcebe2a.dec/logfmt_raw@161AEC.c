int logfmt_raw(char *a1, size_t n, int a3, ...)
{
  char *v3; // r9
  int v4; // r5
  const char **v5; // r4
  int v6; // r6
  unsigned int v7; // r8
  int *v8; // lr
  int v9; // r11
  const char *v10; // r8
  int result; // r0
  const char *v12; // r1
  char *v13; // r12
  const char *v14; // [sp+18h] [bp-1024h]
  double v15; // [sp+28h] [bp-1014h]
  char s[4104]; // [sp+38h] [bp-1004h] BYREF
  va_list varg_r3; // [sp+1064h] [bp+28h] BYREF

  va_start(varg_r3, a3);
  v3 = a1;
  memset(a1, 0, n);
  memset(s, 0, 0x1000u);
  if ( dword_307BCC <= 0 )
  {
    va_copy(v5, varg_r3);
  }
  else
  {
    v4 = 0;
    va_copy(v5, varg_r3);
    v6 = 0;
    while ( 2 )
    {
      v7 = ((unsigned int)v5 + 7) & 0xFFFFFFF8;
      v5 = (const char **)(v7 + 32);
      v8 = (int *)(v7 + 16);
      v14 = *(const char **)v7;
      v9 = *(_DWORD *)(v7 + 8);
      v10 = *(const char **)v7;
      result = *v8;
      v15 = *(double *)v8;
      switch ( v9 )
      {
        case 0:
          if ( strchr((const char *)LODWORD(v15), 32)
            || !strcmp((const char *)LODWORD(v15), "true") && strlen((const char *)LODWORD(v15)) == 4 )
          {
            v6 += sprintf(&v3[v6], "%s=\"%s\" ", v10, (const char *)LODWORD(v15));
          }
          else
          {
            v6 += sprintf(&v3[v6], "%s=%s ", v10, (const char *)LODWORD(v15));
          }
          goto LABEL_5;
        case 1:
          v6 += sprintf(&v3[v6], "%s=%lf ", v14, v15);
          goto LABEL_5;
        case 2:
          v13 = "false";
          if ( LOBYTE(v15) )
            v13 = "true";
          v6 += sprintf(&v3[v6], "%s=%s ", v14, v13);
          goto LABEL_5;
        case 3:
          v6 += sprintf(&v3[v6], "%s=%lld ", v14, v8[3], v15);
LABEL_5:
          if ( dword_307BCC > ++v4 )
            continue;
          v3 += v6;
          break;
        default:
          return result;
      }
      break;
    }
  }
  vsprintf(s, *v5, v5 + 1);
  if ( strchr(s, 32) )
    LOWORD(v12) = -15508;
  else
    LOWORD(v12) = -15496;
  HIWORD(v12) = 41;
  result = sprintf(v3, v12, s);
  dword_307BCC = 0;
  return result;
}
