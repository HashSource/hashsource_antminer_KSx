int __fastcall json_loadf(int a1, int a2, char *a3)
{
  int v5; // r4
  char *v6; // r1
  _DWORD v8[2]; // [sp+0h] [bp-48h] BYREF
  char v9; // [sp+8h] [bp-40h]
  int v10; // [sp+10h] [bp-38h]
  int v11; // [sp+14h] [bp-34h]
  int v12; // [sp+18h] [bp-30h]
  int v13; // [sp+1Ch] [bp-2Ch]
  int v14; // [sp+24h] [bp-24h]
  _BYTE v15[12]; // [sp+28h] [bp-20h] BYREF
  int v16; // [sp+34h] [bp-14h]
  int v17; // [sp+3Ch] [bp-Ch]

  v5 = a1;
  if ( stdin == a1 )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  jsonp_error_init(a3, v6);
  if ( v5 )
  {
    v8[1] = v5;
    v5 = 0;
    v9 = 0;
    v8[0] = fgetc;
    v10 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v12 = 1;
    if ( !strbuffer_init(v15) )
    {
      v16 = a2;
      v17 = -1;
      v5 = sub_93C00(v8, a2, (int)a3);
      sub_92C50(v8);
    }
  }
  else
  {
    sub_92B24((int)a3, 0, 4, "wrong arguments");
  }
  return v5;
}
