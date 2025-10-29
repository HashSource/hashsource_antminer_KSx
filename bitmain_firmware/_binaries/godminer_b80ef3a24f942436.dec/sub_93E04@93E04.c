int __fastcall sub_93E04(int a1, int **a2)
{
  double *v4; // r6
  int v6; // r7
  bool v7; // zf
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r3
  char *v17; // r7
  int v18; // r9
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _DWORD *v25; // r0
  _DWORD *v26; // r2
  unsigned int *v27; // r3
  unsigned int v28; // r1
  unsigned int v29; // r1
  _DWORD *v30; // r7
  int v31; // r8
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r1
  int v36; // r2
  int v37; // r3
  _DWORD *v38; // r0
  _DWORD *v39; // r1
  unsigned int *v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // r2
  __int64 *v43; // r3
  double *v44; // r0
  unsigned int *v45; // r3
  unsigned int v46; // r2
  unsigned int v47; // r2
  int *v48; // r3
  int *v49; // r3
  unsigned int *v50; // r3
  unsigned int v51; // r2
  unsigned int v52; // r2
  double *v53; // r0
  unsigned int *v54; // r3
  unsigned int v55; // r2
  int v56; // [sp+4h] [bp-18h]
  _DWORD *v57; // [sp+8h] [bp-14h]
  _DWORD *v58; // [sp+Ch] [bp-10h]
  size_t v59; // [sp+10h] [bp-Ch] BYREF
  _DWORD v60[2]; // [sp+14h] [bp-8h] BYREF

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'I':
      v43 = (__int64 *)(((unsigned int)*a2 + 7) & 0xFFFFFFF8);
      *a2 = (int *)(v43 + 1);
      v4 = (double *)json_integer(*v43);
      if ( v4 )
        return (int)v4;
      goto LABEL_49;
    case 'O':
      return sub_93D28(a1, a2, 1);
    case '[':
      v30 = (_DWORD *)(a1 + 40);
      v4 = (double *)json_array();
      sub_92DB4(a1);
      while ( 2 )
      {
        if ( *(_BYTE *)(a1 + 36) == 93 )
        {
          if ( !*(_DWORD *)(a1 + 76) )
            return (int)v4;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 36) )
          {
            sub_92DB4(a1);
            v31 = *(unsigned __int8 *)(a1 + 36);
            v32 = *(_DWORD *)(a1 + 28);
            v33 = *(_DWORD *)(a1 + 32);
            v34 = *(_DWORD *)(a1 + 36);
            *v30 = *(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 44) = v32;
            *(_DWORD *)(a1 + 48) = v33;
            *(_DWORD *)(a1 + 52) = v34;
            v35 = *(_DWORD *)(a1 + 12);
            v36 = *(_DWORD *)(a1 + 16);
            v37 = *(_DWORD *)(a1 + 20);
            *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 28) = v35;
            *(_DWORD *)(a1 + 32) = v36;
            *(_DWORD *)(a1 + 36) = v37;
            v38 = (_DWORD *)sub_93E04(a1, a2);
            v39 = v38;
            if ( v38 )
            {
              if ( !*(_DWORD *)(a1 + 76) )
                goto LABEL_95;
              if ( v38[1] != -1 )
              {
                v40 = v38 + 1;
                __dmb(0xBu);
                do
                {
                  v41 = __ldrex(v40);
                  v42 = v41 - 1;
                }
                while ( __strex(v42, v40) );
                if ( !v42 )
                {
                  v57 = v38;
                  json_delete(v38);
                  v39 = v57;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                {
LABEL_95:
                  if ( json_array_append_new(v4, v39) )
                  {
                    sub_92D54((int *)a1, "<internal>", 1, "Unable to append to array");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
                }
              }
            }
            else if ( v31 != 42 )
            {
              *(_DWORD *)(a1 + 76) = 1;
            }
            sub_92DB4(a1);
            continue;
          }
          sub_92D54((int *)a1, "<format>", 9, "Unexpected end of format string");
        }
        break;
      }
      if ( !v4 || *((_DWORD *)v4 + 1) == -1 )
        return 0;
      v50 = (unsigned int *)v4 + 1;
      __dmb(0xBu);
      do
      {
        v51 = __ldrex(v50);
        v52 = v51 - 1;
      }
      while ( __strex(v52, v50) );
      goto LABEL_81;
    case 'b':
      v49 = (*a2)++;
      if ( *v49 )
        return json_true(a1);
      else
        return json_false(a1);
    case 'f':
      *a2 = (int *)((((unsigned int)*a2 + 7) & 0xFFFFFFF8) + 8);
      v44 = json_real();
      v4 = v44;
      if ( !v44 )
        goto LABEL_49;
      if ( json_real_set((int)v44) )
      {
        if ( *((_DWORD *)v4 + 1) != -1 )
        {
          v45 = (unsigned int *)v4 + 1;
          __dmb(0xBu);
          do
          {
            v46 = __ldrex(v45);
            v47 = v46 - 1;
          }
          while ( __strex(v47, v45) );
          if ( !v47 )
            json_delete(v4);
        }
        sub_92D54((int *)a1, "<args>", 15, "Invalid floating point value");
        v4 = 0;
        *(_DWORD *)(a1 + 76) = 1;
      }
      return (int)v4;
    case 'i':
      v48 = (*a2)++;
      v4 = (double *)json_integer(*v48);
      if ( !v4 )
      {
LABEL_49:
        sub_92D54((int *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      return (int)v4;
    case 'n':
      return json_null();
    case 'o':
      return sub_93D28(a1, a2, 0);
    case 's':
      sub_92DB4(a1);
      v6 = *(unsigned __int8 *)(a1 + 36);
      v7 = v6 == 42;
      if ( v6 != 42 )
        v7 = v6 == 63;
      v8 = v7;
      if ( v7 )
      {
        v15 = sub_92EF4(a1, (char ***)a2, "string", &v59, v60, v8);
        if ( !v15 )
        {
          if ( v6 == 63 && !*(_DWORD *)(a1 + 76) )
            return json_null();
          return 0;
        }
      }
      else
      {
        v56 = v8;
        v9 = *(_DWORD *)(a1 + 28);
        v10 = *(_DWORD *)(a1 + 32);
        v11 = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 44) = v9;
        *(_DWORD *)(a1 + 48) = v10;
        *(_DWORD *)(a1 + 52) = v11;
        v12 = *(_DWORD *)(a1 + 12);
        v13 = *(_DWORD *)(a1 + 16);
        v14 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 28) = v12;
        *(_DWORD *)(a1 + 32) = v13;
        *(_DWORD *)(a1 + 36) = v14;
        v15 = sub_92EF4(a1, (char ***)a2, "string", &v59, v60, v56);
        if ( !v15 )
          return 0;
      }
      if ( *(_DWORD *)(a1 + 76) )
        return 0;
      if ( v60[0] )
        return jsonp_stringn_nocheck_own(v15, v59);
      else
        return json_stringn_nocheck();
    case '{':
      v4 = (double *)json_object();
      sub_92DB4(a1);
      break;
    default:
      sub_92D54((int *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
      v4 = 0;
      *(_DWORD *)(a1 + 76) = 1;
      return (int)v4;
  }
  while ( 1 )
  {
    v16 = *(unsigned __int8 *)(a1 + 36);
    if ( v16 == 125 )
    {
      if ( *(_DWORD *)(a1 + 76) )
        goto LABEL_85;
      return (int)v4;
    }
    if ( !*(_BYTE *)(a1 + 36) )
    {
      sub_92D54((int *)a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_85;
    }
    if ( v16 != 115 )
      break;
    v17 = (char *)sub_92EF4(a1, (char ***)a2, "object key", &v59, v60, 0);
    sub_92DB4(a1);
    sub_92DB4(a1);
    v18 = *(unsigned __int8 *)(a1 + 36);
    v19 = *(_DWORD *)(a1 + 28);
    v20 = *(_DWORD *)(a1 + 32);
    v21 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 44) = v19;
    *(_DWORD *)(a1 + 48) = v20;
    *(_DWORD *)(a1 + 52) = v21;
    v22 = *(_DWORD *)(a1 + 12);
    v23 = *(_DWORD *)(a1 + 16);
    v24 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 28) = v22;
    *(_DWORD *)(a1 + 32) = v23;
    *(_DWORD *)(a1 + 36) = v24;
    v25 = (_DWORD *)sub_93E04(a1, a2);
    v26 = v25;
    if ( v25 )
    {
      if ( !*(_DWORD *)(a1 + 76) )
        goto LABEL_16;
      if ( v25[1] != -1 )
      {
        v27 = v25 + 1;
        __dmb(0xBu);
        do
        {
          v28 = __ldrex(v27);
          v29 = v28 - 1;
        }
        while ( __strex(v29, v27) );
        if ( !v29 )
        {
          v58 = v25;
          json_delete(v25);
          v26 = v58;
        }
        if ( *(_DWORD *)(a1 + 76) )
        {
          if ( !v60[0] )
            goto LABEL_19;
          goto LABEL_32;
        }
LABEL_16:
        if ( json_object_set_new_nocheck(v4, v17, v26) )
        {
          sub_92D54((int *)a1, "<internal>", 1, "Unable to add key \"%s\"", v17);
          *(_DWORD *)(a1 + 76) = 1;
        }
      }
      if ( !v60[0] )
        goto LABEL_19;
LABEL_32:
      jsonp_free(v17);
      goto LABEL_19;
    }
    if ( v60[0] )
      jsonp_free(v17);
    if ( v18 != 42 )
    {
      sub_92D54((int *)a1, "<args>", 12, "NULL object value");
      *(_DWORD *)(a1 + 76) = 1;
    }
LABEL_19:
    sub_92DB4(a1);
  }
  sub_92D54((int *)a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
LABEL_85:
  if ( v4 && *((_DWORD *)v4 + 1) != -1 )
  {
    v54 = (unsigned int *)v4 + 1;
    __dmb(0xBu);
    do
    {
      v55 = __ldrex(v54);
      v52 = v55 - 1;
    }
    while ( __strex(v52, v54) );
LABEL_81:
    if ( !v52 )
    {
      v53 = v4;
      v4 = 0;
      json_delete(v53);
      return (int)v4;
    }
  }
  return 0;
}
