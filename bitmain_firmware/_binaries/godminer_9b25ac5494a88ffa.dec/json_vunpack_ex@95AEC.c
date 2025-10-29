int __fastcall json_vunpack_ex(_DWORD *a1, char *a2, int a3, _BYTE *a4, _QWORD **a5)
{
  int v9; // r4
  _QWORD **v11; // [sp+Ch] [bp-58h] BYREF
  int v12[2]; // [sp+10h] [bp-54h] BYREF
  __int64 v13; // [sp+18h] [bp-4Ch]
  __int64 v14; // [sp+20h] [bp-44h]
  __int64 v15; // [sp+28h] [bp-3Ch]
  __int64 v16; // [sp+30h] [bp-34h]
  __int64 v17; // [sp+38h] [bp-2Ch]
  __int64 v18; // [sp+40h] [bp-24h]
  char *v19; // [sp+48h] [bp-1Ch]
  int v20; // [sp+4Ch] [bp-18h]
  int v21; // [sp+50h] [bp-14h]
  int v22; // [sp+54h] [bp-10h]
  int v23; // [sp+58h] [bp-Ch]
  int v24; // [sp+5Ch] [bp-8h]

  if ( a1 )
  {
    if ( a4 && *a4 )
    {
      jsonp_error_init(a2, 0);
      v21 = 1;
      v15 = 0;
      v16 = 0;
      v12[0] = (int)a4;
      v13 = 0;
      v14 = 0;
      v12[1] = (int)a4;
      v17 = 0;
      v18 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v19 = a2;
      v20 = a3;
      sub_9419C((int)v12);
      v11 = a5;
      v9 = sub_94610((int)v12, a1, &v11);
      if ( v9 )
      {
        return -1;
      }
      else
      {
        sub_9419C((int)v12);
        if ( BYTE4(v16) )
        {
          sub_9413C(v12, "<format>", 9, "Garbage after format string");
          return -1;
        }
      }
    }
    else
    {
      v9 = -1;
      jsonp_error_init(a2, "<format>");
      jsonp_error_set((int)a2, -1, -1, 0, 4, "NULL or empty format string");
    }
  }
  else
  {
    v9 = -1;
    jsonp_error_init(a2, "<root>");
    jsonp_error_set((int)a2, -1, -1, 0, 12, "NULL root value");
  }
  return v9;
}
