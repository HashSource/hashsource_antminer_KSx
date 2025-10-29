int __fastcall sub_AFF24(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  unsigned int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r12
  void (__fastcall *v16)(_DWORD *, __int64 *); // r5
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r1
  _BYTE v23[256]; // [sp+10h] [bp-1274h] BYREF
  __int64 v24; // [sp+110h] [bp-1174h] BYREF
  char dest[32]; // [sp+118h] [bp-116Ch] BYREF
  _BYTE v26[256]; // [sp+138h] [bp-114Ch] BYREF
  int v27; // [sp+238h] [bp-104Ch]
  int v28; // [sp+23Ch] [bp-1048h]
  int v29; // [sp+240h] [bp-1044h]
  int v30; // [sp+244h] [bp-1040h]
  int v31; // [sp+248h] [bp-103Ch]
  int v32; // [sp+24Ch] [bp-1038h]
  int v33; // [sp+250h] [bp-1034h]
  int v34; // [sp+254h] [bp-1030h]
  int v35; // [sp+258h] [bp-102Ch]
  int v36; // [sp+25Ch] [bp-1028h]
  int v37; // [sp+260h] [bp-1024h]
  int v38; // [sp+264h] [bp-1020h]
  int v39; // [sp+268h] [bp-101Ch]
  int v40; // [sp+26Ch] [bp-1018h]
  int v41; // [sp+270h] [bp-1014h]
  _BYTE v42[4100]; // [sp+280h] [bp-1004h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v24 = v2;
  strcpy(dest, v5);
  memcpy(v23, a2 + 1, sizeof(v23));
  v6 = ((unsigned int)dword_2E83B0 >> 8) | (a1[60] << 6);
  v23[120] = dword_2E83B0;
  v23[121] = v6;
  memcpy(v26, v23, sizeof(v26));
  v7 = target_to_diff_byte_hns(a2 + 129);
  v8 = *((_DWORD *)a2 + 259);
  v9 = *((_DWORD *)a2 + 260);
  v10 = *((_DWORD *)a2 + 261);
  v27 = v7;
  v28 = *((_DWORD *)a2 + 258);
  v29 = v8;
  v30 = v9;
  v31 = v10;
  v11 = *((_DWORD *)a2 + 263);
  v12 = *((_DWORD *)a2 + 264);
  v13 = *((_DWORD *)a2 + 265);
  v32 = *((_DWORD *)a2 + 262);
  v33 = v11;
  v34 = v12;
  v35 = v13;
  V_LOCK(v32);
  v14 = logfmt_raw((int)v42, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/dhash_content/hns/hns_2130/hns_2130_content.c",
    194,
    "push_work_hns_2130",
    18,
    46,
    20,
    v42);
  v15 = a2 + 136;
  v16 = (void (__fastcall *)(_DWORD *, __int64 *))a1[8];
  v17 = v15[4];
  v18 = v15[5];
  v19 = v15[6];
  v36 = v15[3];
  v37 = v17;
  v38 = v18;
  v39 = v19;
  v20 = v15[7];
  v21 = v15[8];
  a1[121] = 0;
  v40 = v20;
  v41 = v21;
  v16(a1, &v24);
  return 0;
}
