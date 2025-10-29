int __fastcall sub_FFDAC(int a1, int a2, int a3, unsigned __int8 *a4)
{
  int v5; // lr
  __int16 v7; // r3
  char v8; // r2
  __int16 v9; // r3
  size_t v10; // r11
  int v11; // r5
  int v12; // r1
  unsigned __int8 *v13; // r2
  int v14; // r1
  char v15; // t1
  int v16; // r3
  int v17; // r6
  char v19; // [sp+10h] [bp-1824h]
  int v20; // [sp+14h] [bp-1820h]
  int v21; // [sp+18h] [bp-181Ch]
  char v23[2048]; // [sp+30h] [bp-1804h] BYREF
  char v24[4100]; // [sp+830h] [bp-1004h] BYREF

  v5 = BYTE1(a1) + 4;
  *(_WORD *)a3 = -21931;
  v7 = (unsigned __int8)(BYTE1(a1) + 4);
  v8 = v7 + a1;
  *(_BYTE *)(a3 + 2) = v7;
  v20 = (unsigned __int8)a1;
  *(_BYTE *)(a3 + 3) = a1;
  v9 = v7 + (unsigned __int8)a1;
  v10 = BYTE2(a1);
  v11 = HIBYTE(a1);
  if ( a2 )
  {
    if ( BYTE1(a1) )
    {
      v13 = (unsigned __int8 *)(a2 - 1);
      v14 = a3 + 3;
      do
      {
        v15 = *++v13;
        *(_BYTE *)++v14 = v15;
        v9 += *v13;
      }
      while ( v13 != (unsigned __int8 *)(a2 + (unsigned __int8)(BYTE1(a1) - 1)) );
      v12 = BYTE1(a1) + 5;
    }
    else
    {
      v12 = 5;
      v5 = 4;
    }
    *(_BYTE *)(a3 + v5) = HIBYTE(v9);
    *(_BYTE *)(a3 + v12) = v9;
  }
  else
  {
    *(_BYTE *)(a3 + 5) = v8;
    *(_BYTE *)(a3 + 4) = HIBYTE(v9);
  }
  v21 = (unsigned __int8)(BYTE1(a1) + 6);
  v19 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    iic_write(g_bitmain_pic_state[2 * v11], a3, v21);
    usleep(0x2710u);
    iic_read(g_bitmain_pic_state[2 * v11], a4, v10);
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v10 == 2 )
      break;
    if ( v10 > 2 )
    {
      if ( a4[1] == v20 && *a4 == v10 )
      {
        snprintf(v23, 0x800u, "PICCMD %d passed on Chain[%d]!", v20, v11);
        v17 = 1;
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          181,
          "pic_process_cmd",
          15,
          111,
          20,
          v24);
        return v17;
      }
      snprintf(v23, 0x800u, "PICCMD %d failed on Chain[%d]!", v20, v11);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "pic_process_cmd",
        15,
        116,
        20,
        v24);
      goto LABEL_15;
    }
    snprintf(v23, 0x800u, "ret_len = %d should never happen!!", v10);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic_process_cmd",
      15,
      121,
      20,
      v24);
LABEL_16:
    v16 = (unsigned __int8)(v19 - 1);
    v19 = v16;
    if ( !v16 )
      return 0;
  }
  if ( *a4 != v20 || a4[1] != 1 )
  {
    snprintf(v23, 0x800u, "PICCMD %d failed on Chain[%d]!", v20, v11);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic_process_cmd",
      15,
      103,
      20,
      v24);
LABEL_15:
    sleep(1u);
    goto LABEL_16;
  }
  v17 = 1;
  snprintf(v23, 0x800u, "PICCMD %d passed on Chain[%d]!", v20, v11);
  V_LOCK();
  logfmt_raw(v24, 0x1000u, 0, v23);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
    181,
    "pic_process_cmd",
    15,
    98,
    20,
    v24);
  return v17;
}
