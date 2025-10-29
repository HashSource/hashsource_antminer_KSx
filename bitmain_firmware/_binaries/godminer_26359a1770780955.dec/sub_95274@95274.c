int __fastcall sub_95274(int a1, int **a2)
{
  int v4; // r6
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
  int v25; // r0
  int v26; // r2
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
  int v38; // r0
  int v39; // r1
  unsigned int *v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // r2
  _DWORD *v43; // r3
  unsigned int *v44; // r3
  unsigned int v45; // r2
  unsigned int v46; // r2
  int *v47; // r3
  int *v48; // r3
  unsigned int *v49; // r3
  unsigned int v50; // r2
  unsigned int v51; // r2
  int v52; // r0
  unsigned int *v53; // r3
  unsigned int v54; // r2
  int v55; // [sp+4h] [bp-18h]
  int v56; // [sp+8h] [bp-14h]
  int v57; // [sp+Ch] [bp-10h]
  size_t v58; // [sp+10h] [bp-Ch] BYREF
  _DWORD v59[2]; // [sp+14h] [bp-8h] BYREF

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'I':
      v43 = (_DWORD *)(((unsigned int)*a2 + 7) & 0xFFFFFFF8);
      *a2 = v43 + 2;
      v4 = json_integer(*v43, v43[1]);
      if ( v4 )
        return v4;
      goto LABEL_49;
    case 'O':
      return sub_95198(a1, a2, 1);
    case '[':
      v30 = (_DWORD *)(a1 + 40);
      v4 = json_array(a1);
      sub_94224(a1);
      while ( 2 )
      {
        if ( *(_BYTE *)(a1 + 36) == 93 )
        {
          if ( !*(_DWORD *)(a1 + 76) )
            return v4;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 36) )
          {
            sub_94224(a1);
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
            v38 = sub_95274(a1, a2);
            v39 = v38;
            if ( v38 )
            {
              if ( !*(_DWORD *)(a1 + 76) )
                goto LABEL_95;
              if ( *(_DWORD *)(v38 + 4) != -1 )
              {
                v40 = (unsigned int *)(v38 + 4);
                __dmb(0xBu);
                do
                {
                  v41 = __ldrex(v40);
                  v42 = v41 - 1;
                }
                while ( __strex(v42, v40) );
                if ( !v42 )
                {
                  v56 = v38;
                  json_delete(v38);
                  v39 = v56;
                }
                if ( !*(_DWORD *)(a1 + 76) )
                {
LABEL_95:
                  if ( json_array_append_new(v4, v39) )
                  {
                    sub_941C4((int *)a1, "<internal>", 1, "Unable to append to array");
                    *(_DWORD *)(a1 + 76) = 1;
                  }
                }
              }
            }
            else if ( v31 != 42 )
            {
              *(_DWORD *)(a1 + 76) = 1;
            }
            sub_94224(a1);
            continue;
          }
          sub_941C4((int *)a1, "<format>", 9, "Unexpected end of format string");
        }
        break;
      }
      if ( !v4 || *(_DWORD *)(v4 + 4) == -1 )
        return 0;
      v49 = (unsigned int *)(v4 + 4);
      __dmb(0xBu);
      do
      {
        v50 = __ldrex(v49);
        v51 = v50 - 1;
      }
      while ( __strex(v51, v49) );
      goto LABEL_81;
    case 'b':
      v48 = (*a2)++;
      if ( *v48 )
        return json_true(a1);
      else
        return json_false(a1);
    case 'f':
      *a2 = (int *)((((unsigned int)*a2 + 7) & 0xFFFFFFF8) + 8);
      v4 = json_real(a1);
      if ( !v4 )
        goto LABEL_49;
      if ( json_real_set() )
      {
        if ( *(_DWORD *)(v4 + 4) != -1 )
        {
          v44 = (unsigned int *)(v4 + 4);
          __dmb(0xBu);
          do
          {
            v45 = __ldrex(v44);
            v46 = v45 - 1;
          }
          while ( __strex(v46, v44) );
          if ( !v46 )
            json_delete(v4);
        }
        sub_941C4((int *)a1, "<args>", 15, "Invalid floating point value");
        v4 = 0;
        *(_DWORD *)(a1 + 76) = 1;
      }
      return v4;
    case 'i':
      v47 = (*a2)++;
      v4 = json_integer(*v47, *v47 >> 31);
      if ( !v4 )
      {
LABEL_49:
        sub_941C4((int *)a1, "<internal>", 1, "Out of memory");
        *(_DWORD *)(a1 + 76) = 1;
      }
      return v4;
    case 'n':
      return json_null();
    case 'o':
      return sub_95198(a1, a2, 0);
    case 's':
      sub_94224(a1);
      v6 = *(unsigned __int8 *)(a1 + 36);
      v7 = v6 == 42;
      if ( v6 != 42 )
        v7 = v6 == 63;
      v8 = v7;
      if ( v7 )
      {
        v15 = sub_94364(a1, (char ***)a2, "string", &v58, v59, v8);
        if ( !v15 )
        {
          if ( v6 == 63 && !*(_DWORD *)(a1 + 76) )
            return json_null();
          return 0;
        }
      }
      else
      {
        v55 = v8;
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
        v15 = sub_94364(a1, (char ***)a2, "string", &v58, v59, v55);
        if ( !v15 )
          return 0;
      }
      if ( *(_DWORD *)(a1 + 76) )
        return 0;
      if ( v59[0] )
        return jsonp_stringn_nocheck_own(v15, v58);
      else
        return json_stringn_nocheck();
    case '{':
      v4 = json_object(a1, a2, *(unsigned __int8 *)(a1 + 36), *(unsigned __int8 *)(a1 + 36) - 73);
      sub_94224(a1);
      break;
    default:
      sub_941C4((int *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
      v4 = 0;
      *(_DWORD *)(a1 + 76) = 1;
      return v4;
  }
  while ( 1 )
  {
    v16 = *(unsigned __int8 *)(a1 + 36);
    if ( v16 == 125 )
    {
      if ( *(_DWORD *)(a1 + 76) )
        goto LABEL_85;
      return v4;
    }
    if ( !*(_BYTE *)(a1 + 36) )
    {
      sub_941C4((int *)a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_85;
    }
    if ( v16 != 115 )
      break;
    v17 = (char *)sub_94364(a1, (char ***)a2, "object key", &v58, v59, 0);
    sub_94224(a1);
    sub_94224(a1);
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
    v25 = sub_95274(a1, a2);
    v26 = v25;
    if ( v25 )
    {
      if ( !*(_DWORD *)(a1 + 76) )
        goto LABEL_16;
      if ( *(_DWORD *)(v25 + 4) != -1 )
      {
        v27 = (unsigned int *)(v25 + 4);
        __dmb(0xBu);
        do
        {
          v28 = __ldrex(v27);
          v29 = v28 - 1;
        }
        while ( __strex(v29, v27) );
        if ( !v29 )
        {
          v57 = v25;
          json_delete(v25);
          v26 = v57;
        }
        if ( *(_DWORD *)(a1 + 76) )
        {
          if ( !v59[0] )
            goto LABEL_19;
          goto LABEL_32;
        }
LABEL_16:
        if ( json_object_set_new_nocheck(v4, v17, v26) )
        {
          sub_941C4((int *)a1, "<internal>", 1, "Unable to add key \"%s\"", v17);
          *(_DWORD *)(a1 + 76) = 1;
        }
      }
      if ( !v59[0] )
        goto LABEL_19;
LABEL_32:
      jsonp_free(v17);
      goto LABEL_19;
    }
    if ( v59[0] )
      jsonp_free(v17);
    if ( v18 != 42 )
    {
      sub_941C4((int *)a1, "<args>", 12, "NULL object value");
      *(_DWORD *)(a1 + 76) = 1;
    }
LABEL_19:
    sub_94224(a1);
  }
  sub_941C4((int *)a1, "<format>", 9, "Expected format 's', got '%c'", *(unsigned __int8 *)(a1 + 36));
LABEL_85:
  if ( v4 && *(_DWORD *)(v4 + 4) != -1 )
  {
    v53 = (unsigned int *)(v4 + 4);
    __dmb(0xBu);
    do
    {
      v54 = __ldrex(v53);
      v51 = v54 - 1;
    }
    while ( __strex(v51, v53) );
LABEL_81:
    if ( !v51 )
    {
      v52 = v4;
      v4 = 0;
      json_delete(v52);
      return v4;
    }
  }
  return 0;
}
