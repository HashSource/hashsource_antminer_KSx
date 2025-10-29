int __fastcall json_loadb(int a1, int a2, int a3, char *a4)
{
  _DWORD v9[3]; // [sp+4h] [bp-58h] BYREF
  _DWORD v10[2]; // [sp+10h] [bp-4Ch] BYREF
  char v11; // [sp+18h] [bp-44h]
  int v12; // [sp+20h] [bp-3Ch]
  int v13; // [sp+24h] [bp-38h]
  int v14; // [sp+28h] [bp-34h]
  int v15; // [sp+2Ch] [bp-30h]
  int v16; // [sp+34h] [bp-28h]
  _BYTE v17[12]; // [sp+38h] [bp-24h] BYREF
  int v18; // [sp+44h] [bp-18h]
  int v19; // [sp+4Ch] [bp-10h]

  jsonp_error_init(a4, "<buffer>");
  if ( a1 )
  {
    v9[0] = a1;
    v9[1] = a2;
    a1 = 0;
    v9[2] = 0;
    v11 = 0;
    v10[0] = sub_92E4C;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v10[1] = v9;
    v14 = 1;
    if ( !strbuffer_init(v17) )
    {
      v18 = a3;
      v19 = -1;
      a1 = sub_93FA8(v10, a3, (int)a4);
      sub_92FF8(v10);
    }
  }
  else
  {
    sub_92ECC((int)a4, 0, 4, "wrong arguments");
  }
  return a1;
}
