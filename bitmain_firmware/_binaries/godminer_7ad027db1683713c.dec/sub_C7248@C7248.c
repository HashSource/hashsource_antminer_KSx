int __fastcall sub_C7248(int a1)
{
  int v2; // r6
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 312);
  v3 = 3;
  while ( 1 )
  {
    sub_C6CE8(a1, v2);
    if ( *(_DWORD *)(a1 + 400) == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
