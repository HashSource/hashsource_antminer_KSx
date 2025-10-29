int __fastcall sub_942DC(int a1, char ***a2, const char *a3, size_t *a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r5
  _DWORD *v9; // r7
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r6
  const char *v14; // lr
  bool v15; // zf
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r12
  int v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  size_t v27; // r2
  char **v28; // r3
  char *v29; // r9
  int v30; // r3
  size_t *v31; // r3
  size_t *v32; // r3
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r12
  int v37; // r1
  int v38; // r2
  int v39; // r3
  const char *v40; // r5
  const char **v42; // r3
  size_t v43; // r6
  char *v44; // r1
  char v45; // r2
  char *v46; // r3
  const char *v47; // [sp+0h] [bp-2Ch]
  int v50; // [sp+1Ch] [bp-10h] BYREF
  size_t v51; // [sp+20h] [bp-Ch]

  v6 = (_DWORD *)(a1 + 24);
  v9 = (_DWORD *)(a1 + 40);
  sub_9419C(a1);
  v10 = v6[1];
  v11 = v6[2];
  v12 = v6[3];
  v13 = (_DWORD *)(a1 + 8);
  v14 = (const char *)*(unsigned __int8 *)(a1 + 36);
  *v9 = *v6;
  v9[1] = v10;
  v9[2] = v11;
  v9[3] = v12;
  v15 = ((unsigned __int8)v14 & 0xF7) == 35;
  if ( ((unsigned __int8)v14 & 0xF7) != 0x23 )
    v15 = v14 == (const char *)37;
  v16 = *(_DWORD *)(a1 + 12);
  v17 = *(_DWORD *)(a1 + 16);
  v18 = *(_DWORD *)(a1 + 20);
  v19 = !v15;
  *v6 = *v13;
  v6[1] = v16;
  v6[2] = v17;
  v6[3] = v18;
  *a5 = 0;
  if ( v15 )
  {
    if ( a6 )
    {
      v46 = "Cannot use '%c' on optional strings";
      v44 = "<format>";
      v45 = 9;
      v47 = v14;
      goto LABEL_36;
    }
    if ( strbuffer_init(&v50) )
    {
      sub_9413C((int *)a1, "<internal>", 1, "Out of memory");
      *(_DWORD *)(a1 + 76) = 1;
    }
    while ( 1 )
    {
      v28 = (*a2)++;
      v29 = *v28;
      if ( !*v28 )
      {
        sub_9413C((int *)a1, "<args>", 12, "NULL %s", a3);
        *(_DWORD *)(a1 + 76) = 1;
      }
      sub_9419C(a1);
      v30 = *(unsigned __int8 *)(a1 + 36);
      if ( v30 == 35 )
        break;
      v20 = *(_DWORD *)(a1 + 76);
      if ( v30 == 37 )
      {
        v32 = (size_t *)(*a2)++;
        v27 = *v32;
LABEL_21:
        if ( !v20 )
          goto LABEL_14;
        goto LABEL_16;
      }
      v21 = v6[1];
      v22 = v6[2];
      v23 = v6[3];
      *v9 = *v6;
      v9[1] = v21;
      v9[2] = v22;
      v9[3] = v23;
      v24 = *(_DWORD *)(a1 + 12);
      v25 = *(_DWORD *)(a1 + 16);
      v26 = *(_DWORD *)(a1 + 20);
      *v6 = *v13;
      v6[1] = v24;
      v6[2] = v25;
      v6[3] = v26;
      if ( !v20 )
      {
        v27 = strlen(v29);
LABEL_14:
        if ( strbuffer_append_bytes((int)&v50, v29, v27) == -1 )
        {
          sub_9413C((int *)a1, "<internal>", 1, "Out of memory");
          *(_DWORD *)(a1 + 76) = 1;
        }
      }
LABEL_16:
      sub_9419C(a1);
      if ( *(_BYTE *)(a1 + 36) != 43 )
      {
        v33 = v6[1];
        v34 = v6[2];
        v35 = v6[3];
        v36 = *(_DWORD *)(a1 + 76);
        *v9 = *v6;
        v9[1] = v33;
        v9[2] = v34;
        v9[3] = v35;
        v37 = *(_DWORD *)(a1 + 12);
        v38 = *(_DWORD *)(a1 + 16);
        v39 = *(_DWORD *)(a1 + 20);
        *v6 = *v13;
        v6[1] = v37;
        v6[2] = v38;
        v6[3] = v39;
        if ( v36 )
        {
          v40 = 0;
          strbuffer_close(&v50);
        }
        else
        {
          v40 = (const char *)utf8_check_string(v50, v51);
          if ( v40 )
          {
            *a4 = v51;
            *a5 = 1;
            return strbuffer_steal_value(&v50);
          }
          else
          {
            sub_9413C((int *)a1, "<args>", 5, "Invalid UTF-8 %s", a3);
            strbuffer_close(&v50);
            *(_DWORD *)(a1 + 76) = 1;
          }
        }
        return (int)v40;
      }
    }
    v31 = (size_t *)*a2;
    v20 = *(_DWORD *)(a1 + 76);
    ++*a2;
    v27 = *v31;
    goto LABEL_21;
  }
  v42 = (const char **)(*a2)++;
  v40 = *v42;
  if ( *v42 )
  {
    v43 = strlen(*v42);
    v19 = utf8_check_string(v40, v43);
    if ( v19 )
    {
      *a4 = v43;
      return (int)v40;
    }
    v44 = "<args>";
    v45 = 5;
    v47 = a3;
    v46 = "Invalid UTF-8 %s";
LABEL_36:
    v40 = (const char *)v19;
    sub_9413C((int *)a1, v44, v45, v46, v47);
    *(_DWORD *)(a1 + 76) = 1;
    return (int)v40;
  }
  if ( !a6 )
  {
    sub_9413C((int *)a1, "<args>", 12, "NULL %s", a3);
    *(_DWORD *)(a1 + 76) = 1;
  }
  return (int)v40;
}
