unsigned int __fastcall sub_92DDC(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8
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
  __int64 v21; // r0
  char *v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  char *v26; // r3
  int v27; // r9
  unsigned int v28; // r3
  unsigned int v29; // r4
  bool v30; // cc
  _BYTE *v31; // r5
  const char *i; // r4
  int v33; // r3
  unsigned int v34; // r3
  int v35; // r0
  int v36; // r11
  int v37; // r0
  unsigned int v38; // r0
  const char *v39; // r5
  int *v40; // r4
  __int64 v41; // r0
  unsigned __int64 v42; // r8
  int v43; // r2
  unsigned int v44; // r1
  int v45; // [sp+Ch] [bp-10h]
  __int64 endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = a1 + 10;
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
      v5 = sub_92C20((int)a1, a2);
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
  strbuffer_append_byte(v2, (unsigned __int8)v5);
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
            v38 = sub_92D84((int)a1, a2);
            if ( v38 == 48 )
            {
LABEL_59:
              v19 = sub_92D84((int)a1, a2);
              if ( v19 - 48 <= 9 )
              {
LABEL_60:
                sub_92DC4(a1, v19);
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
                    sub_92DC4(a1, v19);
                  v39 = (const char *)strbuffer_value(v2);
                  v40 = _errno_location();
                  *v40 = 0;
                  v41 = strtoll(v39, (char **)&endptr, 10);
                  v42 = v41;
                  if ( *v40 == 34 )
                  {
                    if ( v41 < 0 )
                    {
                      sub_92A2C(a2, a1, 15, "too big negative integer");
                    }
                    else
                    {
                      *v40 = 0;
                      v42 = strtoull(v39, (char **)&endptr, 10);
                      if ( *v40 == 34 )
                      {
                        sub_92A2C(a2, a1, 15, "too big integer");
                        return a1[15];
                      }
                    }
                  }
                  v6 = 257;
                  *((_QWORD *)a1 + 8) = v42;
                  a1[15] = 257;
                  return v6;
                }
              }
              if ( v19 == 46 )
              {
                v44 = a1[5];
                if ( !v44 )
                  v44 = sub_92C20((int)a1, a2);
                if ( v44 - 48 > 9 )
                {
                  if ( v44 < 0xFFFFFFFE )
                  {
                    sub_92BC4(a1, v44);
                    return a1[15];
                  }
                  return a1[15];
                }
                strbuffer_append_byte(v2, (unsigned __int8)v44);
                do
                  v19 = sub_92D84((int)a1, a2);
                while ( v19 - 48 <= 9 );
              }
              if ( (v19 & 0xFFFFFFDF) == 0x45 )
              {
                v19 = sub_92D84((int)a1, a2);
                if ( ((v19 - 43) & 0xFFFFFFFD) == 0 )
                  v19 = sub_92D84((int)a1, a2);
                if ( v19 - 48 > 9 )
                {
                  if ( v19 < 0xFFFFFFFE )
                    goto LABEL_60;
                  return a1[15];
                }
                do
                  v19 = sub_92D84((int)a1, a2);
                while ( v19 - 48 <= 9 );
              }
              if ( v19 + 2 > 1 )
                sub_92DC4(a1, v19);
              if ( !jsonp_strtod(v2, &endptr) )
              {
                v21 = endptr;
                v6 = 258;
                a1[15] = 258;
                *((_QWORD *)a1 + 8) = v21;
                return v6;
              }
              sub_92A2C(a2, a1, 15, "real number overflow");
              return a1[15];
            }
            if ( v38 - 48 > 9 )
            {
              if ( v38 < 0xFFFFFFFE )
                sub_92DC4(a1, v38);
              return a1[15];
            }
          }
          else if ( v5 == 48 )
          {
            goto LABEL_59;
          }
          do
            v19 = sub_92D84((int)a1, a2);
          while ( v19 - 48 <= 9 );
          goto LABEL_62;
        }
        if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
        {
          v22 = (char *)a1 + a1[4];
          v23 = (unsigned __int8)v22[8];
          if ( v22[8] )
          {
            do
            {
              strbuffer_append_byte(v2, v23);
              v24 = a1[9];
              v25 = a1[4] + 1;
              a1[4] = v25;
              v26 = (char *)a1 + v25;
              a1[9] = v24 + 1;
              v23 = (unsigned __int8)v26[8];
            }
            while ( v26[8] );
          }
          goto LABEL_29;
        }
        do
          v10 = sub_92D84((int)a1, a2);
        while ( (v10 & 0xFFFFFFDF) - 65 <= 0x19 );
        if ( (unsigned int)(v10 + 2) > 1 )
          sub_92DC4(a1, v10);
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
      v13 = sub_92D84((int)a1, a2);
      v14 = v13;
      if ( v13 != 34 )
      {
        if ( v13 == -2 )
          goto LABEL_55;
        if ( v13 == -1 )
        {
LABEL_117:
          sub_92A2C(a2, a1, 6, "premature end of input");
          goto LABEL_55;
        }
        if ( v13 <= 0x1F )
        {
LABEL_115:
          sub_92DC4(a1, v14);
          if ( v14 == 10 )
            sub_92A2C(a2, a1, 8, "unexpected newline");
          else
            sub_92A2C(a2, a1, 8, "control character 0x%x", v14);
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
            v15 = sub_92D84((int)a1, a2);
            if ( v15 == 117 )
            {
              v27 = 4;
              v14 = sub_92D84((int)a1, a2);
              while ( 1 )
              {
                v28 = v14 & 0xFFFFFFDF;
                v29 = v14 - 48;
                v28 -= 65;
                v30 = v28 > 5;
                if ( v28 > 5 )
                  v30 = v29 > 9;
                if ( v30 )
                  break;
                --v27;
                v14 = sub_92D84((int)a1, a2);
                if ( !v27 )
                  goto LABEL_42;
              }
LABEL_54:
              sub_92A2C(a2, a1, 8, "invalid escape");
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
          v14 = sub_92D84((int)a1, a2);
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
      v31 = (_BYTE *)jsonp_malloc(a1[11] + 1);
      if ( !v31 )
        goto LABEL_55;
      a1[16] = v31;
      for ( i = (const char *)(strbuffer_value(v2) + 1); ; i += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = *(unsigned __int8 *)i;
            if ( v33 == 34 )
            {
              *v31 = 0;
              v43 = a1[16];
              v6 = 256;
              a1[15] = 256;
              a1[17] = &v31[-v43];
              return v6;
            }
            if ( v33 == 92 )
              break;
            *v31++ = v33;
            ++i;
          }
          v34 = *((unsigned __int8 *)i + 1);
          if ( v34 != 117 )
            break;
          v35 = sub_92920((int)(i + 1));
          v36 = v35;
          if ( v35 < 0 )
          {
            sub_92A2C(a2, a1, 8, "invalid Unicode escape '%.6s'", i);
            goto LABEL_55;
          }
          v45 = v35 - 55296;
          if ( (unsigned int)(v35 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v35 - 56320) < 0x400 )
              goto LABEL_148;
            i += 6;
          }
          else
          {
            if ( i[6] != 92 || i[7] != 117 )
            {
LABEL_148:
              sub_92A2C(a2, a1, 8, "invalid Unicode '\\u%04X'", v35);
              goto LABEL_55;
            }
            v37 = sub_92920((int)(i + 7));
            if ( v37 < 0 )
            {
              sub_92A2C(a2, a1, 8, "invalid Unicode escape '%.6s'", i + 6);
              goto LABEL_55;
            }
            i += 12;
            if ( (unsigned int)(v37 - 56320) >= 0x400 )
            {
              sub_92A2C(a2, a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v36, v37);
              goto LABEL_55;
            }
            v36 = v37 - 56320 + (v45 << 10) + 0x10000;
          }
          utf8_encode(v36, v31, &endptr);
          v31 += endptr;
        }
        if ( v34 == 98 )
        {
          *v31 = 8;
          goto LABEL_100;
        }
        if ( v34 <= 0x62 )
        {
          if ( v34 == 47 || v34 == 92 || v34 == 34 )
            goto LABEL_99;
        }
        else
        {
          if ( v34 == 110 )
          {
            *v31 = 10;
            goto LABEL_100;
          }
          if ( v34 <= 0x6E )
          {
            if ( v34 == 102 )
              *v31 = 12;
          }
          else
          {
            if ( v34 == 114 )
            {
              *v31 = 13;
              goto LABEL_100;
            }
            if ( v34 == 116 )
            {
              LOBYTE(v34) = 9;
LABEL_99:
              *v31 = v34;
            }
          }
        }
LABEL_100:
        ++v31;
      }
    }
  }
LABEL_35:
  a1[15] = v5;
  return v5;
}
