int __fastcall open_miner_by_work_num(int a1)
{
  char v2; // r4
  char *v3; // r0
  _QWORD *v4; // r11
  char *v5; // r6
  _DWORD *v6; // r5
  char *v7; // r9
  int v8; // r1
  _QWORD *v10; // [sp+10h] [bp-144Ch]
  void *v11; // [sp+14h] [bp-1448h]
  _BYTE v12[140]; // [sp+1Ch] [bp-1440h] BYREF
  char dest[5040]; // [sp+A8h] [bp-13B4h] BYREF
  int v14; // [sp+1458h] [bp-4h] BYREF

  V_LOCK();
  logfmt_raw(dest, 0x1000u, 0, "%s...", "open_miner_by_work_num");
  V_UNLOCK();
  v2 = 0;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    187,
    "open_miner_by_work_num",
    22,
    663,
    20,
    dest);
  memcpy(dest, &unk_2802B4, sizeof(dest));
  v3 = (char *)calloc(1u, 0xD8u);
  v4 = v3 + 184;
  v11 = v3 + 40;
  v5 = v3 + 7;
  v10 = v3 + 200;
  v6 = v3;
  v7 = dest;
  do
  {
    v8 = (int)v7;
    v7 += 280;
    str2hex((int)v12, v8, 280);
    memset(v6, 0, 0xB4u);
    memcpy(v11, v12, 0x8Cu);
    *++v5 = v2;
    *(_DWORD *)(a1 + 468) = 1;
    v6[45] = 22;
    *v4 = -1;
    v4[1] = -1;
    *v10 = -1;
    v10[1] = -1;
    v2 += 2;
    push_work_base(a1, (int)v6);
    usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
  }
  while ( v7 != (char *)&v14 );
  free(v6);
  return 0;
}
