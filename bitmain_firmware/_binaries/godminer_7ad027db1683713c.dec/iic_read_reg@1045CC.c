int __fastcall iic_read_reg(int a1, _BYTE *a2, size_t a3, char *a4, int a5)
{
  char *v9; // r4
  char *v10; // r10
  char *v11; // r1
  char v13; // [sp+1Fh] [bp-1805h] BYREF
  char v14[2048]; // [sp+20h] [bp-1804h] BYREF
  char var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_2E871C) )
  {
    strcpy(v14, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
      191,
      "iic_read_reg",
      12,
      164,
      100,
      var1004);
    return -4;
  }
  else
  {
    if ( a5 )
    {
      v9 = a4;
      v10 = &a4[a5];
      do
      {
        while ( 1 )
        {
          v13 = *a2 + (_BYTE)v9 - (_BYTE)a4;
          if ( i2c_write(a1, (int)&v13, a3) == a3 )
            break;
          ++v9;
          strcpy(v14, "failed to write i2c reg\n");
          V_LOCK();
          logfmt_raw(var1004, 0x1000u, 0, v14);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_iic.c",
            191,
            "iic_read_reg",
            12,
            175,
            100,
            var1004);
          if ( v9 == v10 )
            goto LABEL_7;
        }
        v11 = v9++;
        i2c_read(a1, v11, a3);
      }
      while ( v9 != v10 );
    }
LABEL_7:
    pthread_mutex_unlock(&stru_2E871C);
    return a5;
  }
}
