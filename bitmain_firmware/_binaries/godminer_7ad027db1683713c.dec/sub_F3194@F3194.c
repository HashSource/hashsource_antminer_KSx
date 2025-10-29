int __fastcall sub_F3194(int a1, char a2, int a3, __int16 a4, void *a5)
{
  int v5; // r5
  int v6; // r10
  char v7; // r9
  int v9; // r2
  _DWORD *v11; // r0
  void (__fastcall *v12)(int, __int64 *, int, _DWORD *, int *, int, int, _DWORD); // r9
  int v13; // r10
  _DWORD *v14; // r8
  int v16; // [sp+4h] [bp-1088h]
  _DWORD *src; // [sp+48h] [bp-1044h]
  size_t nmemb; // [sp+4Ch] [bp-1040h]
  int v20; // [sp+54h] [bp-1038h] BYREF
  __int64 v21; // [sp+58h] [bp-1034h] BYREF
  __int64 v22; // [sp+60h] [bp-102Ch]
  _DWORD v23[7]; // [sp+68h] [bp-1024h] BYREF
  int v24; // [sp+84h] [bp-1008h]
  char v25[4088]; // [sp+88h] [bp-1004h] BYREF

  v5 = 0;
  if ( a3 == 255 )
    v6 = 8;
  else
    v6 = 1;
  v7 = a3;
  if ( a3 == 255 )
    v9 = 96;
  else
    v9 = 12;
  nmemb = v9;
  v20 = 0;
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_single_chip_core_status_RVN", v6);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_get_single_chip_core_status_RVN",
    43,
    1472,
    20,
    v25);
  v21 = 0;
  v22 = 0;
  BYTE1(v22) = a2;
  v11 = calloc(nmemb, 1u);
  BYTE4(v22) = v7;
  v12 = *(void (__fastcall **)(int, __int64 *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 276);
  WORD1(v22) = a4;
  src = v11;
  v12(a1, &v21, v6, v11, &v20, v16, 2000, 0);
  v13 = v20;
  if ( v20 > 0 )
  {
    v14 = src;
    do
    {
      V_LOCK();
      ++v5;
      v14 += 3;
      V_INT((int)v23, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v25,
        0x1000u,
        0,
        v24,
        v23[0],
        v23[1],
        v23[2],
        v23[3],
        v23[4],
        v23[5],
        v23[6],
        v24,
        "[Core State] asic %02x core %02x reg %04x state %08x",
        *((unsigned __int8 *)v14 - 8),
        *((unsigned __int8 *)v14 - 4),
        *((unsigned __int16 *)v14 - 3),
        *(v14 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_get_single_chip_core_status_RVN",
        43,
        1484,
        20,
        v25);
      v13 = v20;
    }
    while ( v20 > v5 );
  }
  if ( a5 )
    memcpy(a5, src, nmemb);
  free(src);
  return v13;
}
