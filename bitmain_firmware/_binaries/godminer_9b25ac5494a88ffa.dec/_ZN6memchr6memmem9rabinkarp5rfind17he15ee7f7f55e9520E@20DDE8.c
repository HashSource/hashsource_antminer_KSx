int __fastcall memchr::memmem::rabinkarp::rfind(int a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v8; // r0
  unsigned int v9; // r1
  char v10; // r2
  int v11; // r5
  int v12; // r6
  int v13; // t1
  int v15; // r7
  int v16; // r11
  unsigned __int8 *v17; // r0
  unsigned int v18; // r1
  int v19; // t1
  int v20; // r0

  if ( !a4 )
  {
    v12 = 0;
    v11 = 1;
    v15 = 0;
    v16 = -1;
    goto LABEL_18;
  }
  v8 = &a3[a4];
  v9 = 1;
  v10 = 0;
  v11 = 1;
  v12 = a3[a4 - 1];
  while ( (v10 & 1) != 0 )
  {
    if ( v8 == a3 )
      goto LABEL_8;
LABEL_4:
    v13 = *--v8;
    v11 *= 2;
    v10 = 1;
    v12 = v13 + 2 * v12;
    v9 = 0;
  }
  if ( v8 - a3 > v9 )
  {
    v8 -= v9;
    goto LABEL_4;
  }
LABEL_8:
  if ( a2 >= a4 )
  {
    v15 = 0;
    v17 = (unsigned __int8 *)(a2 + a1 - 1);
    v18 = a4;
    do
    {
      v19 = *v17--;
      --v18;
      v15 = v19 + 2 * v15;
    }
    while ( v18 );
    v16 = ~a4;
    if ( v12 == v15 )
      goto LABEL_18;
    while ( a2 > a4 )
    {
      v20 = a2 + v16;
      if ( !__CFADD__(a2, v16) )
        core::panicking::panic_bounds_check(v20, a2, (int)&off_2E0728);
      --a2;
      v15 = *(unsigned __int8 *)(a1 + v20) + 2 * (v15 - v11 * *(unsigned __int8 *)(a1 + a2));
      if ( v12 == v15 )
      {
LABEL_18:
        if ( sub_7D2E4(a1, a2, a3, a4) )
          return 1;
      }
    }
  }
  return 0;
}
