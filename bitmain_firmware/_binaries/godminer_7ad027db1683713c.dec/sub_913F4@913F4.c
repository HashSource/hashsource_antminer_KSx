int __fastcall sub_913F4(int a1, _DWORD *a2, _QWORD ***a3)
{
  __int64 v3; // d0
  int v7; // r6
  int v8; // r8
  bool v9; // zf
  int v10; // r9
  char **v11; // r3
  char *v12; // r8
  _DWORD *v13; // r1
  void *v14; // r0
  bool v15; // zf
  int v16; // r3
  _QWORD **v17; // r3
  _QWORD *v18; // r4
  int v19; // r2
  _QWORD **v20; // r3
  _QWORD *v21; // r4
  int v22; // r3
  unsigned int *v23; // r3
  unsigned int v24; // r2
  _DWORD **v25; // r3
  _DWORD *v26; // r3
  int v27; // r6
  unsigned int v28; // r8
  bool v29; // zf
  _DWORD *v30; // r1
  bool v31; // zf
  int v32; // r3
  int v33; // r2
  _DWORD **v34; // r3
  _QWORD **v35; // r3
  _QWORD *v36; // r4
  _DWORD **v37; // r3
  _DWORD *v38; // r4
  _DWORD **v40; // r3
  _DWORD **v41; // r3
  _DWORD *v42; // r8
  _DWORD *v43; // r12
  _DWORD *v44; // lr
  _DWORD *v45; // r4
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r3
  _DWORD *v52; // r0
  int v53; // r0
  char *v54; // r7
  int appended; // r8
  int v56; // r9
  int v57; // r0
  int v58; // r0
  int v59; // r0
  size_t v60; // r0
  _DWORD **v61; // r3
  _DWORD *v62; // r7
  const char *v63; // r0
  _DWORD *v64; // r0
  char *v65; // r3
  char *v66; // r12
  int v67; // [sp+0h] [bp-30h]
  const void *v68[3]; // [sp+8h] [bp-28h] BYREF
  unsigned int v69[7]; // [sp+14h] [bp-1Ch] BYREF

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_104;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v65 = "Expected real or integer, got %s";
        v66 = (&off_260B24)[*a2];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v17 = (*a3)++;
      v18 = *v17;
      json_number_value((int)a2);
      *v18 = v3;
      return v7;
    case 'I':
      if ( !a2 )
        goto LABEL_104;
      v19 = *a2;
      if ( *a2 != 3 )
        goto LABEL_157;
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v20 = (*a3)++;
      v21 = *v20;
      *v21 = json_integer_value((int)a2);
      return v7;
    case 'O':
      v22 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_90;
      if ( v22 )
        return 0;
      if ( a2[1] == -1 )
      {
        v40 = (_DWORD **)(*a3)++;
        goto LABEL_92;
      }
      v23 = a2 + 1;
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v25 = (_DWORD **)(*a3)++;
        v26 = *v25;
        goto LABEL_93;
      }
      return 0;
    case '[':
      if ( a2 && *a2 != 1 )
      {
        v65 = "Expected array, got %s";
        v66 = (&off_260B24)[*a2];
LABEL_158:
        v7 = -1;
        sub_90F20((int *)a1, "<validation>", 10, v65, v66);
      }
      else
      {
        sub_90F80(a1);
        v27 = *(unsigned __int8 *)(a1 + 36);
        if ( v27 == 93 )
        {
          v28 = 0;
LABEL_137:
          if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
            return 0;
LABEL_109:
          if ( a2 && json_array_size(a2) != (_DWORD *)v28 )
          {
            v7 = -1;
            v52 = json_array_size(a2);
            sub_90F20((int *)a1, "<validation>", 7, "%li array item(s) left unpacked", (char *)v52 - v28);
            return v7;
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 36) )
        {
LABEL_132:
          sub_90F20((int *)a1, "<format>", 9, "Unexpected end of format string");
          return -1;
        }
        v29 = v27 == 33;
        if ( v27 != 33 )
          v29 = v27 == 42;
        v28 = v29;
        if ( v29 )
        {
          v28 = 0;
LABEL_68:
          if ( v27 == 33 )
          {
            sub_90F80(a1);
            v32 = *(unsigned __int8 *)(a1 + 36);
            if ( v32 == 93 )
              goto LABEL_109;
          }
          else
          {
            sub_90F80(a1);
            v32 = *(unsigned __int8 *)(a1 + 36);
            if ( v32 == 93 )
              return 0;
            v27 = 42;
          }
          sub_90F20((int *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v27, v32);
          return -1;
        }
        while ( strchr("{[siIbfFOon", v27) )
        {
          if ( a2 )
          {
            v30 = json_array_get(a2, v28);
            if ( !v30 )
            {
              v7 = -1;
              sub_90F20((int *)a1, "<validation>", 17, "Array index %lu out of range", v28);
              return v7;
            }
          }
          else
          {
            v30 = 0;
          }
          ++v28;
          if ( sub_913F4(a1, v30, a3) )
            return -1;
          sub_90F80(a1);
          v27 = *(unsigned __int8 *)(a1 + 36);
          if ( v27 == 93 )
            goto LABEL_137;
          if ( !*(_BYTE *)(a1 + 36) )
            goto LABEL_132;
          v31 = v27 == 42;
          if ( v27 != 42 )
            v31 = v27 == 33;
          if ( v31 )
            goto LABEL_68;
        }
        v67 = v27;
LABEL_102:
        v7 = -1;
        sub_90F20((int *)a1, "<format>", 9, "Unexpected format character '%c'", v67);
      }
      return v7;
    case 'b':
      if ( !a2 )
        goto LABEL_104;
      v33 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v65 = "Expected true or false, got %s";
        v66 = (&off_260B24)[v33];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v34 = (_DWORD **)(*a3)++;
      **v34 = v33 == 5;
      return v7;
    case 'f':
      if ( !a2 )
        goto LABEL_104;
      if ( *a2 != 4 )
      {
        v65 = "Expected real, got %s";
        v66 = (&off_260B24)[*a2];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v35 = (_QWORD **)MEMORY[4];
      *a3 = (_QWORD **)(MEMORY[4] + 4);
      v36 = *v35;
      json_real_value();
      *v36 = v3;
      return v7;
    case 'i':
      if ( !a2 )
      {
LABEL_104:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v19 = *a2;
      if ( *a2 != 3 )
      {
LABEL_157:
        v65 = "Expected integer, got %s";
        v66 = (&off_260B24)[v19];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v37 = (_DWORD **)(*a3)++;
      v38 = *v37;
      *v38 = json_integer_value((int)a2);
      return v7;
    case 'n':
      if ( !a2 || *a2 == 7 )
        return 0;
      v65 = "Expected null, got %s";
      v66 = (&off_260B24)[*a2];
      goto LABEL_158;
    case 'o':
      v22 = *(_DWORD *)(a1 + 60) & 1;
LABEL_90:
      if ( !v22 )
      {
        v40 = (_DWORD **)(*a3)++;
        if ( a2 )
        {
LABEL_92:
          v26 = *v40;
LABEL_93:
          *v26 = a2;
        }
      }
      return 0;
    case 's':
      if ( a2 && *a2 != 2 )
      {
        v65 = "Expected string, got %s";
        v66 = (&off_260B24)[*a2];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v41 = (_DWORD **)(*a3)++;
      v42 = *v41;
      if ( *v41 )
      {
        sub_90F80(a1);
        if ( *(_BYTE *)(a1 + 36) == 37 )
        {
          v61 = (_DWORD **)(*a3)++;
          v62 = *v61;
          if ( *v61 )
          {
            if ( !a2 )
              return 0;
            *v42 = json_string_value(a2);
            *v62 = json_string_length(a2);
          }
          else
          {
            sub_90F20((int *)a1, "<args>", 12, "NULL string length argument");
            return -1;
          }
        }
        else
        {
          v43 = (_DWORD *)(a1 + 24);
          v44 = (_DWORD *)(a1 + 40);
          v45 = (_DWORD *)(a1 + 8);
          v46 = v43[1];
          v47 = v43[2];
          v48 = v43[3];
          *v44 = *v43;
          v44[1] = v46;
          v44[2] = v47;
          v44[3] = v48;
          v49 = v45[1];
          v50 = v45[2];
          v51 = v45[3];
          *v43 = *v45;
          v43[1] = v49;
          v43[2] = v50;
          v43[3] = v51;
          if ( !a2 )
            return 0;
          *v42 = json_string_value(a2);
        }
      }
      else
      {
        v7 = -1;
        sub_90F20((int *)a1, "<args>", 12, "NULL string argument");
      }
      return v7;
    case '{':
      v7 = hashtable_init(v69);
      if ( v7 )
      {
        sub_90F20((int *)a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      if ( a2 && *a2 )
      {
        v7 = -1;
        sub_90F20((int *)a1, "<validation>", 10, "Expected object, got %s", (&off_260B24)[*a2]);
        goto LABEL_30;
      }
      sub_90F80(a1);
      v8 = *(unsigned __int8 *)(a1 + 36);
      if ( v8 != 125 )
      {
        if ( *(_BYTE *)(a1 + 36) )
        {
          v9 = v8 == 33;
          if ( v8 != 33 )
            v9 = v8 == 42;
          v10 = v9;
          if ( v9 )
          {
            v10 = 0;
LABEL_25:
            if ( v8 == 33 )
            {
              sub_90F80(a1);
              v16 = *(unsigned __int8 *)(a1 + 36);
              if ( v16 == 125 )
                goto LABEL_115;
            }
            else
            {
              sub_90F80(a1);
              v16 = *(unsigned __int8 *)(a1 + 36);
              if ( v16 == 125 )
                goto LABEL_30;
              v8 = 42;
            }
            sub_90F20((int *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v8, v16);
            v7 = -1;
          }
          else
          {
            while ( 1 )
            {
              if ( v8 != 115 )
              {
                v7 = -1;
                sub_90F20((int *)a1, "<format>", 9, "Expected format 's', got '%c'", v8);
                goto LABEL_30;
              }
              v11 = (char **)(*a3)++;
              v12 = *v11;
              if ( !*v11 )
              {
                v7 = -1;
                sub_90F20((int *)a1, "<args>", 12, "NULL object key");
                goto LABEL_30;
              }
              sub_90F80(a1);
              if ( *(_BYTE *)(a1 + 36) == 63 )
              {
                sub_90F80(a1);
                if ( a2 )
                {
                  v10 = 1;
                  v13 = (_DWORD *)json_object_get(a2, v12);
                }
                else
                {
                  v13 = 0;
                  v10 = 1;
                }
              }
              else if ( a2 )
              {
                v13 = (_DWORD *)json_object_get(a2, v12);
                if ( !v13 )
                {
                  v7 = -1;
                  sub_90F20((int *)a1, "<validation>", 16, "Object item not found: %s", v12);
                  goto LABEL_30;
                }
              }
              else
              {
                v13 = 0;
              }
              if ( sub_913F4(a1, v13, a3) )
              {
                v7 = -1;
                goto LABEL_30;
              }
              v14 = json_null();
              hashtable_set(v69, v12, (unsigned int)v14);
              sub_90F80(a1);
              v8 = *(unsigned __int8 *)(a1 + 36);
              if ( v8 == 125 )
                break;
              if ( !*(_BYTE *)(a1 + 36) )
                goto LABEL_140;
              v15 = v8 == 42;
              if ( v8 != 42 )
                v15 = v8 == 33;
              if ( v15 )
                goto LABEL_25;
            }
            if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
              goto LABEL_30;
LABEL_115:
            if ( a2 )
            {
              if ( v10 )
                goto LABEL_117;
              goto LABEL_155;
            }
          }
        }
        else
        {
LABEL_140:
          sub_90F20((int *)a1, "<format>", 9, "Unexpected end of format string");
          v7 = -1;
        }
LABEL_30:
        hashtable_close((int)v69);
        return v7;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
        goto LABEL_30;
LABEL_155:
      v64 = json_object_size(a2);
      if ( v64 == (_DWORD *)v69[0] )
        goto LABEL_30;
LABEL_117:
      v53 = json_object_iter(a2);
      v54 = (char *)json_object_iter_key(v53);
      if ( !v54 )
        goto LABEL_30;
      appended = 1;
      v56 = 0;
      break;
    default:
      v67 = *(unsigned __int8 *)(a1 + 36);
      goto LABEL_102;
  }
  while ( 1 )
  {
    v59 = json_object_key_to_iter((int)v54);
    if ( !json_object_iter_value(v59) )
    {
LABEL_148:
      if ( v56 )
      {
        if ( appended )
          v63 = "<unknown>";
        else
          v63 = (const char *)strbuffer_value((int)v68);
        sub_90F20((int *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v56, v63);
        strbuffer_close((int)v68);
        v7 = -1;
      }
      goto LABEL_30;
    }
    if ( !hashtable_get((int)v69, v54) )
    {
      ++v56;
      if ( appended == 1 )
      {
        appended = strbuffer_init(v68);
LABEL_126:
        if ( !appended )
        {
          v60 = strlen(v54);
          appended = strbuffer_append_bytes(v68, v54, v60);
        }
        goto LABEL_120;
      }
      if ( !appended )
      {
        appended = strbuffer_append_bytes(v68, ", ", 2u);
        goto LABEL_126;
      }
    }
LABEL_120:
    v57 = json_object_key_to_iter((int)v54);
    v58 = json_object_iter_next(a2, v57);
    v54 = (char *)json_object_iter_key(v58);
    if ( !v54 )
      goto LABEL_148;
  }
}
