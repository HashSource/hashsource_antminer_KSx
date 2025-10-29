unsigned int __fastcall sub_9196C(_DWORD *a1, int a2)
{
  const void **v2; // r8
  unsigned int v5; // r4
  int v6; // r4
  bool v7; // zf
  _BOOL4 v8; // r2
  bool v9; // cc
  int v10; // r0
  const char *v11; // r4
  unsigned int v13; // r0
  unsigned int v14; // r4
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  unsigned int v19; // r0
  bool v20; // zf
  double v21; // r0
  char i; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r9
  unsigned int v26; // r3
  unsigned int v27; // r4
  bool v28; // cc
  _BYTE *v29; // r5
  const char *j; // r4
  int v31; // r3
  unsigned int v32; // r3
  int v33; // r0
  int v34; // r11
  int v35; // r0
  unsigned int v36; // r0
  const char *v37; // r5
  int *v38; // r4
  __int64 v39; // r0
  unsigned __int64 v40; // r8
  int v41; // r2
  unsigned int v42; // r1
  int v43; // [sp+Ch] [bp-10h]
  double endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = (const void **)(a1 + 10);
  strbuffer_clear(a1 + 10);
  if ( a1[15] == 256 )
  {
    jsonp_free(a1[16]);
    a1[16] = 0;
    a1[17] = 0;
  }
  v5 = a1[5];
  if ( !v5 )
    goto LABEL_33;
  while ( v5 - 9 <= 0x17 )
  {
    if ( ((0x800013u >> (v5 - 9)) & 1) == 0 )
      goto LABEL_7;
    v5 = a1[5];
    if ( !v5 )
LABEL_33:
      v5 = sub_917B0((int)a1, a2);
  }
  if ( v5 == -1 )
  {
    v6 = 0;
    a1[15] = 0;
    return v6;
  }
LABEL_7:
  if ( v5 == -2 )
  {
LABEL_29:
    v6 = -1;
    a1[15] = -1;
    return v6;
  }
  fh_buffer_putc(v2, v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) != 0 )
  {
    v7 = v5 == 44;
    if ( v5 != 44 )
      v7 = v5 == 58;
    v8 = v7;
    if ( !v7 )
    {
      if ( v5 != 34 )
      {
        v9 = v5 > 0x2D;
        if ( v5 != 45 )
          v9 = v5 - 48 > 9;
        if ( !v9 )
        {
          a1[15] = -1;
          if ( v5 == 45 )
          {
            v36 = sub_91914((int)a1, a2);
            if ( v36 == 48 )
            {
LABEL_59:
              v19 = sub_91914((int)a1, a2);
              if ( v19 - 48 <= 9 )
              {
LABEL_60:
                sub_91954(a1, v19);
                return a1[15];
              }
LABEL_62:
              if ( (a1[13] & 8) == 0 )
              {
                v20 = (v19 & 0xFFFFFFDF) == 69;
                if ( (v19 & 0xFFFFFFDF) != 0x45 )
                  v20 = v19 == 46;
                if ( !v20 )
                {
                  if ( v19 + 2 > 1 )
                    sub_91954(a1, v19);
                  v37 = (const char *)strbuffer_value(v2);
                  v38 = _errno_location();
                  *v38 = 0;
                  v39 = strtoll(v37, (char **)&endptr, 10);
                  v40 = v39;
                  if ( *v38 == 34 )
                  {
                    if ( v39 < 0 )
                    {
                      sub_915BC(a2, a1, 15, "too big negative integer");
                    }
                    else
                    {
                      *v38 = 0;
                      v40 = strtoull(v37, (char **)&endptr, 10);
                      if ( *v38 == 34 )
                      {
                        sub_915BC(a2, a1, 15, "too big integer");
                        return a1[15];
                      }
                    }
                  }
                  v6 = 257;
                  *((_QWORD *)a1 + 8) = v40;
                  a1[15] = 257;
                  return v6;
                }
              }
              if ( v19 == 46 )
              {
                v42 = a1[5];
                if ( !v42 )
                  v42 = sub_917B0((int)a1, a2);
                if ( v42 - 48 > 9 )
                {
                  if ( v42 < 0xFFFFFFFE )
                  {
                    sub_91754(a1, v42);
                    return a1[15];
                  }
                  return a1[15];
                }
                fh_buffer_putc(v2, v42);
                do
                  v19 = sub_91914((int)a1, a2);
                while ( v19 - 48 <= 9 );
              }
              if ( (v19 & 0xFFFFFFDF) == 0x45 )
              {
                v19 = sub_91914((int)a1, a2);
                if ( ((v19 - 43) & 0xFFFFFFFD) == 0 )
                  v19 = sub_91914((int)a1, a2);
                if ( v19 - 48 > 9 )
                {
                  if ( v19 < 0xFFFFFFFE )
                    goto LABEL_60;
                  return a1[15];
                }
                do
                  v19 = sub_91914((int)a1, a2);
                while ( v19 - 48 <= 9 );
              }
              if ( v19 + 2 > 1 )
                sub_91954(a1, v19);
              if ( !jsonp_strtod((const char **)v2, &endptr) )
              {
                v21 = endptr;
                v6 = 258;
                a1[15] = 258;
                *((double *)a1 + 8) = v21;
                return v6;
              }
              sub_915BC(a2, a1, 15, "real number overflow");
              return a1[15];
            }
            if ( v36 - 48 > 9 )
            {
              if ( v36 < 0xFFFFFFFE )
                sub_91954(a1, v36);
              return a1[15];
            }
          }
          else if ( v5 == 48 )
          {
            goto LABEL_59;
          }
          do
            v19 = sub_91914((int)a1, a2);
          while ( v19 - 48 <= 9 );
          goto LABEL_62;
        }
        if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
        {
          for ( i = *((_BYTE *)a1 + a1[4] + 8); i; i = *((_BYTE *)a1 + v24 + 8) )
          {
            fh_buffer_putc(v2, i);
            v23 = a1[9];
            v24 = a1[4] + 1;
            a1[4] = v24;
            a1[9] = v23 + 1;
          }
          goto LABEL_29;
        }
        do
          v10 = sub_91914((int)a1, a2);
        while ( (v10 & 0xFFFFFFDF) - 65 <= 0x19 );
        if ( (unsigned int)(v10 + 2) > 1 )
          sub_91954(a1, v10);
        v11 = (const char *)strbuffer_value(v2);
        if ( !strcmp(v11, "true") )
        {
          v6 = 259;
          a1[15] = 259;
          return v6;
        }
        if ( strcmp(v11, "false") )
        {
          if ( !strcmp(v11, "null") )
          {
            v6 = 261;
            a1[15] = 261;
            return v6;
          }
          goto LABEL_29;
        }
        v5 = 260;
        goto LABEL_35;
      }
      a1[16] = v8;
      a1[15] = -1;
      v13 = sub_91914((int)a1, a2);
      v14 = v13;
      if ( v13 != 34 )
      {
        if ( v13 == -2 )
          goto LABEL_55;
        if ( v13 == -1 )
        {
LABEL_117:
          sub_915BC(a2, a1, 6, "premature end of input");
          goto LABEL_55;
        }
        if ( v13 <= 0x1F )
        {
LABEL_115:
          sub_91954(a1, v14);
          if ( v14 == 10 )
            sub_915BC(a2, a1, 8, "unexpected newline");
          else
            sub_915BC(a2, a1, 8, "control character 0x%x", v14);
LABEL_55:
          jsonp_free(a1[16]);
          v6 = a1[15];
          a1[16] = 0;
          a1[17] = 0;
          return v6;
        }
        while ( 1 )
        {
          if ( v14 == 92 )
          {
            v15 = sub_91914((int)a1, a2);
            if ( v15 == 117 )
            {
              v25 = 4;
              v14 = sub_91914((int)a1, a2);
              while ( 1 )
              {
                v26 = v14 & 0xFFFFFFDF;
                v27 = v14 - 48;
                v26 -= 65;
                v28 = v26 > 5;
                if ( v26 > 5 )
                  v28 = v27 > 9;
                if ( v28 )
                  break;
                --v25;
                v14 = sub_91914((int)a1, a2);
                if ( !v25 )
                  goto LABEL_42;
              }
LABEL_54:
              sub_915BC(a2, a1, 8, "invalid escape");
              goto LABEL_55;
            }
            v16 = v15 - 92;
            v17 = __clz((v15 & 0xFFFFFFBF) - 34);
            if ( (unsigned int)(v15 - 92) <= 0x18 )
              v16 = ((0x1440401u >> v16) & 1) == 0;
            v18 = v17 >> 5;
            if ( (unsigned int)(v15 - 92) <= 0x18 )
              v18 |= v16 ^ 1;
            if ( !v18 && v15 != 47 )
              goto LABEL_54;
          }
          v14 = sub_91914((int)a1, a2);
LABEL_42:
          if ( v14 == 34 )
            break;
          if ( v14 == -2 )
            goto LABEL_55;
          if ( v14 == -1 )
            goto LABEL_117;
          if ( v14 <= 0x1F )
            goto LABEL_115;
        }
      }
      v29 = (_BYTE *)jsonp_malloc(a1[11] + 1);
      if ( !v29 )
        goto LABEL_55;
      a1[16] = v29;
      for ( j = (const char *)(strbuffer_value(v2) + 1); ; j += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = *(unsigned __int8 *)j;
            if ( v31 == 34 )
            {
              *v29 = 0;
              v41 = a1[16];
              v6 = 256;
              a1[15] = 256;
              a1[17] = &v29[-v41];
              return v6;
            }
            if ( v31 == 92 )
              break;
            *v29++ = v31;
            ++j;
          }
          v32 = *((unsigned __int8 *)j + 1);
          if ( v32 != 117 )
            break;
          v33 = sub_914B0((int)(j + 1));
          v34 = v33;
          if ( v33 < 0 )
          {
            sub_915BC(a2, a1, 8, "invalid Unicode escape '%.6s'", j);
            goto LABEL_55;
          }
          v43 = v33 - 55296;
          if ( (unsigned int)(v33 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v33 - 56320) < 0x400 )
              goto LABEL_148;
            j += 6;
          }
          else
          {
            if ( j[6] != 92 || j[7] != 117 )
            {
LABEL_148:
              sub_915BC(a2, a1, 8, "invalid Unicode '\\u%04X'", v33);
              goto LABEL_55;
            }
            v35 = sub_914B0((int)(j + 7));
            if ( v35 < 0 )
            {
              sub_915BC(a2, a1, 8, "invalid Unicode escape '%.6s'", j + 6);
              goto LABEL_55;
            }
            j += 12;
            if ( (unsigned int)(v35 - 56320) >= 0x400 )
            {
              sub_915BC(a2, a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v34, v35);
              goto LABEL_55;
            }
            v34 = v35 - 56320 + (v43 << 10) + 0x10000;
          }
          utf8_encode(v34, v29, &endptr);
          v29 += LODWORD(endptr);
        }
        if ( v32 == 98 )
        {
          *v29 = 8;
          goto LABEL_100;
        }
        if ( v32 <= 0x62 )
        {
          if ( v32 == 47 || v32 == 92 || v32 == 34 )
            goto LABEL_99;
        }
        else
        {
          if ( v32 == 110 )
          {
            *v29 = 10;
            goto LABEL_100;
          }
          if ( v32 <= 0x6E )
          {
            if ( v32 == 102 )
              *v29 = 12;
          }
          else
          {
            if ( v32 == 114 )
            {
              *v29 = 13;
              goto LABEL_100;
            }
            if ( v32 == 116 )
            {
              LOBYTE(v32) = 9;
LABEL_99:
              *v29 = v32;
            }
          }
        }
LABEL_100:
        ++v29;
      }
    }
  }
LABEL_35:
  a1[15] = v5;
  return v5;
}
