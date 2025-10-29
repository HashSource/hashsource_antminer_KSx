int __fastcall check_core_reg_with_expect_data_2(
        int a1,
        int a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned int a5,
        int a6)
{
  int v9; // r5
  char *v10; // r6
  unsigned int v11; // r4
  int v12; // r0
  char *v13; // r3
  int v14; // r12
  int v15; // r2

  v9 = 2 * a6;
  v10 = (char *)malloc(0x600u);
  if ( 2 * a6 )
  {
    v11 = bswap32(a5);
    do
    {
      v12 = sub_D73C4(a1, a3, a4, v10);
      if ( !v12 )
        break;
      v13 = v10;
      v14 = 0;
      do
      {
        v15 = *(_DWORD *)v13;
        v13 += 12;
        if ( (v11 & ~v15) == 0 )
          ++v14;
      }
      while ( &v10[12 * v12] != v13 );
      if ( v14 == v12 )
      {
        free(v10);
        return 0;
      }
      usleep((__useconds_t)&loc_7A120);
      --v9;
    }
    while ( v9 );
  }
  free(v10);
  return 22;
}
