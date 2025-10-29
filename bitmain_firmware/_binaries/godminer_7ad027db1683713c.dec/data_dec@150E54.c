int __fastcall data_dec(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 != 1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/xxtea.c",
      166,
      "data_dec",
      8,
      119,
      100,
      v7);
    return 0;
  }
  v5 = a2 & 7;
  if ( (a2 & 7) != 0 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, " xxtea input data length %% 8 must be 0, but now is %d", v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/xxtea.c",
      166,
      "data_dec",
      8,
      112,
      100,
      v7);
    return 0;
  }
  xxtea_decode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
  return 1;
}
