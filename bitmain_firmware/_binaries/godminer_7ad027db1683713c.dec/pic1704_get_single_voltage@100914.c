int __fastcall pic1704_get_single_voltage(char a1, _DWORD *a2)
{
  unsigned __int16 v2; // r4
  int result; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r1
  unsigned __int8 *i; // r0
  __int16 v9; // t1
  unsigned __int16 v10; // r8
  int v11; // r3
  int v12; // [sp+10h] [bp-181Ch] BYREF
  __int16 v13; // [sp+14h] [bp-1818h]
  unsigned __int8 v15[8]; // [sp+18h] [bp-1814h] BYREF
  int v16; // [sp+20h] [bp-180Ch]
  int v17; // [sp+24h] [bp-1808h]
  char v18[2040]; // [sp+28h] [bp-1804h] BYREF
  char v19[4100]; // [sp+828h] [bp-1004h] BYREF

  v2 = 0;
  *(_DWORD *)v15 = 255;
  HIBYTE(v16) = a1;
  BYTE2(v16) = 7;
  LOWORD(v16) = 58;
  v17 = 0;
  v12 = 0;
  *(_DWORD *)&v15[3] = 0;
  v13 = 0;
  result = sub_FFDAC(v16, 0, (int)&v12, v15);
  if ( result )
  {
    v5 = v15[2];
    v6 = v15[0];
    v7 = v15[1];
    if ( v15[2] == 1 && v15[0] > 3u )
    {
      for ( i = &v15[2]; ; ++i )
      {
        v2 += v6;
        LOWORD(v6) = v7;
        LOWORD(v7) = v5;
        if ( i == &v15[v15[0] - 1] )
          break;
        v9 = i[1];
        LOWORD(v5) = v9;
      }
      v10 = __rev16(*(unsigned __int16 *)&v15[v15[0] - 2]);
      snprintf(v18, 0x800u, "sum1,sum2 = %d,%d", v2, v10);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
        181,
        "check_pic_crc",
        13,
        399,
        20,
        v19);
      if ( v2 == v10 )
      {
        v11 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v15[3]);
        *a2 = (unsigned __int16)v11;
        snprintf(v18, 0x800u, "Received one voltage response: vol = %d.", v11);
        V_LOCK();
        logfmt_raw(v19, 0x1000u, 0, v18);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
          181,
          "pic1704_get_single_voltage",
          26,
          486,
          20,
          v19);
        return 1;
      }
      v6 = v15[0];
      v5 = v15[2];
      v7 = v15[1];
    }
    snprintf(v18, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v6, v7, v5);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, v18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      181,
      "pic1704_get_single_voltage",
      26,
      482,
      20,
      v19);
    return 1;
  }
  return result;
}
