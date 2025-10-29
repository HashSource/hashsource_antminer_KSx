int get_theory_hashrate()
{
  int v0; // r6
  double v1; // d0
  int v2; // r4
  double v3; // d8
  char *all_created_runtime; // r5
  double v5; // d9
  char *v6; // r5
  int v7; // t1
  int v8; // r0
  bool v9; // cc
  int v10; // r0
  int v12; // [sp+4h] [bp-2Ch]
  int v13; // [sp+Ch] [bp-24h] BYREF
  double v14[2]; // [sp+10h] [bp-20h] BYREF
  char v15[12]; // [sp+24h] [bp-Ch] BYREF

  v2 = 0;
  v3 = 0.0;
  v13 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v13);
  get_miner_elapsed_time();
  v14[0] = 0.0;
  if ( v13 <= 0 )
    v0 = 0;
  v5 = v1;
  if ( v13 > 0 )
  {
    v6 = all_created_runtime - 4;
    v0 = 0;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v2;
      v8 = (*(int (**)(void))(v7 + 132))();
      v3 = v3 + v14[1];
      v0 |= v8;
    }
    while ( v13 > v2 );
  }
  v9 = (unsigned int)opt_algo > 0xA;
  if ( opt_algo != 10 )
    v9 = (unsigned int)(opt_algo - 6) > 1;
  if ( !v9 )
    v5 = v1 - 2700.0;
  if ( v5 < 1.0 )
  {
    freq_scan_status = 0;
    return (int)v14[0];
  }
  else
  {
    v10 = frontend_runtime_instance();
    format_hashrate_double(*(const char **)(*(_DWORD *)(v10 + 72) + 16), v14, v15);
    if ( v0 )
    {
      strcpy((char *)search_failed_info, "R:1");
      freq_scan_status = 2;
      return v12;
    }
    else
    {
      freq_scan_status = 1;
      return (int)v14[0];
    }
  }
}
