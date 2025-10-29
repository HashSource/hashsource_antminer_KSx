int __fastcall data_dec(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  int *v6; // r3
  int v7; // r2
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 != 1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    V_UNLOCK();
    v6 = &g_zc;
    v7 = 119;
    goto LABEL_4;
  }
  v5 = a2 & 7;
  if ( (a2 & 7) != 0 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, " xxtea input data length %% 8 must be 0, but now is %d", v5);
    V_UNLOCK();
    v6 = &g_zc;
    v7 = 112;
LABEL_4:
    zlog(
      *v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/common/general/xxtea.c",
      166,
      "data_dec",
      8,
      v7,
      100,
      v9);
    return 0;
  }
  xxtea_decode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
  return 1;
}
