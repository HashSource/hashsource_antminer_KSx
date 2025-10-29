double *__fastcall json_loadb(double *a1, int a2, int a3, char *a4)
{
  _DWORD v9[3]; // [sp+4h] [bp-58h] BYREF
  _DWORD v10[2]; // [sp+10h] [bp-4Ch] BYREF
  char v11; // [sp+18h] [bp-44h]
  int v12; // [sp+20h] [bp-3Ch]
  int v13; // [sp+24h] [bp-38h]
  int v14; // [sp+28h] [bp-34h]
  int v15; // [sp+2Ch] [bp-30h]
  int v16; // [sp+34h] [bp-28h]
  _DWORD v17[9]; // [sp+38h] [bp-24h] BYREF

  jsonp_error_init(a4, "<buffer>");
  if ( a1 )
  {
    v9[0] = a1;
    v9[1] = a2;
    a1 = 0;
    v9[2] = 0;
    v11 = 0;
    v10[0] = 595260;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v10[1] = v9;
    v14 = 1;
    if ( !strbuffer_init(v17) )
    {
      v17[3] = a3;
      v17[5] = -1;
      a1 = sub_92698(v10, a3, (int)a4);
      sub_916E8(v10);
    }
  }
  else
  {
    sub_915BC((int)a4, 0, 4, "wrong arguments");
  }
  return a1;
}
