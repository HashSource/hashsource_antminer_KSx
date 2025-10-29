int __fastcall top_init_rvn(int a1)
{
  int v2; // r2
  int v3; // r3
  void (__fastcall *v4)(int, _DWORD); // r3
  int result; // r0
  _DWORD v6[7]; // [sp+28h] [bp-1044h] BYREF
  int v7; // [sp+44h] [bp-1028h]
  _DWORD v8[7]; // [sp+48h] [bp-1024h] BYREF
  int v9; // [sp+64h] [bp-1008h]
  char v10[4100]; // [sp+68h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 232));
  logfmt_raw(v10, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s start", "top_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "top_init_rvn",
    12,
    2044,
    60,
    v10);
  if ( sub_ECF18((int *)a1) )
  {
    V_LOCK();
    V_INT((int)v8, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v9,
      v8[0],
      v8[1],
      v8[2],
      v8[3],
      v8[4],
      v8[5],
      v8[6],
      v9,
      "check asic num failed",
      "top_init_rvn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      187,
      "top_init_rvn",
      12,
      2048,
      100,
      v10);
    return 12;
  }
  else
  {
    set_reset_rvn(a1);
    set_core_reset_rvn(a1);
    set_inactive_rvn(a1);
    set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 408));
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 464) - 1;
    do
      *(_BYTE *)++v3 = v2++;
    while ( v2 != 8 );
    v4 = *(void (__fastcall **)(int, _DWORD))(a1 + 240);
    *(_DWORD *)(a1 + 404) = 1;
    v4(a1, *(_DWORD *)(a1 + 464));
    sub_ECF18((int *)a1);
    result = 0;
    if ( !*(_BYTE *)(a1 + 436) )
      *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  }
  return result;
}
