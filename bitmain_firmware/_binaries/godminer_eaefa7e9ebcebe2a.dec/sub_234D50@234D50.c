void __fastcall sub_234D50(int a1, unsigned int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r7
  int v7; // r10
  unsigned int v8; // r11
  int v9; // r4
  unsigned int v10; // lr
  int v11; // r12
  unsigned int v12; // lr
  int v13; // r6
  int v14; // r5
  unsigned int v15; // lr

  v6 = 0;
  if ( a5 >> 2 )
  {
    v7 = a1 + a4;
    v8 = a5 >> 2;
    do
    {
      v9 = a3 + v6;
      v10 = (a3 + v6) & a6;
      if ( v10 >= a2 )
        core::panicking::panic_bounds_check(v10, a2, (int)&off_2E32A4);
      v11 = a4 + v6;
      if ( a4 + v6 >= a2 )
        core::panicking::panic_bounds_check(a4 + v6, a2, (int)&off_2E32B4);
      *(_BYTE *)(v7 + v6) = *(_BYTE *)(a1 + v10);
      v12 = (v9 + 1) & a6;
      if ( v12 >= a2 )
        core::panicking::panic_bounds_check((v9 + 1) & a6, a2, (int)&off_2E32C4);
      if ( v11 + 1 >= a2 )
        core::panicking::panic_bounds_check(v11 + 1, a2, (int)&off_2E32D4);
      v13 = v9 + 2;
      v14 = v7 + v6;
      *(_BYTE *)(v7 + v6 + 1) = *(_BYTE *)(a1 + v12);
      if ( ((v9 + 2) & a6) >= a2 )
        core::panicking::panic_bounds_check(v13 & a6, a2, (int)&off_2E32E4);
      if ( v11 + 2 >= a2 )
        core::panicking::panic_bounds_check(v11 + 2, a2, (int)&off_2E32F4);
      v15 = (v9 + 3) & a6;
      *(_BYTE *)(v14 + 2) = *(_BYTE *)(a1 + (v13 & a6));
      if ( v15 >= a2 )
        core::panicking::panic_bounds_check((v9 + 3) & a6, a2, (int)&off_2E3304);
      if ( v11 + 3 >= a2 )
        core::panicking::panic_bounds_check(v11 + 3, a2, (int)&off_2E3314);
      --v8;
      v6 += 4;
      *(_BYTE *)(v14 + 3) = *(_BYTE *)(a1 + v15);
    }
    while ( v8 );
  }
  __asm { ADD             PC, R6, R7 }
}
