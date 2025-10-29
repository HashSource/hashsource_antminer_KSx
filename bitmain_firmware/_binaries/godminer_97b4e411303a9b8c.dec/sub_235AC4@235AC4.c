void __fastcall sub_235AC4(int a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v7; // r2
  unsigned int v8; // r12
  char v9; // r3
  char **v10; // r2

  v7 = (a3 - a4) & a6;
  if ( a5 != 3 )
  {
    sub_235760(a1, a2, v7, a3, a5, a6);
    return;
  }
  if ( v7 >= a2 )
    core::panicking::panic_bounds_check(v7, a2, (int)&off_2E43E4);
  if ( a3 >= a2 )
    core::panicking::panic_bounds_check(a3, a2, (int)&off_2E43F4);
  *(_BYTE *)(a1 + a3) = *(_BYTE *)(a1 + v7);
  v8 = (v7 + 1) & a6;
  if ( v8 >= a2 )
  {
    v10 = &off_2E4404;
    goto LABEL_16;
  }
  if ( a3 + 1 >= a2 )
    core::panicking::panic_bounds_check(a3 + 1, a2, (int)&off_2E4414);
  v9 = *(_BYTE *)(a1 + v8);
  v8 = (v7 + 2) & a6;
  *(_BYTE *)(a1 + a3 + 1) = v9;
  if ( v8 >= a2 )
  {
    v10 = &off_2E4424;
LABEL_16:
    core::panicking::panic_bounds_check(v8, a2, (int)v10);
  }
  if ( a3 + 2 >= a2 )
    core::panicking::panic_bounds_check(a3 + 2, a2, (int)&off_2E4434);
  *(_BYTE *)(a1 + a3 + 2) = *(_BYTE *)(a1 + v8);
}
