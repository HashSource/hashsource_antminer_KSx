int __fastcall memchr::memmem::rabinkarp::rfind_with(
        int *a1,
        int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  unsigned int v7; // r4
  int v9; // r5
  unsigned __int8 *v10; // r1
  unsigned int v11; // r2
  int v12; // t1
  int v13; // r7
  int v14; // r10
  int v15; // r11
  int v16; // r0

  if ( a3 >= a5 )
  {
    v7 = a3;
    if ( a5 )
    {
      v9 = 0;
      v10 = (unsigned __int8 *)(a3 + a2 - 1);
      v11 = a5;
      do
      {
        v12 = *v10--;
        --v11;
        v9 = v12 + 2 * v9;
      }
      while ( v11 );
    }
    else
    {
      v9 = 0;
    }
    v13 = *a1;
    v14 = a1[1];
    v15 = ~a5;
    if ( *a1 == v9 )
      goto LABEL_13;
    while ( v7 > a5 )
    {
      v16 = v7 + v15;
      if ( !__CFADD__(v7, v15) )
        core::panicking::panic_bounds_check(v16, v7, (int)&off_2E0728);
      --v7;
      v9 = *(unsigned __int8 *)(a2 + v16) + 2 * (v9 - v14 * *(unsigned __int8 *)(a2 + v7));
      if ( v13 == v9 )
      {
LABEL_13:
        if ( sub_7D2E4(a2, v7, a4, a5) )
          return 1;
      }
    }
  }
  return 0;
}
