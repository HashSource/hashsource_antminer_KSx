int __fastcall sub_D35A8(int a1)
{
  int v2; // r6
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 336);
  v3 = 3;
  while ( 1 )
  {
    sub_D30A4(a1, v2);
    if ( *(_DWORD *)(a1 + 424) == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
