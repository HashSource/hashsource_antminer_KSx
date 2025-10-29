int __fastcall tsensor_close(unsigned int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r4
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v7[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      188,
      "tsensor_close",
      13,
      91,
      100,
      v7);
    return -2147482111;
  }
  else
  {
    v2 = 17 * a1;
    if ( LOBYTE(dword_2E8C48[17 * a1]) )
    {
      v3 = 0;
      do
      {
        v4 = dword_2E8C48[2 * v3 + 2 + v2];
        if ( v4 )
          iic_uninit(v4);
        v3 = (unsigned __int8)(v3 + 1);
      }
      while ( LOBYTE(dword_2E8C48[v2]) > v3 );
    }
    return (int)memset(&dword_2E8C48[17 * a1], 0, 0x44u);
  }
}
