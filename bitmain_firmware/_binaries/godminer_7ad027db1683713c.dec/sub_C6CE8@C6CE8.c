int __fastcall sub_C6CE8(int a1, int a2)
{
  int v2; // r5
  unsigned __int16 *v5; // r6
  unsigned int v6; // r9
  char *v7; // r5
  unsigned __int8 *v8; // r8
  int v9; // r6
  int v11; // r2
  int result; // r0
  int v13; // [sp+4h] [bp-1608h]
  int v14; // [sp+8h] [bp-1604h]
  int v15; // [sp+54h] [bp-15B8h]
  int v16; // [sp+60h] [bp-15ACh]
  unsigned __int16 *ptr; // [sp+64h] [bp-15A8h]
  unsigned int v18; // [sp+68h] [bp-15A4h]
  int v20; // [sp+74h] [bp-1598h] BYREF
  _QWORD v21[2]; // [sp+78h] [bp-1594h] BYREF
  _DWORD v22[2]; // [sp+88h] [bp-1584h] BYREF
  __int64 v23; // [sp+90h] [bp-157Ch]
  int v24; // [sp+98h] [bp-1574h]
  int v25; // [sp+9Ch] [bp-1570h]
  int v26; // [sp+A0h] [bp-156Ch]
  int v27; // [sp+A4h] [bp-1568h]
  _DWORD v28[7]; // [sp+A8h] [bp-1564h] BYREF
  int v29; // [sp+C4h] [bp-1548h]
  _DWORD v30[2]; // [sp+C8h] [bp-1544h] BYREF
  __int64 v31; // [sp+D0h] [bp-153Ch]
  int v32; // [sp+D8h] [bp-1534h]
  int v33; // [sp+DCh] [bp-1530h]
  int v34; // [sp+E0h] [bp-152Ch]
  int v35; // [sp+E4h] [bp-1528h]
  __int64 v36; // [sp+E8h] [bp-1524h] BYREF
  int v37; // [sp+F0h] [bp-151Ch]
  int v38; // [sp+F4h] [bp-1518h]
  int v39; // [sp+F8h] [bp-1514h]
  int v40; // [sp+FCh] [bp-1510h]
  int v41; // [sp+100h] [bp-150Ch]
  int v42; // [sp+104h] [bp-1508h]
  _BYTE s[256]; // [sp+108h] [bp-1504h] BYREF
  char v44[1024]; // [sp+208h] [bp-1404h] BYREF
  char v45[4100]; // [sp+608h] [bp-1004h] BYREF

  v2 = 0;
  v20 = 0;
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "%s chip_no %d", "ChipSetting_get_addr_DCR_1727", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_get_addr_DCR_1727",
    29,
    50,
    20,
    v45);
  v21[0] = 0;
  v21[1] = 1;
  ptr = (unsigned __int16 *)calloc(12 * a2, 1u);
  (*(void (__fastcall **)(int, _QWORD *, int, unsigned __int16 *, int *, int, int, _DWORD))(a1 + 268))(
    a1,
    v21,
    a2,
    ptr,
    &v20,
    v13,
    3000,
    0);
  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 232));
  logfmt_raw(
    v45,
    0x1000u,
    0,
    v27,
    v22[0],
    v22[1],
    v23,
    v24,
    v25,
    v26,
    v27,
    "%s detect %d chips",
    "ChipSetting_get_addr_DCR_1727",
    v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/chip_setting.c",
    166,
    "ChipSetting_get_addr_DCR_1727",
    29,
    60,
    60,
    v45);
  if ( v20 > 0 )
  {
    v16 = 0;
    v5 = ptr;
    do
    {
      while ( 1 )
      {
        v6 = *v5;
        V_LOCK();
        LOWORD(v6) = __rev16(v6);
        v14 = v2++;
        logfmt_raw(
          v45,
          0x1000u,
          0,
          "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x",
          (unsigned __int16)v6,
          *(_DWORD *)(a1 + 304),
          v14,
          v5[3],
          *((unsigned __int8 *)v5 + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_get_addr_DCR_1727",
          29,
          64,
          20,
          v45);
        if ( *(_DWORD *)(a1 + 304) == (unsigned __int16)v6 )
          break;
        v5 += 6;
        if ( v20 <= v2 )
          goto LABEL_7;
      }
      v5 += 6;
      ++v16;
      v18 = sub_25ABA8(*((unsigned __int8 *)v5 - 8), *(_DWORD *)(a1 + 404));
      ++s[v18];
      V_LOCK();
      V_INT((int)v28, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v45,
        0x1000u,
        0,
        v29,
        v28[0],
        v28[1],
        v28[2],
        v28[3],
        v28[4],
        v28[5],
        v28[6],
        v29,
        "chip_id:%d, %03d",
        v18,
        *((unsigned __int8 *)v5 - 8));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_get_addr_DCR_1727",
        29,
        70,
        20,
        v45);
    }
    while ( v20 > v2 );
LABEL_7:
    v2 = v16;
  }
  else
  {
    v16 = 0;
  }
  memset(v44, 0, sizeof(v44));
  v44[0] = 10;
  if ( a2 )
  {
    v15 = v2;
    v7 = v44;
    v8 = s;
    v9 = 0;
    do
    {
      while ( *v8++ )
      {
        if ( a2 == ++v9 )
          goto LABEL_13;
      }
      v11 = v9++;
      sprintf(v7, "%03d ", v11);
      v7 += 4;
    }
    while ( a2 != v9 );
LABEL_13:
    v2 = v15;
  }
  if ( *(_DWORD *)(a1 + 312) > v16 )
  {
    V_LOCK();
    V_INT((int)v30, "chain", *(int *)(a1 + 232));
    V_STR(&v36, "error", "asic num error");
    logfmt_raw(
      v45,
      0x1000u,
      0,
      v35,
      v30[0],
      v30[1],
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      "detected asic num less than design(%d<%d)",
      v16,
      *(_DWORD *)(a1 + 312));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_get_addr_DCR_1727",
      29,
      96,
      100,
      v45);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "Sweep error string = J%d:2.", *(_DWORD *)(a1 + 232));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_get_addr_DCR_1727",
      29,
      97,
      100,
      v45);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "bad asic: %s", v44);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_get_addr_DCR_1727",
      29,
      98,
      40,
      v45);
  }
  free(ptr);
  result = v20;
  *(_DWORD *)(a1 + 400) = v2;
  return result;
}
