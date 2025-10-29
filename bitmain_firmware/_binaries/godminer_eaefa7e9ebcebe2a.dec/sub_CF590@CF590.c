int __fastcall sub_CF590(int a1)
{
  int v2; // r6
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 332);
  v3 = 3;
  while ( 1 )
  {
    sub_CF08C(a1, v2);
    if ( *(_DWORD *)(a1 + 424) == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
