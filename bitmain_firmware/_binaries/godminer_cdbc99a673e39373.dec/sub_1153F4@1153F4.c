int __fastcall sub_1153F4(unsigned __int8 a1, int a2, char a3, char *a4, int a5)
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
  int v19; // r0
  int v20; // r5
  int v21; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  __int64 v27; // [sp+18h] [bp-1024h] BYREF
  __int64 v28; // [sp+20h] [bp-101Ch]
  _WORD v29[8]; // [sp+28h] [bp-1014h] BYREF
  _BYTE var1004[4104]; // [sp+38h] [bp-1004h] BYREF

  v27 = 255;
  v28 = 0;
  memset(v29, 0, sizeof(v29));
  LOBYTE(v9) = a5 + 6;
  pthread_mutex_lock(&i2c_mutex_all);
  v10 = *a4;
  v29[0] = -21931;
  LOBYTE(v29[3]) = v10;
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
  LOBYTE(v29[2]) = v12;
  v9 = (unsigned __int8)v9;
  if ( a5 == 2 )
    HIBYTE(v29[3]) = v10;
  HIBYTE(v29[1]) = 50;
  if ( a5 == 2 )
    v12 = v11;
  v13 = &v29[1];
  HIBYTE(v29[2]) = a3;
  LOBYTE(v29[1]) = a5 + 6;
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
    if ( (_WORD *)((char *)&v29[2] + a5 + 1) == v13 )
      break;
    v17 = *((unsigned __int8 *)v13 + 1);
    v13 = (_WORD *)((char *)v13 + 1);
    v9 = v17;
  }
  *((_BYTE *)v29 + v15) = HIBYTE(v16);
  v18 = g_bitmain_pic_state[2 * a1];
  *((_BYTE *)v29 + v14) = v16;
  v19 = iic_write(v18, (int)v29, v11);
  if ( v19 == v12 )
  {
    usleep((__useconds_t)"nixDatagram15set_nonblocking17h4ff315a764057036E");
    v23 = g_bitmain_pic_state[2 * a1];
    v27 = 0;
    v28 = 0;
    v24 = iic_read(v23, (int)&v27, 5);
    if ( v24 == 5 )
    {
      if ( BYTE1(v27) != 50 || (v20 = BYTE2(v27), BYTE2(v27) != 1) )
      {
        V_LOCK(5);
        v20 = 0;
        v25 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v25);
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
      V_LOCK(v24);
      v20 = 1;
      v26 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v26);
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
    V_LOCK(v19);
    v20 = 1;
    v21 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v21);
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
  return v20;
}
