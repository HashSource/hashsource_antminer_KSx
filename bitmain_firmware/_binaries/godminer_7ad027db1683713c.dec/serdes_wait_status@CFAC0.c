int __fastcall serdes_wait_status(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r7
  unsigned __int8 *v9; // r4
  int v10; // r6
  int v11; // r2
  unsigned __int8 *ptr; // [sp+3Ch] [bp-1060h]
  int v14; // [sp+44h] [bp-1058h]
  int v16; // [sp+4Ch] [bp-1050h]
  int v17; // [sp+50h] [bp-104Ch]
  _DWORD v18[7]; // [sp+58h] [bp-1044h] BYREF
  int v19; // [sp+74h] [bp-1028h]
  _DWORD v20[7]; // [sp+78h] [bp-1024h] BYREF
  int v21; // [sp+94h] [bp-1008h]
  char v22[4100]; // [sp+98h] [bp-1004h] BYREF

  v16 = a4 | 0x310000;
  v17 = (unsigned __int16)a3;
  LOBYTE(v14) = 5;
  ptr = (unsigned __int8 *)malloc(0x600u);
  while ( 1 )
  {
    sub_CF420(a1, a3, 78, v16);
    v7 = sub_CF470(a1, v17, 79, ptr);
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
          V_LOCK();
          ++v8;
          V_INT((int)v18, "chain", *(int *)(a1 + 232));
          logfmt_raw(
            v22,
            0x1000u,
            0,
            v19,
            v18[0],
            v18[1],
            v18[2],
            v18[3],
            v18[4],
            v18[5],
            v18[6],
            v19,
            "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
            *v9,
            a4,
            *((_DWORD *)v9 - 2),
            a5);
          V_UNLOCK();
          v11 = 119;
          goto LABEL_10;
        }
LABEL_6:
        v9 += 12;
        if ( (unsigned __int8 *)v10 == v9 )
          goto LABEL_11;
      }
      if ( *v9 != a3 || *((_DWORD *)v9 - 2) == a5 )
        goto LABEL_6;
      V_LOCK();
      ++v8;
      V_INT((int)v20, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v22,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
        *v9,
        a4,
        *((_DWORD *)v9 - 2),
        a5);
      V_UNLOCK();
      v11 = 125;
LABEL_10:
      v9 += 12;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        190,
        "serdes_wait_status",
        18,
        v11,
        60,
        v22);
    }
    while ( (unsigned __int8 *)v10 != v9 );
LABEL_11:
    if ( v8 )
    {
      usleep(0xF4240u);
      v14 = (unsigned __int8)(v14 - 1);
      if ( v14 )
        continue;
    }
LABEL_13:
    free(ptr);
    return 0;
  }
  free(ptr);
  return 22;
}
