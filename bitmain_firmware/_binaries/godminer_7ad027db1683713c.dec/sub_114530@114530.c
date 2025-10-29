int __fastcall sub_114530(unsigned __int8 a1, char a2, _BYTE *a3)
{
  int v6; // r0
  int v7; // r4
  int v9; // r0
  char v10; // r3
  _BYTE v11[9]; // [sp+1Ch] [bp-101Ch] BYREF
  __int64 v12; // [sp+28h] [bp-1010h] BYREF
  __int64 v13; // [sp+30h] [bp-1008h]
  char v14[4096]; // [sp+38h] [bp-1000h] BYREF

  memset(v11, 0, sizeof(v11));
  v12 = 255;
  v13 = 0;
  pthread_mutex_lock(&i2c_mutex_all);
  v6 = g_bitmain_pic_state[2 * a1];
  v11[4] = (2 * a2) | 1;
  v11[8] = v11[4] + 92;
  *(_DWORD *)v11 = 839363157;
  v11[7] = (unsigned __int16)(v11[4] + 92) >> 8;
  *(_WORD *)&v11[5] = 545;
  if ( iic_write(v6, (int)v11, 9) == 9 )
  {
    usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
    v9 = g_bitmain_pic_state[2 * a1];
    v12 = 0;
    v13 = 0;
    if ( iic_read(v9, &v12, 5u) == 5 )
    {
      if ( BYTE1(v12) == 50 && (v7 = BYTE2(v12), BYTE2(v12) == 1) )
      {
        v10 = BYTE4(v12);
        *a3 = BYTE3(v12);
        a3[1] = v10;
      }
      else
      {
        V_LOCK();
        v7 = 0;
        logfmt_raw(
          v14,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "read_dc_dc",
          (unsigned __int8)v12,
          BYTE1(v12),
          BYTE2(v12),
          BYTE3(v12));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
          181,
          "read_dc_dc",
          10,
          125,
          100,
          v14);
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s read iic err", "read_dc_dc");
      v7 = 1;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        181,
        "read_dc_dc",
        10,
        118,
        100,
        v14);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s write iic err", "read_dc_dc");
    v7 = 1;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      181,
      "read_dc_dc",
      10,
      110,
      100,
      v14);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v7;
}
