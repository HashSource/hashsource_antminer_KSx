int __fastcall sub_EEC30(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5

  set_inactive_rvn((int)a1);
  v2 = a1[78];
  v3 = 3;
  while ( 1 )
  {
    sub_ED514((int)a1, v2);
    if ( a1[100] == v2 )
      break;
    chain_reset(a1[57]);
    if ( a1[100] == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
