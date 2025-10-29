int __fastcall sub_F1364(int *a1)
{
  int v2; // r6
  int v3; // r5

  v2 = a1[83];
  v3 = 3;
  while ( 1 )
  {
    sub_F0D0C((int)a1, v2);
    if ( a1[106] == v2 )
      break;
    if ( !--v3 )
    {
      set_miner_6060info_runtime_bad_asic_err(a1[62], 1);
      return 12;
    }
  }
  set_miner_6060info_runtime_bad_asic_err(a1[62], 0);
  return 0;
}
