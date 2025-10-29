int __fastcall i2c_sim_send_cmd(char a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v6; // r4
  int v7; // r4

  v6 = (unsigned __int8)(2 * a1);
  if ( a3 )
  {
    sub_128F4C();
    sub_128C10(v6);
    sub_128C10(a4);
    if ( a2 )
      goto LABEL_3;
  }
  else
  {
    if ( a2 )
    {
LABEL_3:
      sub_128F4C();
      sub_128C10(v6 | 1);
      v7 = sub_129078();
      sub_128FDC();
      return v7;
    }
    sub_128F4C();
    sub_128C10(v6);
  }
  sub_128C10(a5);
  sub_128FDC();
  return 0;
}
