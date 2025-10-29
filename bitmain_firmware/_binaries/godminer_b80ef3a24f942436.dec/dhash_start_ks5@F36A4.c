int __fastcall dhash_start_ks5(int a1)
{
  int v2; // r0
  int v3; // r3
  int result; // r0
  int v5; // [sp+28h] [bp-1024h] BYREF
  _BYTE v6[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v5, "chain", *(int *)(a1 + 248));
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    187,
    "dhash_start_ks5",
    15,
    428,
    40,
    v6);
  v3 = *(unsigned __int8 *)(a1 + 460);
  result = 0;
  *(_BYTE *)(a1 + 253) = 1;
  if ( !v3 )
    *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 976);
  return result;
}
