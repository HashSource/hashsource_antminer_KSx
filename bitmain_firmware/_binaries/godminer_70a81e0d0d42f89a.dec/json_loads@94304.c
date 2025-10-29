int __fastcall json_loads(int a1, int a2, char *a3)
{
  _DWORD v7[2]; // [sp+0h] [bp-50h] BYREF
  _DWORD v8[2]; // [sp+8h] [bp-48h] BYREF
  char v9; // [sp+10h] [bp-40h]
  int v10; // [sp+18h] [bp-38h]
  int v11; // [sp+1Ch] [bp-34h]
  int v12; // [sp+20h] [bp-30h]
  int v13; // [sp+24h] [bp-2Ch]
  int v14; // [sp+2Ch] [bp-24h]
  _BYTE v15[12]; // [sp+30h] [bp-20h] BYREF
  int v16; // [sp+3Ch] [bp-14h]
  int v17; // [sp+44h] [bp-Ch]

  jsonp_error_init(a3, "<string>");
  if ( a1 )
  {
    v7[0] = a1;
    a1 = 0;
    v7[1] = 0;
    v8[0] = sub_93080;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v8[1] = v7;
    v12 = 1;
    if ( !strbuffer_init(v15) )
    {
      v16 = a2;
      v17 = -1;
      a1 = sub_94200(v8, a2, (int)a3);
      sub_93250(v8);
    }
  }
  else
  {
    sub_93124((int)a3, 0, 4, "wrong arguments");
  }
  return a1;
}
