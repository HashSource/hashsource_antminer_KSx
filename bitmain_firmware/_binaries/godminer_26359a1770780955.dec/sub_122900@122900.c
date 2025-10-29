int __fastcall sub_122900(unsigned __int8 a1, char a2, _BYTE *a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  char v15; // r3
  _BYTE v16[9]; // [sp+1Ch] [bp-101Ch] BYREF
  __int64 v17; // [sp+28h] [bp-1010h] BYREF
  __int64 v18; // [sp+30h] [bp-1008h]
  _BYTE v19[4096]; // [sp+38h] [bp-1000h] BYREF

  memset(v16, 0, sizeof(v16));
  v17 = 255;
  v18 = 0;
  pthread_mutex_lock(&i2c_mutex_all);
  v6 = g_bitmain_pic_state[2 * a1];
  v16[4] = (2 * a2) | 1;
  v16[8] = v16[4] + 92;
  *(_DWORD *)v16 = 839363157;
  v16[7] = (unsigned __int16)(v16[4] + 92) >> 8;
  *(_WORD *)&v16[5] = 545;
  v7 = iic_write(v6, (int)v16, 9);
  if ( v7 == 9 )
  {
    usleep((__useconds_t)"t..LowerHex$u20$for$u20$u8$GT$3fmt17hbb583368dc481f64E");
    v11 = g_bitmain_pic_state[2 * a1];
    v17 = 0;
    v18 = 0;
    v12 = iic_read(v11, (int)&v17, 5);
    if ( v12 == 5 )
    {
      if ( BYTE1(v17) == 50 && (v9 = BYTE2(v17), BYTE2(v17) == 1) )
      {
        v15 = BYTE4(v17);
        *a3 = BYTE3(v17);
        a3[1] = v15;
      }
      else
      {
        V_LOCK(5);
        v9 = 0;
        v13 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/isl68127.c",
          186,
          "read_dc_dc",
          10,
          125,
          100,
          v19);
      }
    }
    else
    {
      V_LOCK(v12);
      v14 = logfmt_raw((int)v19, 0x1000u);
      v9 = 1;
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/isl68127.c",
        186,
        "read_dc_dc",
        10,
        118,
        100,
        v19);
    }
  }
  else
  {
    V_LOCK(v7);
    v8 = logfmt_raw((int)v19, 0x1000u);
    v9 = 1;
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/isl68127.c",
      186,
      "read_dc_dc",
      10,
      110,
      100,
      v19);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v9;
}
