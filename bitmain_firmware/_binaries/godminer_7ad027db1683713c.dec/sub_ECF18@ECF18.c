int __fastcall sub_ECF18(int *a1)
{
  int v2; // r6
  int v3; // r5

  v2 = a1[78];
  v3 = 3;
  while ( 1 )
  {
    sub_EC9BC((int)a1, v2);
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
