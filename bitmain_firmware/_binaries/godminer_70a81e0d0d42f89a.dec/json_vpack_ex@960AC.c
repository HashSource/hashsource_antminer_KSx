int __fastcall json_vpack_ex(char *a1, int a2, _BYTE *a3, int *a4)
{
  int v8; // r4
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int *v13; // [sp+Ch] [bp-58h] BYREF
  int v14[2]; // [sp+10h] [bp-54h] BYREF
  __int64 v15; // [sp+18h] [bp-4Ch]
  __int64 v16; // [sp+20h] [bp-44h]
  __int64 v17; // [sp+28h] [bp-3Ch]
  __int64 v18; // [sp+30h] [bp-34h]
  __int64 v19; // [sp+38h] [bp-2Ch]
  __int64 v20; // [sp+40h] [bp-24h]
  char *v21; // [sp+48h] [bp-1Ch]
  int v22; // [sp+4Ch] [bp-18h]
  int v23; // [sp+50h] [bp-14h]
  int v24; // [sp+54h] [bp-10h]
  int v25; // [sp+58h] [bp-Ch]
  int v26; // [sp+5Ch] [bp-8h]

  if ( a3 && *a3 )
  {
    jsonp_error_init(a1, 0);
    v23 = 1;
    v17 = 0;
    v18 = 0;
    v14[0] = (int)a3;
    v15 = 0;
    v16 = 0;
    v14[1] = (int)a3;
    v19 = 0;
    v20 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v21 = a1;
    v22 = a2;
    sub_9491C((int)v14);
    v13 = a4;
    v8 = sub_9596C((int)v14, &v13);
    if ( v8 )
    {
      sub_9491C((int)v14);
      if ( BYTE4(v18) )
      {
        if ( *(_DWORD *)(v8 + 4) != -1 )
        {
          v10 = (unsigned int *)(v8 + 4);
          __dmb(0xBu);
          do
          {
            v11 = __ldrex(v10);
            v12 = v11 - 1;
          }
          while ( __strex(v12, v10) );
          if ( !v12 )
            json_delete(v8);
        }
        sub_948BC(v14, "<format>", 9, "Garbage after format string");
        return 0;
      }
    }
    return v8;
  }
  else
  {
    jsonp_error_init(a1, "<format>");
    jsonp_error_set((int)a1, -1, -1, 0, 4, "NULL or empty format string");
    return 0;
  }
}
