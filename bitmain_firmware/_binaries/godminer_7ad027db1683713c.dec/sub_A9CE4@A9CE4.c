int __fastcall sub_A9CE4(_DWORD *a1, __int64 *a2)
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
  __int64 *v14; // r12
  void (__fastcall *v15)(_DWORD *, __int64 *); // r5
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  _BYTE v22[256]; // [sp+10h] [bp-1274h] BYREF
  __int64 v23; // [sp+110h] [bp-1174h] BYREF
  char dest[32]; // [sp+118h] [bp-116Ch] BYREF
  _BYTE v25[256]; // [sp+138h] [bp-114Ch] BYREF
  int v26; // [sp+238h] [bp-104Ch]
  int v27; // [sp+23Ch] [bp-1048h]
  int v28; // [sp+240h] [bp-1044h]
  int v29; // [sp+244h] [bp-1040h]
  int v30; // [sp+248h] [bp-103Ch]
  int v31; // [sp+24Ch] [bp-1038h]
  int v32; // [sp+250h] [bp-1034h]
  int v33; // [sp+254h] [bp-1030h]
  int v34; // [sp+258h] [bp-102Ch]
  int v35; // [sp+25Ch] [bp-1028h]
  int v36; // [sp+260h] [bp-1024h]
  int v37; // [sp+264h] [bp-1020h]
  int v38; // [sp+268h] [bp-101Ch]
  int v39; // [sp+26Ch] [bp-1018h]
  int v40; // [sp+270h] [bp-1014h]
  char v41[4100]; // [sp+280h] [bp-1004h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v23 = v2;
  strcpy(dest, v5);
  memcpy(v22, a2 + 1, sizeof(v22));
  v6 = ((unsigned int)dword_2D3328 >> 8) | (a1[57] << 6);
  v22[120] = dword_2D3328;
  v22[121] = v6;
  memcpy(v25, v22, sizeof(v25));
  v7 = target_to_diff_byte_hns((int)(a2 + 129));
  v8 = *((_DWORD *)a2 + 259);
  v9 = *((_DWORD *)a2 + 260);
  v10 = *((_DWORD *)a2 + 261);
  v26 = v7;
  v27 = *((_DWORD *)a2 + 258);
  v28 = v8;
  v29 = v9;
  v30 = v10;
  v11 = *((_DWORD *)a2 + 263);
  v12 = *((_DWORD *)a2 + 264);
  v13 = *((_DWORD *)a2 + 265);
  v31 = *((_DWORD *)a2 + 262);
  v32 = v11;
  v33 = v12;
  v34 = v13;
  V_LOCK();
  logfmt_raw(v41, 0x1000u, 0, "start nonce: %08x target_diff: %d", dword_2D3328, v26);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/dhash_content/hns/hns_2130/hns_2130_content.c",
    189,
    "push_work_hns_2130",
    18,
    46,
    20,
    v41);
  v14 = a2 + 136;
  v15 = (void (__fastcall *)(_DWORD *, __int64 *))a1[8];
  v16 = *((_DWORD *)v14 + 4);
  v17 = *((_DWORD *)v14 + 5);
  v18 = *((_DWORD *)v14 + 6);
  v35 = *((_DWORD *)v14 + 3);
  v36 = v16;
  v37 = v17;
  v38 = v18;
  v19 = *((_DWORD *)v14 + 7);
  v20 = *((_DWORD *)v14 + 8);
  a1[117] = 0;
  v39 = v19;
  v40 = v20;
  v15(a1, &v23);
  return 0;
}
