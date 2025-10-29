int __fastcall dhash_start_rvn(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // [sp+28h] [bp-1024h] BYREF
  _BYTE v5[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "dhash_start_rvn",
    15,
    1337,
    40,
    v5);
  result = 0;
  if ( !*(_BYTE *)(a1 + 460) )
    *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 964);
  return result;
}
