int __fastcall iic_init(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v13[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_311394) )
  {
    v3 = -4;
    strcpy(s, "failed to iic lock\n");
    V_LOCK(*(_DWORD *)"failed to iic lock\n");
    v10 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_init",
      8,
      32,
      100,
      v13);
  }
  else if ( a1 )
  {
    if ( !*(_DWORD *)a1 && *(_DWORD *)(a1 + 4) == 131073 )
    {
      v3 = i2c_sim_init();
      if ( v3 < 0 )
      {
        strcpy(s, "failed to i2c_sim_init\n");
        V_LOCK(*(_DWORD *)"m_init\n");
        v9 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v9);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          51,
          100,
          v13);
      }
    }
    else
    {
      v2 = i2c_init("/dev/i2c-0");
      v3 = v2;
      if ( v2 < 0 )
      {
        v3 = -1;
        strcpy(s, "failed to i2c_init\n");
        V_LOCK(*(_DWORD *)"failed to i2c_init\n");
        v8 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          61,
          100,
          v13);
      }
      else if ( i2c_ioctl(v2, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        v3 = -1;
        strcpy(s, "failed to i2c_ioctl\n");
        V_LOCK(*(_DWORD *)"ctl\n");
        v7 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v7);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          68,
          100,
          v13);
      }
      else
      {
        v4 = snprintf(
               s,
               0x800u,
               "i2c chain = %d, master = 0x%x, slave = 0x%x\n",
               *(_DWORD *)a1,
               *(unsigned __int16 *)(a1 + 4),
               *(unsigned __int8 *)(a1 + 7) | (8 * *(unsigned __int8 *)(a1 + 6)));
        V_LOCK(v4);
        v5 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v5);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          74,
          20,
          v13);
      }
    }
    pthread_mutex_unlock(&stru_311394);
  }
  else
  {
    pthread_mutex_unlock(&stru_311394);
    v3 = -3;
    strcpy(s, "bad param\n");
    V_LOCK(*(_DWORD *)"bad param\n");
    v11 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_init",
      8,
      39,
      100,
      v13);
  }
  return v3;
}
