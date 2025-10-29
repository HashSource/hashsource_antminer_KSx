int __fastcall serdes_wait_status(int a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r7
  int v9; // r0
  char *v10; // r4
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v16; // r0
  char *v17; // [sp+38h] [bp-105Ch]
  char v18[32]; // [sp+50h] [bp-1044h] BYREF
  char v19[32]; // [sp+70h] [bp-1024h] BYREF
  _BYTE v20[4080]; // [sp+90h] [bp-1004h] BYREF

  v8 = (char *)malloc(0x600u);
  sub_D85AC(a1, a3, 78, a4 | 0x310000);
  v9 = sub_D85FC(a1, a3, 79, v8);
  if ( !v9 )
  {
    free(v8);
    return 22;
  }
  if ( v9 <= 0 )
    goto LABEL_12;
  v10 = v8;
  v11 = 0;
  v17 = &v8[12 * v9];
  do
  {
    while ( a3 == 255 )
    {
      if ( a5 != bswap32(*(_DWORD *)v10) )
      {
        V_LOCK(v9);
        ++v11;
        V_INT((int)v18, "chain", *(int *)(a1 + 248));
        v12 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v12);
        v13 = g_zc;
        v14 = 120;
        goto LABEL_9;
      }
LABEL_5:
      v10 += 12;
      if ( v10 == v17 )
        goto LABEL_10;
    }
    if ( (unsigned __int8)v10[8] != a3 || a5 == bswap32(*(_DWORD *)v10) )
      goto LABEL_5;
    V_LOCK(v9);
    ++v11;
    V_INT((int)v19, "chain", *(int *)(a1 + 248));
    v16 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v16);
    v13 = g_zc;
    v14 = 126;
LABEL_9:
    v10 += 12;
    v9 = zlog(
           v13,
           "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/"
           "build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
           190,
           "serdes_wait_status",
           18,
           v14,
           60,
           v20);
  }
  while ( v10 != v17 );
LABEL_10:
  if ( v11 )
    usleep(0xF4240u);
LABEL_12:
  free(v8);
  return 0;
}
