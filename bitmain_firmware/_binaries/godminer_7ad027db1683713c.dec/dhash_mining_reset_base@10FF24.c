int __fastcall dhash_mining_reset_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  unsigned int v4; // r0
  int (**v5)(); // r0
  unsigned int v6; // r0
  int (**v7)(); // r0
  int v8; // r0
  int (**v9)(); // r0
  _DWORD v11[7]; // [sp+28h] [bp-1020h] BYREF
  int v12; // [sp+44h] [bp-1004h]
  char v13[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 232));
  logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, "dhash mining reset!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_base.c",
    166,
    "dhash_mining_reset_base",
    23,
    506,
    80,
    v13);
  v2 = (*(int (__fastcall **)(int))(a1 + 4))(a1);
  *(_BYTE *)(a1 + 237) = 0;
  *(_BYTE *)(a1 + 238) = 0;
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[7])(*(_DWORD *)(a1 + 228));
  v4 = sleep(0xAu);
  v5 = dev_ctrl(v4);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v5[6])(
    *(_DWORD *)(a1 + 228),
    *(_DWORD *)(a1 + 944),
    *(_DWORD *)(a1 + 968));
  v6 = sleep(1u);
  v7 = dev_ctrl(v6);
  v8 = ((int (__fastcall *)(_DWORD))v7[11])(*(_DWORD *)(a1 + 228));
  v9 = dev_ctrl(v8);
  ((void (__fastcall *)(_DWORD))v9[1])(*(_DWORD *)(a1 + 228));
  return (*(int (__fastcall **)(int))(a1 + 16))(a1);
}
