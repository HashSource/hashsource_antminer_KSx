int __fastcall hal_chain_reset_addr(int a1)
{
  int v1; // r2
  int i; // r3

  v1 = 0;
  for ( i = 0; ; v1 = dword_2993F8[4 * i] )
  {
    if ( v1 == a1 )
      return dword_2993F8[4 * i + 3];
    if ( ++i == 16 )
      break;
  }
  return -2;
}
