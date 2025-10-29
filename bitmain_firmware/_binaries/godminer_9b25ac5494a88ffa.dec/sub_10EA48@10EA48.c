int __fastcall sub_10EA48(int a1)
{
  int v2; // r6
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 328);
  v3 = 3;
  while ( 1 )
  {
    sub_10E544(a1, v2);
    if ( *(_DWORD *)(a1 + 416) == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
