int sub_B67BC()
{
  int v0; // r4
  int all_created_runtime; // r0
  int v2; // r8
  int v3; // r6
  int v4; // r5
  int v5; // t1
  size_t v6; // r0
  signed int *v7; // r7
  int v8; // r4
  int v9; // r8
  int v10; // r6
  int v11; // t1
  char *v12; // r0
  signed int v13; // r4
  signed int *v14; // r5
  signed int *v15; // r3
  signed int v16; // r2
  signed int v17; // t1
  int v18; // r0
  int v19; // r0
  int v21; // [sp+14h] [bp-10E8h] BYREF
  _BYTE v22[16]; // [sp+18h] [bp-10E4h] BYREF
  void *src; // [sp+28h] [bp-10D4h]
  int v24; // [sp+38h] [bp-10C4h]
  _BYTE v25[4100]; // [sp+F8h] [bp-1004h] BYREF

  v0 = 0;
  v21 = 0;
  all_created_runtime = get_all_created_runtime(&v21);
  v2 = all_created_runtime;
  if ( v21 <= 0 )
  {
    v6 = 0;
    v4 = 0;
  }
  else
  {
    v3 = all_created_runtime - 4;
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      read_status_from_monitor(v22, v5);
      ++v0;
      v4 += v24;
    }
    while ( v21 > v0 );
    v6 = v4;
  }
  v7 = (signed int *)calloc(v6, 4u);
  if ( v7 )
  {
    if ( v21 > 0 )
    {
      v8 = 0;
      v9 = v2 - 4;
      v10 = 0;
      do
      {
        v11 = *(_DWORD *)(v9 + 4);
        v9 += 4;
        read_status_from_monitor(v22, v11);
        v12 = (char *)&v7[v10];
        v10 += v24;
        ++v8;
        memcpy(v12, src, 4 * v24);
      }
      while ( v21 > v8 );
    }
    if ( v4 > 0 )
    {
      v14 = &v7[v4];
      v15 = v7;
      v13 = 0x80000000;
      do
      {
        v17 = *v15++;
        v16 = v17;
        if ( v13 < v17 )
          v13 = v16;
      }
      while ( v14 != v15 );
    }
    else
    {
      v13 = 0x80000000;
    }
    free(v7);
    dword_2E5E0C = v13;
    V_LOCK(v18);
    v19 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/miner_util/set_pwm_by_temp.c",
      177,
      "get_max_chip_temp",
      17,
      60,
      20,
      v25);
    return v13;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "temp_out_chip");
    return dword_2E5E0C;
  }
}
