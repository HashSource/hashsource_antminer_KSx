int __fastcall core::fmt::Formatter::pad(int *a1, char *a2, unsigned int a3)
{
  int v3; // r12
  int v5; // r0
  char *v6; // r10
  bool v7; // zf
  char *v8; // lr
  char *v9; // r5
  int v10; // r7
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r4
  char *v14; // r0
  int v15; // r6
  int v16; // r1
  int v17; // r6
  int v18; // r6
  int v19; // r1
  bool v20; // cf
  char *v21; // r0
  unsigned int v22; // r4
  unsigned int v23; // r0
  char *v24; // r1
  char *v25; // r2
  int v26; // t1
  int v27; // r2
  unsigned int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r9
  int v32; // r11
  unsigned int v33; // r7
  int v34; // r4
  int v35; // r6
  int v36; // r5
  unsigned int v37; // r0

  v3 = a1[2];
  v5 = a1[4];
  v6 = a2;
  v7 = v3 == 1;
  if ( v3 != 1 )
    v7 = v5 == 1;
  if ( !v7 )
  {
    v11 = *a1;
    v12 = a1[1];
    return (*(int (__fastcall **)(int, char *, unsigned int))(v12 + 12))(v11, v6, a3);
  }
  if ( v5 == 1 )
  {
    v8 = &a2[a3];
    v9 = 0;
    v10 = a1[5] + 1;
    while ( 1 )
    {
      --v10;
      v14 = a2;
      if ( !v10 )
        break;
      if ( a2 == v8 )
        goto LABEL_34;
      ++a2;
      v15 = *v14;
      v13 = (unsigned __int8)v15;
      if ( v15 <= -1 )
      {
        v16 = v15 & 0x1F;
        v17 = v14[1] & 0x3F;
        if ( v13 <= 0xDF )
        {
          v13 = v17 | (v16 << 6);
          a2 = v14 + 2;
        }
        else
        {
          v18 = v14[2] & 0x3F | (v17 << 6);
          if ( v13 < 0xF0 )
          {
            v13 = v18 | (v16 << 12);
            a2 = v14 + 3;
          }
          else
          {
            v13 = v14[3] & 0x3F | (v18 << 6) | ((v16 & 7) << 18);
            if ( v13 == 1114112 )
              goto LABEL_34;
            a2 = v14 + 4;
          }
        }
      }
      v9 = &a2[v9 - v14];
      if ( v13 == 1114112 )
        goto LABEL_34;
    }
    if ( a2 != v8 )
    {
      v19 = *a2;
      if ( v19 > -1 )
        goto LABEL_22;
      v20 = (unsigned __int8)v19 >= 0xE0u;
      if ( (unsigned __int8)v19 >= 0xE0u )
        v20 = (unsigned __int8)v19 >= 0xF0u;
      if ( !v20 || (((v14[2] & 0x3F) << 6) | ((v14[1] & 0x3F) << 12) | v14[3] & 0x3F | ((v19 & 7) << 18)) != 0x110000 )
      {
LABEL_22:
        if ( v9 )
        {
          if ( (unsigned int)v9 >= a3 )
          {
            v21 = 0;
            if ( v9 == (char *)a3 )
              v21 = v6;
LABEL_28:
            if ( v21 )
              v6 = v21;
            else
              v9 = (char *)a3;
            if ( !v3 )
              goto LABEL_48;
            goto LABEL_35;
          }
          v21 = 0;
          if ( v9[(_DWORD)v6] < -64 )
            goto LABEL_28;
        }
        v21 = v6;
        goto LABEL_28;
      }
    }
  }
LABEL_34:
  v9 = (char *)a3;
  if ( !v3 )
    goto LABEL_48;
LABEL_35:
  v22 = a1[3];
  if ( (unsigned int)v9 >= 0x10 )
  {
    v23 = core::str::count::do_count_chars(v6, (unsigned int)v9);
    if ( v22 > v23 )
      goto LABEL_42;
LABEL_48:
    v12 = a1[1];
    a3 = (unsigned int)v9;
    v11 = *a1;
    return (*(int (__fastcall **)(int, char *, unsigned int))(v12 + 12))(v11, v6, a3);
  }
  v23 = 0;
  if ( v9 )
  {
    v24 = v9;
    v25 = v6;
    do
    {
      v26 = *v25++;
      if ( v26 > -65 )
        ++v23;
      --v24;
    }
    while ( v24 );
  }
  if ( v22 <= v23 )
    goto LABEL_48;
LABEL_42:
  v27 = *((unsigned __int8 *)a1 + 32);
  v28 = v22 - v23;
  v29 = v27 - 3;
  if ( v27 != 3 )
    v29 = *((unsigned __int8 *)a1 + 32);
  if ( (v29 & 3) != 0 )
  {
    if ( v29 == 1 )
    {
      v30 = 0;
      goto LABEL_53;
    }
    v29 = v28 >> 1;
    v30 = (v28 + 1) >> 1;
  }
  else
  {
    v30 = v28;
  }
  v28 = v29;
LABEL_53:
  v32 = *a1;
  v33 = v28 + 1;
  v34 = a1[1];
  v35 = a1[7];
  while ( --v33 )
  {
    if ( (*(int (__fastcall **)(int, int))(v34 + 16))(v32, v35) )
      return 1;
  }
  if ( v35 == 1114112 || (*(int (__fastcall **)(int, char *, char *))(v34 + 12))(v32, v6, v9) )
    return 1;
  v36 = 0;
  while ( v30 != v36 )
  {
    ++v36;
    if ( (*(int (__fastcall **)(int, int))(v34 + 16))(v32, v35) )
    {
      v37 = v36 - 1;
      return v37 < v30;
    }
  }
  v37 = v30;
  return v37 < v30;
}
