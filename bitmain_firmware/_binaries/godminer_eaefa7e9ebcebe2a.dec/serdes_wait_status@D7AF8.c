int __fastcall serdes_wait_status(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r7
  unsigned __int8 *v9; // r4
  int v10; // r6
  int v11; // r0
  int v12; // r2
  int v14; // r0
  unsigned __int8 *ptr; // [sp+3Ch] [bp-1060h]
  int v16; // [sp+44h] [bp-1058h]
  int v17; // [sp+4Ch] [bp-1050h]
  int v18; // [sp+50h] [bp-104Ch]
  _BYTE v19[32]; // [sp+58h] [bp-1044h] BYREF
  _BYTE v20[32]; // [sp+78h] [bp-1024h] BYREF
  _BYTE v21[4100]; // [sp+98h] [bp-1004h] BYREF

  v17 = a4 | 0x310000;
  v18 = (unsigned __int16)a3;
  LOBYTE(v16) = 5;
  ptr = (unsigned __int8 *)malloc(0x600u);
  while ( 1 )
  {
    sub_D745C(a1, a3, 78, v17);
    v7 = sub_D74AC(a1, v18, 79, ptr);
    if ( !v7 )
      break;
    if ( v7 <= 0 )
      goto LABEL_13;
    v8 = 0;
    v9 = ptr + 8;
    v10 = (int)&ptr[12 * v7 + 8];
    do
    {
      while ( a3 == 255 )
      {
        if ( *((_DWORD *)v9 - 2) != a5 )
        {
          V_LOCK(v7);
          ++v8;
          V_INT((int)v19, "chain");
          v11 = logfmt_raw((int)v21, 0x1000u);
          V_UNLOCK(v11);
          v12 = 119;
          goto LABEL_10;
        }
LABEL_6:
        v9 += 12;
        if ( (unsigned __int8 *)v10 == v9 )
          goto LABEL_11;
      }
      if ( *v9 != a3 || *((_DWORD *)v9 - 2) == a5 )
        goto LABEL_6;
      V_LOCK(v7);
      ++v8;
      V_INT((int)v20, "chain");
      v14 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v14);
      v12 = 125;
LABEL_10:
      v9 += 12;
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/backend/backend_eth_2280/backend_eth_phy_set.c",
             195,
             "serdes_wait_status",
             18,
             v12,
             60,
             v21);
    }
    while ( (unsigned __int8 *)v10 != v9 );
LABEL_11:
    if ( v8 )
    {
      usleep(0xF4240u);
      v16 = (unsigned __int8)(v16 - 1);
      if ( v16 )
        continue;
    }
LABEL_13:
    free(ptr);
    return 0;
  }
  free(ptr);
  return 22;
}
