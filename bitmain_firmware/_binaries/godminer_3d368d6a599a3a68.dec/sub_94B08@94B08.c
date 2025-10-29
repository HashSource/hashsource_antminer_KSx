int __fastcall sub_94B08(int a1, _DWORD *a2, _QWORD ***a3)
{
  __int64 v3; // d0
  int v7; // r6
  int v8; // r8
  bool v9; // zf
  int v10; // r9
  char **v11; // r3
  char *v12; // r8
  int v13; // r0
  bool v14; // zf
  int v15; // r3
  _QWORD **v16; // r3
  _QWORD *v17; // r4
  int v18; // r2
  _QWORD **v19; // r3
  _QWORD *v20; // r4
  int v21; // r3
  unsigned int *v22; // r3
  unsigned int v23; // r2
  _DWORD **v24; // r3
  _DWORD *v25; // r3
  int v26; // r6
  int v27; // r8
  bool v28; // zf
  bool v29; // zf
  int v30; // r3
  int v31; // r2
  _DWORD **v32; // r3
  _QWORD **v33; // r3
  _QWORD *v34; // r4
  _DWORD **v35; // r3
  _DWORD *v36; // r4
  _DWORD **v38; // r3
  _DWORD **v39; // r3
  _DWORD *v40; // r8
  _DWORD *v41; // r12
  _DWORD *v42; // lr
  _DWORD *v43; // r4
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r0
  int v51; // r0
  char *v52; // r7
  int appended; // r8
  int v54; // r9
  int v55; // r0
  int v56; // r0
  int v57; // r0
  size_t v58; // r0
  _DWORD **v59; // r3
  _DWORD *v60; // r7
  const char *v61; // r0
  int v62; // r0
  char *v63; // r3
  char *v64; // r12
  int v65; // [sp+0h] [bp-30h]
  _BYTE v66[12]; // [sp+8h] [bp-28h] BYREF
  int v67[7]; // [sp+14h] [bp-1Ch] BYREF

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_104;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v63 = "Expected real or integer, got %s";
        v64 = (&off_273CA8)[*a2];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v16 = (*a3)++;
      v17 = *v16;
      json_number_value(a2);
      *v17 = v3;
      return v7;
    case 'I':
      if ( !a2 )
        goto LABEL_104;
      v18 = *a2;
      if ( *a2 != 3 )
        goto LABEL_157;
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v19 = (*a3)++;
      v20 = *v19;
      *v20 = json_integer_value(a2);
      return v7;
    case 'O':
      v21 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_90;
      if ( v21 )
        return 0;
      if ( a2[1] == -1 )
      {
        v38 = (_DWORD **)(*a3)++;
        goto LABEL_92;
      }
      v22 = a2 + 1;
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v24 = (_DWORD **)(*a3)++;
        v25 = *v24;
        goto LABEL_93;
      }
      return 0;
    case '[':
      if ( a2 && *a2 != 1 )
      {
        v63 = "Expected array, got %s";
        v64 = (&off_273CA8)[*a2];
LABEL_158:
        v7 = -1;
        sub_94634((int *)a1, "<validation>", 10, v63, v64);
      }
      else
      {
        sub_94694(a1);
        v26 = *(unsigned __int8 *)(a1 + 36);
        if ( v26 == 93 )
        {
          v27 = 0;
LABEL_137:
          if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
            return 0;
LABEL_109:
          if ( a2 && json_array_size(a2) != v27 )
          {
            v7 = -1;
            v50 = json_array_size(a2);
            sub_94634((int *)a1, "<validation>", 7, "%li array item(s) left unpacked", v50 - v27);
            return v7;
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 36) )
        {
LABEL_132:
          sub_94634((int *)a1, "<format>", 9, "Unexpected end of format string");
          return -1;
        }
        v28 = v26 == 33;
        if ( v26 != 33 )
          v28 = v26 == 42;
        v27 = v28;
        if ( v28 )
        {
          v27 = 0;
LABEL_68:
          if ( v26 == 33 )
          {
            sub_94694(a1);
            v30 = *(unsigned __int8 *)(a1 + 36);
            if ( v30 == 93 )
              goto LABEL_109;
          }
          else
          {
            sub_94694(a1);
            v30 = *(unsigned __int8 *)(a1 + 36);
            if ( v30 == 93 )
              return 0;
            v26 = 42;
          }
          sub_94634((int *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v26, v30);
          return -1;
        }
        while ( strchr("{[siIbfFOon", v26) )
        {
          if ( a2 && !json_array_get(a2, v27) )
          {
            v7 = -1;
            sub_94634((int *)a1, "<validation>", 17, "Array index %lu out of range", v27);
            return v7;
          }
          ++v27;
          if ( sub_94B08(a1) )
            return -1;
          sub_94694(a1);
          v26 = *(unsigned __int8 *)(a1 + 36);
          if ( v26 == 93 )
            goto LABEL_137;
          if ( !*(_BYTE *)(a1 + 36) )
            goto LABEL_132;
          v29 = v26 == 42;
          if ( v26 != 42 )
            v29 = v26 == 33;
          if ( v29 )
            goto LABEL_68;
        }
        v65 = v26;
LABEL_102:
        v7 = -1;
        sub_94634((int *)a1, "<format>", 9, "Unexpected format character '%c'", v65);
      }
      return v7;
    case 'b':
      if ( !a2 )
        goto LABEL_104;
      v31 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v63 = "Expected true or false, got %s";
        v64 = (&off_273CA8)[v31];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v32 = (_DWORD **)(*a3)++;
      **v32 = v31 == 5;
      return v7;
    case 'f':
      if ( !a2 )
        goto LABEL_104;
      if ( *a2 != 4 )
      {
        v63 = "Expected real, got %s";
        v64 = (&off_273CA8)[*a2];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v33 = (_QWORD **)MEMORY[4];
      *a3 = (_QWORD **)(MEMORY[4] + 4);
      v34 = *v33;
      json_real_value(a2);
      *v34 = v3;
      return v7;
    case 'i':
      if ( !a2 )
      {
LABEL_104:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v18 = *a2;
      if ( *a2 != 3 )
      {
LABEL_157:
        v63 = "Expected integer, got %s";
        v64 = (&off_273CA8)[v18];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v35 = (_DWORD **)(*a3)++;
      v36 = *v35;
      *v36 = json_integer_value(a2);
      return v7;
    case 'n':
      if ( !a2 || *a2 == 7 )
        return 0;
      v63 = "Expected null, got %s";
      v64 = (&off_273CA8)[*a2];
      goto LABEL_158;
    case 'o':
      v21 = *(_DWORD *)(a1 + 60) & 1;
LABEL_90:
      if ( !v21 )
      {
        v38 = (_DWORD **)(*a3)++;
        if ( a2 )
        {
LABEL_92:
          v25 = *v38;
LABEL_93:
          *v25 = a2;
        }
      }
      return 0;
    case 's':
      if ( a2 && *a2 != 2 )
      {
        v63 = "Expected string, got %s";
        v64 = (&off_273CA8)[*a2];
        goto LABEL_158;
      }
      v7 = *(_DWORD *)(a1 + 60) & 1;
      if ( v7 )
        return 0;
      v39 = (_DWORD **)(*a3)++;
      v40 = *v39;
      if ( *v39 )
      {
        sub_94694(a1);
        if ( *(_BYTE *)(a1 + 36) == 37 )
        {
          v59 = (_DWORD **)(*a3)++;
          v60 = *v59;
          if ( *v59 )
          {
            if ( !a2 )
              return 0;
            *v40 = json_string_value(a2);
            *v60 = json_string_length(a2);
          }
          else
          {
            sub_94634((int *)a1, "<args>", 12, "NULL string length argument");
            return -1;
          }
        }
        else
        {
          v41 = (_DWORD *)(a1 + 24);
          v42 = (_DWORD *)(a1 + 40);
          v43 = (_DWORD *)(a1 + 8);
          v44 = v41[1];
          v45 = v41[2];
          v46 = v41[3];
          *v42 = *v41;
          v42[1] = v44;
          v42[2] = v45;
          v42[3] = v46;
          v47 = v43[1];
          v48 = v43[2];
          v49 = v43[3];
          *v41 = *v43;
          v41[1] = v47;
          v41[2] = v48;
          v41[3] = v49;
          if ( !a2 )
            return 0;
          *v40 = json_string_value(a2);
        }
      }
      else
      {
        v7 = -1;
        sub_94634((int *)a1, "<args>", 12, "NULL string argument");
      }
      return v7;
    case '{':
      v7 = hashtable_init(v67);
      if ( v7 )
      {
        sub_94634((int *)a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      if ( a2 && *a2 )
      {
        v7 = -1;
        sub_94634((int *)a1, "<validation>", 10, "Expected object, got %s", (&off_273CA8)[*a2]);
        goto LABEL_30;
      }
      sub_94694(a1);
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
              sub_94694(a1);
              v15 = *(unsigned __int8 *)(a1 + 36);
              if ( v15 == 125 )
                goto LABEL_115;
            }
            else
            {
              sub_94694(a1);
              v15 = *(unsigned __int8 *)(a1 + 36);
              if ( v15 == 125 )
                goto LABEL_30;
              v8 = 42;
            }
            sub_94634((int *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v8, v15);
            v7 = -1;
          }
          else
          {
            while ( 1 )
            {
              if ( v8 != 115 )
              {
                v7 = -1;
                sub_94634((int *)a1, "<format>", 9, "Expected format 's', got '%c'", v8);
                goto LABEL_30;
              }
              v11 = (char **)(*a3)++;
              v12 = *v11;
              if ( !*v11 )
              {
                v7 = -1;
                sub_94634((int *)a1, "<args>", 12, "NULL object key");
                goto LABEL_30;
              }
              sub_94694(a1);
              if ( *(_BYTE *)(a1 + 36) == 63 )
              {
                sub_94694(a1);
                v10 = 1;
                if ( a2 )
                  json_object_get(a2, v12);
              }
              else if ( a2 && !json_object_get(a2, v12) )
              {
                v7 = -1;
                sub_94634((int *)a1, "<validation>", 16, "Object item not found: %s", v12);
                goto LABEL_30;
              }
              if ( sub_94B08(a1) )
              {
                v7 = -1;
                goto LABEL_30;
              }
              v13 = json_null();
              hashtable_set(v67, v12, v13);
              sub_94694(a1);
              v8 = *(unsigned __int8 *)(a1 + 36);
              if ( v8 == 125 )
                break;
              if ( !*(_BYTE *)(a1 + 36) )
                goto LABEL_140;
              v14 = v8 == 42;
              if ( v8 != 42 )
                v14 = v8 == 33;
              if ( v14 )
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
          sub_94634((int *)a1, "<format>", 9, "Unexpected end of format string");
          v7 = -1;
        }
LABEL_30:
        hashtable_close((int)v67);
        return v7;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
        goto LABEL_30;
LABEL_155:
      v62 = json_object_size(a2);
      if ( v62 == v67[0] )
        goto LABEL_30;
LABEL_117:
      v51 = json_object_iter(a2);
      v52 = (char *)json_object_iter_key(v51);
      if ( !v52 )
        goto LABEL_30;
      appended = 1;
      v54 = 0;
      break;
    default:
      v65 = *(unsigned __int8 *)(a1 + 36);
      goto LABEL_102;
  }
  while ( 1 )
  {
    v57 = json_object_key_to_iter(v52);
    if ( !json_object_iter_value(v57) )
    {
LABEL_148:
      if ( v54 )
      {
        if ( appended )
          v61 = "<unknown>";
        else
          v61 = (const char *)strbuffer_value(v66);
        sub_94634((int *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v54, v61);
        strbuffer_close(v66);
        v7 = -1;
      }
      goto LABEL_30;
    }
    if ( !hashtable_get((int)v67, v52) )
    {
      ++v54;
      if ( appended == 1 )
      {
        appended = strbuffer_init(v66);
LABEL_126:
        if ( !appended )
        {
          v58 = strlen(v52);
          appended = strbuffer_append_bytes((int)v66, v52, v58);
        }
        goto LABEL_120;
      }
      if ( !appended )
      {
        appended = strbuffer_append_bytes((int)v66, ", ", 2u);
        goto LABEL_126;
      }
    }
LABEL_120:
    v55 = json_object_key_to_iter(v52);
    v56 = json_object_iter_next(a2, v55);
    v52 = (char *)json_object_iter_key(v56);
    if ( !v52 )
      goto LABEL_148;
  }
}
