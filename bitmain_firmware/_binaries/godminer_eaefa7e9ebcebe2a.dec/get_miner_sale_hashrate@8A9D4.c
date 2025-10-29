int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  double v2; // d8
  int all_created_runtime; // r0
  int v4; // r5
  double v5; // d9
  int miner_6060info_status; // r0
  int v7; // r6
  int v8; // r5
  int v9; // t1
  _BYTE *v10; // r5
  _BYTE *v11; // r6
  int v12; // r4
  int v13; // r3
  int v14; // r3
  int v15; // r4
  int v16; // r3
  int v17; // r3
  int v18; // r0
  int v19; // r4
  int result; // r0
  int v21; // [sp+0h] [bp-218h] BYREF
  int v22; // [sp+4h] [bp-214h]
  double v23[2]; // [sp+8h] [bp-210h] BYREF
  char v24[12]; // [sp+1Ch] [bp-1FCh] BYREF
  _BYTE v25[496]; // [sp+28h] [bp-1F0h] BYREF

  v1 = 0;
  v2 = 0.0;
  v21 = 0;
  all_created_runtime = get_all_created_runtime(&v21);
  v22 = 1;
  v4 = all_created_runtime;
  get_miner_elapsed_time();
  v5 = v0;
  miner_6060info_status = get_miner_6060info_status(v25);
  v23[0] = 0.0;
  if ( v21 > 0 )
  {
    v8 = v4 - 4;
    v7 = 0;
    do
    {
      v9 = *(_DWORD *)(v8 + 4);
      v8 += 4;
      ++v1;
      miner_6060info_status = (*(int (**)(void))(v9 + 136))();
      v2 = v2 + v23[1];
      v7 |= miner_6060info_status;
    }
    while ( v21 > v1 );
  }
  else
  {
    v7 = 0;
  }
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v5 = v0 - 2700.0;
  if ( v5 < 1.0 )
  {
    result = 0;
    freq_scan_status = 0;
    return result;
  }
  if ( v7 )
  {
    miner_6060info_status = *(_DWORD *)"R:1";
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
    if ( !v25[0] )
      goto LABEL_10;
    goto LABEL_42;
  }
  if ( v25[0] )
  {
LABEL_42:
    miner_6060info_status = *(_DWORD *)"P:1";
    strcpy((char *)search_failed_info, "P:1");
    freq_scan_status = 2;
  }
LABEL_10:
  v10 = v25;
  v11 = v25;
  v12 = 0;
  do
  {
    while ( 1 )
    {
      v13 = (unsigned __int8)v11[24];
      v11 += 8;
      if ( v13 )
        break;
      if ( ++v12 == 8 )
        goto LABEL_14;
    }
    v14 = v12++;
    strcpy((char *)search_failed_info, "R:1");
    freq_scan_status = 2;
    miner_6060info_status = snprintf((char *)search_failed_info, 0x100u, "F%d:1", v14);
  }
  while ( v12 != 8 );
LABEL_14:
  v15 = 0;
  do
  {
    while ( 1 )
    {
      v16 = (unsigned __int8)v10[216];
      v10 += 8;
      if ( v16 )
        break;
      if ( ++v15 == 16 )
        goto LABEL_18;
    }
    v17 = v15++;
    strcpy((char *)search_failed_info, "R:1");
    freq_scan_status = 2;
    miner_6060info_status = snprintf((char *)search_failed_info, 0x100u, "J%d:1", v17);
  }
  while ( v15 != 16 );
LABEL_18:
  v18 = frontend_runtime_instance(miner_6060info_status);
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v18 + 72) + 16), v23, v24);
  v19 = v22;
  result = sub_26CD38((int)v23[0], v22) * v19;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_29:
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
      return sub_26CD38(result, v19) * v19;
    case 7:
      result = sub_26CD38(result, v19) * v19 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_29;
    case 9:
      if ( result < 860 )
      {
        if ( (unsigned int)(result - 840) > 0x13 )
        {
          if ( (unsigned int)(result - 820) > 0x13 )
          {
            if ( (unsigned int)(result - 800) > 0x13 )
            {
              if ( (unsigned int)(result - 780) > 0x13 )
              {
                if ( (unsigned int)(result - 350) > 0x1AD )
                  return 0;
                else
                  return 350;
              }
              else
              {
                return 780;
              }
            }
            else
            {
              return 800;
            }
          }
          else
          {
            return 820;
          }
        }
        else
        {
          return 840;
        }
      }
      else
      {
        return 860;
      }
    case 1:
      if ( result > 65999 )
        return (int)&byte_101C0[16];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_26CD38(result, v19) * v19;
    case 2:
      if ( result > 172999 )
        return (int)&stru_2A3C0.st_size;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)&stru_28870;
      return sub_26CD38(result, v19) * v19;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_26CD38(result, v19) * v19;
      }
      return 1860;
  }
  return result;
}
