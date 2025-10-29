int __fastcall sub_9375C(int a1, int a2, int a3)
{
  unsigned int v3; // r3
  int v6; // r3
  int v7; // r6
  int v10; // r7
  int v11; // r9
  int v12; // r0
  int v13; // r3
  const void *v14; // r7
  size_t v15; // r2
  int v16; // r2
  int v17; // r3
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v21; // r3
  int v22; // r3
  int v23; // r1
  unsigned int *v24; // r3
  unsigned int v25; // r2
  int v26; // r0

  v3 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v3;
  if ( v3 > 0x800 )
  {
    v7 = 0;
    sub_92B24(a3, (_DWORD *)a1, 2, "maximum parsing depth reached");
    return v7;
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 == 257 )
  {
    v7 = json_integer(*(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 68));
    goto LABEL_9;
  }
  if ( v6 <= 257 )
  {
    if ( v6 == 91 )
    {
      v7 = json_array(a1);
      if ( !v7 )
        return 0;
      sub_92ED4((_DWORD *)a1, a3);
      v21 = *(_DWORD *)(a1 + 60);
      if ( v21 == 93 )
        goto LABEL_10;
      if ( v21 )
      {
        while ( 1 )
        {
          v23 = sub_9375C(a1, a2, a3);
          if ( !v23 || json_array_append_new(v7, v23) )
            break;
          sub_92ED4((_DWORD *)a1, a3);
          v22 = *(_DWORD *)(a1 + 60);
          if ( v22 != 44 )
          {
            if ( v22 == 93 )
              goto LABEL_10;
            goto LABEL_62;
          }
          sub_92ED4((_DWORD *)a1, a3);
          if ( !*(_DWORD *)(a1 + 60) )
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        sub_92B24(a3, (_DWORD *)a1, 8, "']' expected");
      }
      if ( *(_DWORD *)(v7 + 4) == -1 )
        return 0;
      v24 = (unsigned int *)(v7 + 4);
      __dmb(0xBu);
      do
      {
        v25 = __ldrex(v24);
        v20 = v25 - 1;
      }
      while ( __strex(v20, v24) );
    }
    else
    {
      if ( v6 <= 91 )
      {
        if ( v6 == -1 )
        {
          v7 = 0;
          sub_92B24(a3, (_DWORD *)a1, 8, "invalid token");
          return v7;
        }
        goto LABEL_57;
      }
      if ( v6 != 123 )
      {
        if ( v6 != 256 )
          goto LABEL_57;
        v10 = *(_DWORD *)(a1 + 64);
        v11 = *(_DWORD *)(a1 + 68);
        if ( (a2 & 0x10) == 0 && memchr(*(const void **)(a1 + 64), 0, *(_DWORD *)(a1 + 68)) )
        {
          v7 = 0;
          sub_92B24(a3, (_DWORD *)a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
          return v7;
        }
        v12 = jsonp_stringn_nocheck_own(v10, v11);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        v7 = v12;
        goto LABEL_9;
      }
      v7 = json_object(a1, a2, 257, 123);
      if ( !v7 )
        return 0;
      sub_92ED4((_DWORD *)a1, a3);
      v13 = *(_DWORD *)(a1 + 60);
      if ( v13 == 125 )
        goto LABEL_10;
      if ( v13 == 256 )
      {
        v14 = *(const void **)(a1 + 64);
        v15 = *(_DWORD *)(a1 + 68);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        if ( !v14 )
          return 0;
        while ( 1 )
        {
          if ( memchr(v14, 0, v15) )
          {
            jsonp_free(v14);
            sub_92B24(a3, (_DWORD *)a1, 13, "NUL byte in object key not supported");
            goto LABEL_36;
          }
          if ( (a2 & 1) != 0 && json_object_get(v7, v14) )
          {
            jsonp_free(v14);
            sub_92B24(a3, (_DWORD *)a1, 14, "duplicate object key");
            goto LABEL_36;
          }
          sub_92ED4((_DWORD *)a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 58 )
          {
            jsonp_free(v14);
            sub_92B24(a3, (_DWORD *)a1, 8, "':' expected");
            goto LABEL_36;
          }
          sub_92ED4((_DWORD *)a1, a3);
          v16 = sub_9375C(a1, a2, a3);
          if ( !v16 || json_object_set_new_nocheck(v7, v14, v16) )
          {
            jsonp_free(v14);
            goto LABEL_36;
          }
          jsonp_free(v14);
          sub_92ED4((_DWORD *)a1, a3);
          v17 = *(_DWORD *)(a1 + 60);
          if ( v17 != 44 )
            break;
          sub_92ED4((_DWORD *)a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 256 )
            goto LABEL_63;
          v14 = *(const void **)(a1 + 64);
          v15 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          if ( !v14 )
            return 0;
        }
        if ( v17 == 125 )
          goto LABEL_10;
        sub_92B24(a3, (_DWORD *)a1, 8, "'}' expected");
      }
      else
      {
LABEL_63:
        sub_92B24(a3, (_DWORD *)a1, 8, "string or '}' expected");
      }
LABEL_36:
      if ( *(_DWORD *)(v7 + 4) == -1 )
        return 0;
      v18 = (unsigned int *)(v7 + 4);
      __dmb(0xBu);
      do
      {
        v19 = __ldrex(v18);
        v20 = v19 - 1;
      }
      while ( __strex(v20, v18) );
    }
    if ( !v20 )
    {
      v26 = v7;
      v7 = 0;
      json_delete(v26);
      return v7;
    }
    return 0;
  }
  if ( v6 == 259 )
  {
    v7 = json_true(a1);
  }
  else if ( v6 < 259 )
  {
    v7 = json_real(a1);
  }
  else
  {
    if ( v6 != 260 )
    {
      if ( v6 == 261 )
      {
        v7 = json_null();
        goto LABEL_9;
      }
LABEL_57:
      v7 = 0;
      sub_92B24(a3, (_DWORD *)a1, 8, "unexpected token");
      return v7;
    }
    v7 = json_false(a1);
  }
LABEL_9:
  if ( v7 )
  {
LABEL_10:
    --*(_DWORD *)(a1 + 56);
    return v7;
  }
  return 0;
}
