int __fastcall phy_eq_pre_set_by_apb(int result, unsigned int a2, char *a3, int a4, unsigned __int8 a5)
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
        v9 = v8 | 0x1004;
        v10 = v8 | 0x1004;
        v8 = (unsigned __int16)(v8 + 512);
        v11 = a5 | serdes_apb_read(v7, a2, (unsigned __int8)*v5, v10) & 0xFFC0;
        sub_D909C(v7, *v5, v9, v11);
        result = sub_D909C(v7, *v5, v9, v11 | 0x40);
      }
      while ( (unsigned __int16)v8 != 2048 );
      ++v5;
    }
    while ( v5 != (char *)v12 );
  }
  return result;
}
