int get_miner_sale_hashrate()
{
  int v0; // r8
  double v1; // d0
  int v2; // r4
  double v3; // d8
  int all_created_runtime; // r0
  int v5; // r6
  time_t miner_elapsed_time; // r0
  double v7; // d9
  int miner_6060info_status; // r0
  _BYTE *v9; // r5
  int v10; // r6
  int v11; // t1
  _BYTE *v12; // r6
  int v13; // r4
  int v14; // r3
  int v15; // r3
  int v16; // r4
  int v17; // r3
  int v18; // r3
  int v19; // r0
  int v20; // r4
  int result; // r0
  int v22; // [sp+0h] [bp-28h] BYREF
  int v23; // [sp+4h] [bp-24h]
  double v24[2]; // [sp+8h] [bp-20h] BYREF
  char v25[12]; // [sp+1Ch] [bp-Ch] BYREF

  v2 = 0;
  v3 = 0.0;
  v22 = 0;
  all_created_runtime = get_all_created_runtime(&v22);
  v23 = 1;
  v5 = all_created_runtime;
  miner_elapsed_time = get_miner_elapsed_time();
  v7 = v1;
  miner_6060info_status = get_miner_6060info_status(miner_elapsed_time);
  v24[0] = 0.0;
  if ( v22 <= 0 )
    v0 = 0;
  v9 = (_BYTE *)miner_6060info_status;
  if ( v22 > 0 )
  {
    v10 = v5 - 4;
    v0 = 0;
    do
    {
      v11 = *(_DWORD *)(v10 + 4);
      v10 += 4;
      ++v2;
      miner_6060info_status = (*(int (**)(void))(v11 + 136))();
      v3 = v3 + v24[1];
      v0 |= miner_6060info_status;
    }
    while ( v22 > v2 );
  }
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v7 = v1 - 2700.0;
  if ( v7 < 1.0 )
    freq_scan_status = 0;
  if ( v0 )
  {
    miner_6060info_status = *(_DWORD *)"R:1";
    strcpy((char *)search_failed_info, "R:1");
    freq_scan_status = 2;
  }
  if ( *v9 )
  {
    miner_6060info_status = *(_DWORD *)"P:1";
    strcpy((char *)search_failed_info, "P:1");
    freq_scan_status = 2;
  }
  if ( v9[32] )
  {
    miner_6060info_status = 3553866;
    search_failed_info[0] = 3553866;
    freq_scan_status = 2;
  }
  v12 = v9;
  v13 = 0;
  do
  {
    while ( 1 )
    {
      v14 = (unsigned __int8)v12[48];
      v12 += 16;
      if ( v14 )
        break;
      if ( ++v13 == 8 )
        goto LABEL_20;
    }
    v15 = v13++;
    strcpy((char *)search_failed_info, "R:1");
    freq_scan_status = 2;
    miner_6060info_status = snprintf((char *)search_failed_info, 0x100u, "F%d:1", v15);
  }
  while ( v13 != 8 );
LABEL_20:
  v16 = 0;
  do
  {
    while ( 1 )
    {
      v17 = (unsigned __int8)v9[432];
      v9 += 16;
      if ( v17 )
        break;
      if ( ++v16 == 16 )
        goto LABEL_24;
    }
    v18 = v16++;
    strcpy((char *)search_failed_info, "R:1");
    freq_scan_status = 2;
    miner_6060info_status = snprintf((char *)search_failed_info, 0x100u, "J%d:1", v18);
  }
  while ( v16 != 16 );
LABEL_24:
  v19 = frontend_runtime_instance(miner_6060info_status);
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v19 + 72) + 16), v24, v25);
  v20 = v23;
  result = sub_26EE98((int)v24[0], v23) * v20;
  if ( opt_algo == 6 )
  {
    result -= 50;
    if ( result > 3729 )
      return 3780;
    goto LABEL_38;
  }
  if ( opt_algo == 7 )
  {
    result = sub_26EE98(result, v20) * v20 - 50;
    if ( result > 3729 )
      return 3780;
LABEL_38:
    if ( (unsigned int)(result - 3630) <= 0x63 )
      return 3680;
    if ( (unsigned int)(result - 3530) <= 0x63 )
      return 3580;
    if ( (unsigned int)(result - 3430) <= 0x63 )
      return 3480;
    if ( (unsigned int)(result - 3330) <= 0x63 )
      return 3380;
    if ( (unsigned int)(result - 3230) <= 0x63 )
      return 3280;
    if ( (unsigned int)(result - 3130) <= 0x63 )
      return 3180;
    return sub_26EE98(result, v20) * v20;
  }
  if ( opt_algo != 9 )
  {
    switch ( opt_algo )
    {
      case 1:
        if ( result > 65999 )
          return (int)&byte_101C0[16];
        if ( (unsigned int)(result - 63500) <= 0x9C3 )
          return 63500;
        if ( (unsigned int)(result - 60500) <= 0xBB7 )
          return 60500;
        if ( (unsigned int)(result - 58000) <= 0x9C3 )
          return 58000;
        break;
      case 2:
        if ( result > 172999 )
          return (int)&stru_2A3C0.st_size;
        if ( (unsigned int)(result - 166000) <= 0x1B57 )
          return (int)&stru_28870;
        break;
      case 5:
        if ( result > 1859 )
          return 1860;
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        break;
      default:
        return result;
    }
    return sub_26EE98(result, v20) * v20;
  }
  if ( result >= 860 )
    return 860;
  if ( (unsigned int)(result - 840) <= 0x13 )
    return 840;
  if ( (unsigned int)(result - 820) <= 0x13 )
    return 820;
  if ( (unsigned int)(result - 800) <= 0x13 )
    return 800;
  if ( (unsigned int)(result - 780) <= 0x13 )
    return 780;
  if ( (unsigned int)(result - 350) > 0x1AD )
    return 0;
  return 350;
}
