int __fastcall tsensor_close(unsigned int a1)
{
  int v2; // r5
  unsigned int v3; // r4
  int v4; // r0
  int v6; // r0
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v9[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( a1 > 0xF )
  {
    v6 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/tsensor/bitmain_tsensor.c",
      193,
      "tsensor_close",
      13,
      91,
      100,
      v9);
    return -2147482111;
  }
  else
  {
    v2 = 68 * a1;
    if ( *((_BYTE *)&unk_306D94 + 68 * a1) )
    {
      v3 = 0;
      do
      {
        v4 = *(_DWORD *)((char *)&unk_306D94 + 8 * v3 + v2 + 8);
        if ( v4 )
          iic_uninit(v4);
        v3 = (unsigned __int8)(v3 + 1);
      }
      while ( *((unsigned __int8 *)&unk_306D94 + v2) > v3 );
    }
    return (int)memset((char *)&unk_306D94 + 68 * a1, 0, 0x44u);
  }
}
