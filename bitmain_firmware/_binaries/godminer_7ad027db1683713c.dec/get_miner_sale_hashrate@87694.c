int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  double v2; // d8
  char *all_created_runtime; // r0
  char *v4; // r5
  double v5; // d9
  int v6; // r7
  char *v7; // r5
  int v8; // t1
  int v9; // r0
  char *v10; // r4
  char *v11; // r3
  int v13; // r0
  int v14; // r4
  int result; // r0
  int v16; // [sp+0h] [bp-58h] BYREF
  int v17; // [sp+4h] [bp-54h]
  double v18[2]; // [sp+8h] [bp-50h] BYREF
  char v19[12]; // [sp+18h] [bp-40h] BYREF
  _WORD v20[8]; // [sp+24h] [bp-34h] BYREF
  char v21; // [sp+35h] [bp-23h]
  char v22; // [sp+46h] [bp-12h] BYREF
  _BYTE v23[2]; // [sp+56h] [bp-2h] BYREF

  v1 = 0;
  v2 = 0.0;
  v16 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v16);
  v17 = 1;
  v4 = all_created_runtime;
  get_miner_elapsed_time();
  v5 = v0;
  get_miner_6060info_status(v20);
  v18[0] = 0.0;
  if ( v16 > 0 )
  {
    v7 = v4 - 4;
    v6 = 0;
    do
    {
      v8 = *((_DWORD *)v7 + 1);
      v7 += 4;
      ++v1;
      v9 = (*(int (**)(void))(v8 + 136))();
      v2 = v2 + v18[1];
      v6 |= v9;
    }
    while ( v16 > v1 );
  }
  else
  {
    v6 = 0;
  }
  if ( (unsigned int)(opt_algo - 6) <= 1 )
    v5 = v0 - 2700.0;
  if ( v5 < 1.0 )
  {
    result = 0;
    freq_scan_status = 0;
    return result;
  }
  if ( !v6 )
  {
    if ( !LOBYTE(v20[0]) )
      goto LABEL_10;
LABEL_40:
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "P:1");
    if ( !v21 )
      goto LABEL_11;
    goto LABEL_39;
  }
  freq_scan_status = 2;
  strcpy((char *)search_failed_info, "R:1");
  if ( LOBYTE(v20[0]) )
    goto LABEL_40;
LABEL_10:
  if ( v21 )
  {
LABEL_39:
    strcpy((char *)search_failed_info, "F:1");
    freq_scan_status = 2;
  }
LABEL_11:
  v10 = &v22;
  do
  {
    while ( 1 )
    {
      v11 = &v10[-34 - (_DWORD)v20];
      if ( *v10++ )
        break;
      if ( v23 == v10 )
        goto LABEL_15;
    }
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
    snprintf((char *)search_failed_info, 0x100u, "J%d:1", v11);
  }
  while ( v23 != v10 );
LABEL_15:
  v13 = frontend_runtime_instance();
  format_hashrate_double(*(const char **)(*(_DWORD *)(v13 + 72) + 16), v18, v19);
  v14 = v17;
  result = sub_25A970((int)v18[0], v17) * v14;
  switch ( opt_algo )
  {
    case 6:
      result -= 50;
      if ( result > 3729 )
        return 3780;
LABEL_26:
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
      return sub_25A970(result, v14) * v14;
    case 7:
      result = sub_25A970(result, v14) * v14 - 50;
      if ( result > 3729 )
        return 3780;
      goto LABEL_26;
    case 9:
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
      return sub_25A970(result, v14) * v14;
    case 1:
      if ( result > 65999 )
        return (int)&byte_101C0[16];
      if ( (unsigned int)(result - 63500) <= 0x9C3 )
        return 63500;
      if ( (unsigned int)(result - 60500) <= 0xBB7 )
        return 60500;
      if ( (unsigned int)(result - 58000) <= 0x9C3 )
        return 58000;
      return sub_25A970(result, v14) * v14;
    case 2:
      if ( result > 172999 )
        return (int)&stru_2A3C0.st_size;
      if ( (unsigned int)(result - 166000) <= 0x1B57 )
        return (int)&stru_28870;
      return sub_25A970(result, v14) * v14;
    case 5:
      if ( result <= 1859 )
      {
        if ( (unsigned int)(result - 1770) <= 0x59 )
          return 1770;
        return sub_25A970(result, v14) * v14;
      }
      return 1860;
  }
  return result;
}
