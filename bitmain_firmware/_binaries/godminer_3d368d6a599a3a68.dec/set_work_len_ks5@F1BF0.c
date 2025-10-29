int __fastcall set_work_len_ks5(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  _DWORD v5[2]; // [sp+10h] [bp-1000h] BYREF
  __int64 v6; // [sp+18h] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_ks5_2382/backend_ks5_2382.c",
    192,
    "set_work_len_ks5",
    16,
    361,
    40,
    v5);
  v5[1] = 0;
  v5[0] = 47;
  v6 = 0;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  WORD1(v6) = 80;
  LOBYTE(v6) = 1;
  v3(a1, v5);
  usleep(0x2710u);
  return 0;
}
