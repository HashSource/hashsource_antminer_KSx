int __fastcall open_miner_by_work_num(int a1)
{
  int v2; // r0
  char v3; // r4
  char *v4; // r0
  _QWORD *v5; // r11
  char *v6; // r6
  _DWORD *v7; // r5
  int *v8; // r9
  int v9; // r1
  _QWORD *v11; // [sp+10h] [bp-144Ch]
  void *v12; // [sp+14h] [bp-1448h]
  _BYTE v13[140]; // [sp+1Ch] [bp-1440h] BYREF
  _BYTE dest[5040]; // [sp+A8h] [bp-13B4h] BYREF
  int v15; // [sp+1458h] [bp-4h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)dest, 0x1000u);
  V_UNLOCK(v2);
  v3 = 0;
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
  memcpy(dest, &unk_2A0600, sizeof(dest));
  v4 = (char *)calloc(1u, 0xD8u);
  v5 = v4 + 184;
  v12 = v4 + 40;
  v6 = v4 + 7;
  v11 = v4 + 200;
  v7 = v4;
  v8 = (int *)dest;
  do
  {
    v9 = (int)v8;
    v8 += 70;
    str2hex((int)v13, v9, 280);
    memset(v7, 0, 0xB4u);
    memcpy(v12, v13, 0x8Cu);
    *++v6 = v3;
    *(_DWORD *)(a1 + 492) = 1;
    v7[45] = 22;
    *v5 = -1;
    v5[1] = -1;
    *v11 = -1;
    v11[1] = -1;
    v3 += 2;
    push_work_base(a1, v7);
    usleep((__useconds_t)"ersion12VersionIndex5index17hb28023ac069c5199E");
  }
  while ( v8 != &v15 );
  free(v7);
  return 0;
}
