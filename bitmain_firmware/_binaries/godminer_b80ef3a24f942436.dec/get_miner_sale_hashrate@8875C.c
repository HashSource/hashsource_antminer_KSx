int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  double v2; // d8
  char *all_created_runtime; // r0
  char *v4; // r5
  double v5; // d9
  int miner_6060info_status; // r0
  int v7; // r6
  char *v8; // r5
  int v9; // t1
  _BYTE *v10; // r5
  int *v11; // r8
  _BYTE *v12; // r6
  int v13; // r4
  int v14; // r3
  int v15; // r3
  const char *v16; // r2
  int *v17; // r6
  int v18; // r4
  int v19; // r3
  int v20; // r3
  const char *v21; // r2
  int v22; // r0
  int v23; // r4
  int result; // r0
  int *v25; // r1
  int v26; // [sp+0h] [bp-218h] BYREF
  int v27; // [sp+4h] [bp-214h]
  double v28[2]; // [sp+8h] [bp-210h] BYREF
  char v29[12]; // [sp+1Ch] [bp-1FCh] BYREF
  _BYTE v30[496]; // [sp+28h] [bp-1F0h] BYREF

  v1 = 0;
  v2 = 0.0;
  v26 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v26);
  v27 = 1;
  v4 = all_created_runtime;
  get_miner_elapsed_time();
  v5 = v0;
  miner_6060info_status = get_miner_6060info_status(v30);
  v28[0] = 0.0;
  if ( v26 > 0 )
  {
    v8 = v4 - 4;
    v7 = 0;
    do
    {
      v9 = *((_DWORD *)v8 + 1);
      v8 += 4;
      ++v1;
      miner_6060info_status = (*(int (**)(void))(v9 + 136))();
      v2 = v2 + v28[1];
      v7 |= miner_6060info_status;
    }
    while ( v26 > v1 );
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
    LOWORD(v25) = 20936;
    HIWORD(v25) = (unsigned int)sub_271A28 >> 16;
    miner_6060info_status = *v25;
    freq_scan_status = 2;
    search_failed_info = miner_6060info_status;
    if ( !v30[0] )
      goto LABEL_10;
    goto LABEL_42;
  }
  if ( v30[0] )
  {
LABEL_42:
    miner_6060info_status = *(_DWORD *)"P:1";
    strcpy((char *)&search_failed_info, "P:1");
    freq_scan_status = 2;
  }
LABEL_10:
  v10 = v30;
  LOWORD(v11) = 20936;
  v12 = v30;
  v13 = 0;
  do
  {
    while ( 1 )
    {
      v14 = (unsigned __int8)v12[24];
      v12 += 8;
      if ( v14 )
        break;
      if ( ++v13 == 8 )
        goto LABEL_14;
    }
    v15 = v13;
    LOWORD(v16) = 20944;
    HIWORD(v16) = (unsigned int)&loc_271A30 >> 16;
    ++v13;
    HIWORD(v11) = (unsigned int)sub_271A28 >> 16;
    search_failed_info = *v11;
    freq_scan_status = 2;
    miner_6060info_status = snprintf((char *)&search_failed_info, 0x100u, v16, v15);
  }
  while ( v13 != 8 );
LABEL_14:
  LOWORD(v17) = 20936;
  v18 = 0;
  do
  {
    while ( 1 )
    {
      v19 = (unsigned __int8)v10[216];
      v10 += 8;
      if ( v19 )
        break;
      if ( ++v18 == 16 )
        goto LABEL_18;
    }
    v20 = v18;
    LOWORD(v21) = 20952;
    HIWORD(v21) = (unsigned int)&loc_271A38 >> 16;
    ++v18;
    HIWORD(v17) = (unsigned int)sub_271A28 >> 16;
    search_failed_info = *v17;
    freq_scan_status = 2;
    miner_6060info_status = snprintf((char *)&search_failed_info, 0x100u, v21, v20);
  }
  while ( v18 != 16 );
LABEL_18:
  v22 = frontend_runtime_instance(miner_6060info_status);
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v22 + 72) + 16), v28, v29);
  v23 = v27;
  result = sub_270970((int)v28[0], v27) * v23;
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
      return sub_270970(result, v23) * v23;
    case 7:
      result = sub_270970(result, v23) * v23 - 50;
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
      return sub_270970(result, v23) * v23;
    case 2:
      if ( result > 172999 )
        return (int)&stru_2A3C8;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)&stru_28868.st_size;
      return sub_270970(result, v23) * v23;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_270970(result, v23) * v23;
      }
      return 1860;
  }
  return result;
}
