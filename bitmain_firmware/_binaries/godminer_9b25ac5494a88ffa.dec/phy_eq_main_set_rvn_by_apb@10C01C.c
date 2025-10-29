int __fastcall phy_eq_main_set_rvn_by_apb(int result, unsigned int a2, char *a3, int a4, unsigned __int8 a5)
{
  char *v5; // r7
  int v7; // r8
  int v8; // r5
  int v9; // r6
  int v10; // r3
  int v11; // r4
  int v12; // [sp+4h] [bp-8h]

  if ( a4 )
  {
    v5 = a3;
    v7 = result;
    v12 = (int)&a3[(unsigned __int8)(a4 - 1) + 1];
    do
    {
      v8 = 0;
      do
      {
        v9 = v8 | 0x1003;
        v10 = v8 | 0x1003;
        v8 = (unsigned __int16)(v8 + 512);
        v11 = (unsigned __int16)((16 * a5) | serdes_apb_read_rvn(v7, a2, (unsigned __int8)*v5, v10) & 0xFC0F);
        sub_103B34(v7, *v5, v9, v11);
        result = sub_103B34(v7, *v5, v9, v11 | 0x400);
      }
      while ( (unsigned __int16)v8 != 2048 );
      ++v5;
    }
    while ( v5 != (char *)v12 );
  }
  return result;
}
