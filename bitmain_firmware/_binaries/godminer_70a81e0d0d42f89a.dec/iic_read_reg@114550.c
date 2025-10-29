int __fastcall iic_read_reg(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v9; // r4
  int v10; // r10
  int v11; // r0
  int v12; // r1
  int v14; // r0
  char v15; // [sp+1Fh] [bp-1805h] BYREF
  char v16[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_30CECC) )
  {
    strcpy(v16, "failed to i2c lock\n");
    V_LOCK(*(_DWORD *)"failed to i2c lock\n");
    v14 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
      196,
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
      v10 = a4 + a5;
      do
      {
        while ( 1 )
        {
          v15 = *a2 + v9 - a4;
          if ( i2c_write(a1, &v15, a3) == a3 )
            break;
          ++v9;
          strcpy(v16, "failed to write i2c reg\n");
          V_LOCK(*(_DWORD *)"i2c reg\n");
          v11 = logfmt_raw((int)var1004, 0x1000u);
          V_UNLOCK(v11);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_iic.c",
            196,
            "iic_read_reg",
            12,
            175,
            100,
            var1004);
          if ( v9 == v10 )
            goto LABEL_7;
        }
        v12 = v9++;
        i2c_read(a1, v12, a3);
      }
      while ( v9 != v10 );
    }
LABEL_7:
    pthread_mutex_unlock(&stru_30CECC);
    return a5;
  }
}
