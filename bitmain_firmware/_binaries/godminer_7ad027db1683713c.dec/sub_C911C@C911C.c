int __fastcall sub_C911C(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r4
  char v7; // r9
  int v8; // r10
  _DWORD *v9; // r4
  int v10; // r6
  int v12; // [sp+4h] [bp-1088h]
  _DWORD *src; // [sp+44h] [bp-1048h]
  int n; // [sp+4Ch] [bp-1040h]
  int v16; // [sp+54h] [bp-1038h] BYREF
  __int64 v17; // [sp+58h] [bp-1034h] BYREF
  __int64 v18; // [sp+60h] [bp-102Ch]
  _DWORD v19[7]; // [sp+68h] [bp-1024h] BYREF
  int v20; // [sp+84h] [bp-1008h]
  char v21[4100]; // [sp+88h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 400);
  if ( a2 == 255 )
    v4 *= 16;
  v7 = a2;
  v16 = 0;
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_core_status_ETH", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_get_core_status_ETH",
    31,
    1372,
    20,
    v21);
  v17 = 0;
  v18 = 1;
  n = 12 * v4;
  WORD1(v18) = a3;
  BYTE4(v18) = v7;
  src = calloc(12 * v4, 1u);
  (*(void (__fastcall **)(int, __int64 *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 276))(
    a1,
    &v17,
    v4,
    src,
    &v16,
    v12,
    2000,
    0);
  v8 = v16;
  if ( v16 > 0 )
  {
    v9 = src;
    v10 = 0;
    do
    {
      V_LOCK();
      ++v10;
      v9 += 3;
      V_INT((int)v19, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v21,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        *((unsigned __int8 *)v9 - 8),
        *((unsigned __int8 *)v9 - 4),
        *((unsigned __int16 *)v9 - 3),
        *(v9 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_get_core_status_ETH",
        31,
        1384,
        20,
        v21);
      v8 = v16;
    }
    while ( v16 > v10 );
  }
  if ( a4 )
    memcpy(a4, src, n);
  free(src);
  return v8;
}
