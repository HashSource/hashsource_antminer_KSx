int __fastcall sub_110594(int a1, int a2, int a3, unsigned __int8 *a4)
{
  int v5; // lr
  __int16 v7; // r3
  char v8; // r2
  __int16 v9; // r3
  unsigned int v10; // r11
  int v11; // r5
  int v12; // r1
  unsigned __int8 *v13; // r2
  int v14; // r1
  char v15; // t1
  int v16; // r0
  int v17; // r0
  int v18; // r3
  int v19; // r6
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  char v29; // [sp+10h] [bp-1824h]
  int v30; // [sp+14h] [bp-1820h]
  int v31; // [sp+18h] [bp-181Ch]
  char v33[2048]; // [sp+30h] [bp-1804h] BYREF
  _BYTE v34[4100]; // [sp+830h] [bp-1004h] BYREF

  v5 = BYTE1(a1) + 4;
  *(_WORD *)a3 = -21931;
  v7 = (unsigned __int8)(BYTE1(a1) + 4);
  v8 = v7 + a1;
  *(_BYTE *)(a3 + 2) = v7;
  v30 = (unsigned __int8)a1;
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
  v31 = (unsigned __int8)(BYTE1(a1) + 6);
  v29 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    iic_write(g_bitmain_pic_state[2 * v11], a3, v31);
    usleep(0x2710u);
    iic_read(g_bitmain_pic_state[2 * v11], a4, v10);
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v10 == 2 )
      break;
    if ( v10 > 2 )
    {
      if ( a4[1] == v30 && *a4 == v10 )
      {
        v25 = snprintf(v33, 0x800u, "PICCMD %d passed on Chain[%d]!", v30, v11);
        v19 = 1;
        V_LOCK(v25);
        v26 = logfmt_raw((int)v34, 0x1000u);
        V_UNLOCK(v26);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
          186,
          "pic_process_cmd",
          15,
          112,
          20,
          v34);
        return v19;
      }
      v16 = snprintf(v33, 0x800u, "PICCMD %d failed on Chain[%d]!", v30, v11);
      V_LOCK(v16);
      v17 = logfmt_raw((int)v34, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
        186,
        "pic_process_cmd",
        15,
        117,
        20,
        v34);
      goto LABEL_15;
    }
    v23 = snprintf(v33, 0x800u, "ret_len = %d should never happen!!", v10);
    V_LOCK(v23);
    v24 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
      186,
      "pic_process_cmd",
      15,
      122,
      20,
      v34);
LABEL_16:
    v18 = (unsigned __int8)(v29 - 1);
    v29 = v18;
    if ( !v18 )
      return 0;
  }
  if ( *a4 != v30 || a4[1] != 1 )
  {
    v21 = snprintf(v33, 0x800u, "PICCMD %d failed on Chain[%d]!", v30, v11);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
      186,
      "pic_process_cmd",
      15,
      104,
      20,
      v34);
LABEL_15:
    sleep(1u);
    goto LABEL_16;
  }
  v19 = 1;
  v27 = snprintf(v33, 0x800u, "PICCMD %d passed on Chain[%d]!", v30, v11);
  V_LOCK(v27);
  v28 = logfmt_raw((int)v34, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
    186,
    "pic_process_cmd",
    15,
    99,
    20,
    v34);
  return v19;
}
