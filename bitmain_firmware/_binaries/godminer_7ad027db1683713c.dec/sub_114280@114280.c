int __fastcall sub_114280(unsigned __int8 a1, int a2, char a3, char *a4, int a5)
{
  __int16 v9; // r4
  char v10; // r3
  int v11; // r2
  int v12; // r6
  _WORD *v13; // r1
  int v14; // r12
  int v15; // lr
  __int16 v16; // r3
  __int16 v17; // t1
  int v18; // r0
  int v19; // r5
  int v21; // r0
  __int64 v22; // [sp+18h] [bp-1024h] BYREF
  __int64 v23; // [sp+20h] [bp-101Ch]
  _WORD v24[8]; // [sp+28h] [bp-1014h] BYREF
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF

  v22 = 255;
  v23 = 0;
  memset(v24, 0, sizeof(v24));
  LOBYTE(v9) = a5 + 6;
  pthread_mutex_lock(&i2c_mutex_all);
  v10 = *a4;
  v24[0] = -21931;
  LOBYTE(v24[3]) = v10;
  if ( a5 == 2 )
  {
    v11 = 10;
    v10 = a4[1];
  }
  else
  {
    v11 = 9;
  }
  v12 = 2 * a2;
  LOBYTE(v24[2]) = v12;
  v9 = (unsigned __int8)v9;
  if ( a5 == 2 )
    HIBYTE(v24[3]) = v10;
  HIBYTE(v24[1]) = 50;
  if ( a5 == 2 )
    v12 = v11;
  v13 = &v24[1];
  HIBYTE(v24[2]) = a3;
  LOBYTE(v24[1]) = a5 + 6;
  if ( a5 == 2 )
  {
    v14 = 9;
    v15 = 8;
  }
  else
  {
    v14 = 8;
    v12 = v11;
    v15 = 7;
  }
  v16 = 0;
  while ( 1 )
  {
    v16 += v9;
    if ( (_WORD *)((char *)&v24[2] + a5 + 1) == v13 )
      break;
    v17 = *((unsigned __int8 *)v13 + 1);
    v13 = (_WORD *)((char *)v13 + 1);
    v9 = v17;
  }
  *((_BYTE *)v24 + v15) = HIBYTE(v16);
  v18 = g_bitmain_pic_state[2 * a1];
  *((_BYTE *)v24 + v14) = v16;
  if ( iic_write(v18, (int)v24, v11) == v12 )
  {
    usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
    v21 = g_bitmain_pic_state[2 * a1];
    v22 = 0;
    v23 = 0;
    if ( iic_read(v21, &v22, 5u) == 5 )
    {
      if ( BYTE1(v22) != 50 || (v19 = BYTE2(v22), BYTE2(v22) != 1) )
      {
        V_LOCK();
        v19 = 0;
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "write_dc_dc",
          (unsigned __int8)v22,
          BYTE1(v22),
          BYTE2(v22),
          BYTE3(v22));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
          181,
          "write_dc_dc",
          11,
          75,
          100,
          var1004);
      }
    }
    else
    {
      V_LOCK();
      v19 = 1;
      logfmt_raw(var1004, 0x1000u, 0, "%s read iic err", "write_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        181,
        "write_dc_dc",
        11,
        68,
        100,
        var1004);
    }
  }
  else
  {
    V_LOCK();
    v19 = 1;
    logfmt_raw(var1004, 0x1000u, 0, "%s write iic err", "write_dc_dc");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      181,
      "write_dc_dc",
      11,
      61,
      100,
      var1004);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v19;
}
