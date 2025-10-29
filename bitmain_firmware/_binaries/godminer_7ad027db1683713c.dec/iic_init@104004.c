int __fastcall iic_init(int *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r5
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_2E871C) )
  {
    v4 = -4;
    strcpy(s, "failed to iic lock\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_init",
      8,
      32,
      100,
      v7);
  }
  else if ( a1 )
  {
    v2 = *a1;
    if ( *(_QWORD *)a1 == __PAIR64__((Elf32_Sym *)((char *)&stru_20000.st_name + 1), 0) )
    {
      v4 = i2c_sim_init();
      if ( v4 < 0 )
      {
        strcpy(s, "failed to i2c_sim_init\n");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, v2, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          51,
          100,
          v7);
      }
    }
    else
    {
      v3 = i2c_init("/dev/i2c-0");
      v4 = v3;
      if ( v3 < 0 )
      {
        v4 = -1;
        strcpy(s, "failed to i2c_init\n");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          61,
          100,
          v7);
      }
      else if ( i2c_ioctl(v3, 1795, (2 * *((unsigned __int8 *)a1 + 7)) | (16 * *((unsigned __int8 *)a1 + 6))) )
      {
        v4 = -1;
        strcpy(s, "failed to i2c_ioctl\n");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          68,
          100,
          v7);
      }
      else
      {
        snprintf(
          s,
          0x800u,
          "i2c chain = %d, master = 0x%x, slave = 0x%x\n",
          *a1,
          *((unsigned __int16 *)a1 + 2),
          *((unsigned __int8 *)a1 + 7) | (8 * *((unsigned __int8 *)a1 + 6)));
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
          191,
          "iic_init",
          8,
          74,
          20,
          v7);
      }
    }
    pthread_mutex_unlock(&stru_2E871C);
  }
  else
  {
    pthread_mutex_unlock(&stru_2E871C);
    v4 = -3;
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_init",
      8,
      39,
      100,
      v7);
  }
  return v4;
}
