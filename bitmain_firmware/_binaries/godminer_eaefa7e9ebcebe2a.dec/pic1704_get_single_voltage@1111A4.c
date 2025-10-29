int __fastcall pic1704_get_single_voltage(char a1, _DWORD *a2)
{
  unsigned __int16 v2; // r4
  int result; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r0
  unsigned __int8 *i; // r0
  __int16 v11; // t1
  unsigned __int16 v12; // r8
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // [sp+10h] [bp-181Ch] BYREF
  __int16 v19; // [sp+14h] [bp-1818h]
  unsigned __int8 v21[8]; // [sp+18h] [bp-1814h] BYREF
  int v22; // [sp+20h] [bp-180Ch]
  int v23; // [sp+24h] [bp-1808h]
  char v24[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v25[4100]; // [sp+828h] [bp-1004h] BYREF

  v2 = 0;
  *(_DWORD *)v21 = 255;
  HIBYTE(v22) = a1;
  BYTE2(v22) = 7;
  LOWORD(v22) = 58;
  v23 = 0;
  v18 = 0;
  *(_DWORD *)&v21[3] = 0;
  v19 = 0;
  result = sub_11068C(v22, 0, (int)&v18, v21);
  if ( result )
  {
    v5 = v21[2];
    v6 = v21[0];
    v7 = v21[1];
    if ( v21[2] == 1 && v21[0] > 3u )
    {
      for ( i = &v21[2]; ; ++i )
      {
        v2 += v6;
        LOWORD(v6) = v7;
        LOWORD(v7) = v5;
        if ( i == &v21[v21[0] - 1] )
          break;
        v11 = i[1];
        LOWORD(v5) = v11;
      }
      v12 = __rev16(*(unsigned __int16 *)&v21[v21[0] - 2]);
      v13 = snprintf(v24, 0x800u, "sum1,sum2 = %d,%d", v2, v12);
      V_LOCK(v13);
      v14 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
        186,
        "check_pic_crc",
        13,
        400,
        20,
        v25);
      if ( v2 == v12 )
      {
        v15 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v21[3]);
        *a2 = (unsigned __int16)v15;
        v16 = snprintf(v24, 0x800u, "Received one voltage response: vol = %d.", v15);
        V_LOCK(v16);
        v17 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
          186,
          "pic1704_get_single_voltage",
          26,
          487,
          20,
          v25);
        return 1;
      }
      v6 = v21[0];
      v5 = v21[2];
      v7 = v21[1];
    }
    v8 = snprintf(v24, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v6, v7, v5);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/pic_1704.c",
      186,
      "pic1704_get_single_voltage",
      26,
      483,
      20,
      v25);
    return 1;
  }
  return result;
}
