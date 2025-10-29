int __fastcall dhash_start_dcr(int a1)
{
  int v2; // r0
  int v3; // r3
  int result; // r0
  int v5; // [sp+28h] [bp-1020h] BYREF
  _BYTE v6[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)&v5, "chain");
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_dcr_1727/backend_dcr_1727.c",
    192,
    "dhash_start_dcr",
    15,
    452,
    40,
    v6);
  sub_D043C(a1);
  v3 = *(unsigned __int8 *)(a1 + 460);
  result = 0;
  *(_BYTE *)(a1 + 253) = 1;
  if ( !v3 )
    *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 964);
  return result;
}
