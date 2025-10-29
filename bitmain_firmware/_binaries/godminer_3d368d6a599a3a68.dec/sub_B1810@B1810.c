int __fastcall sub_B1810(int a1, int *a2)
{
  int *v2; // r10
  int v3; // r7
  int v4; // r6
  __int64 v5; // kr00_8
  int v7; // r0
  _DWORD *v8; // r11
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r11
  char v23; // r10
  int v24; // r0
  int v26; // r0
  void (__fastcall *v27)(int, int *); // r3
  int v28; // r0
  double *v29; // [sp+10h] [bp-1074h]
  int v30; // [sp+10h] [bp-1074h]
  int v31; // [sp+24h] [bp-1060h] BYREF
  int v32; // [sp+28h] [bp-105Ch]
  int v33; // [sp+34h] [bp-1050h] BYREF
  int v34; // [sp+38h] [bp-104Ch]
  int v35; // [sp+3Ch] [bp-1048h]
  int v36; // [sp+40h] [bp-1044h]
  int v37; // [sp+44h] [bp-1040h]
  int v38; // [sp+48h] [bp-103Ch]
  int v39; // [sp+4Ch] [bp-1038h]
  int v40; // [sp+50h] [bp-1034h]
  int v41; // [sp+54h] [bp-1030h] BYREF
  int v42; // [sp+58h] [bp-102Ch]
  int v43; // [sp+5Ch] [bp-1028h]
  int v44; // [sp+60h] [bp-1024h]
  int v45; // [sp+64h] [bp-1020h]
  int v46; // [sp+68h] [bp-101Ch]
  int v47; // [sp+6Ch] [bp-1018h]
  int v48; // [sp+70h] [bp-1014h]
  __int64 v49; // [sp+74h] [bp-1010h]
  char v50; // [sp+7Ch] [bp-1008h]
  _BYTE v51[4100]; // [sp+80h] [bp-1004h] BYREF

  v2 = (int *)a2[283];
  v3 = *a2;
  v4 = a2[1];
  v5 = *(_QWORD *)&dbl_2E94F8;
  v31 = *a2;
  *(_DWORD *)(a1 + 492) = 1;
  v49 = v5;
  v32 = v4;
  if ( v2 )
  {
    v8 = a2 + 2;
    v7 = a2[2];
    v29 = (double *)(a2 + 268);
    v9 = a2[3];
    v10 = v8[3];
    v11 = v8[2];
    v33 = v7;
    v34 = v9;
    v35 = v11;
    v36 = v10;
    v12 = v8[5];
    v13 = v8[6];
    v14 = v8[7];
    v37 = v8[4];
    v38 = v12;
    v39 = v13;
    v40 = v14;
    v15 = v2[1];
    v16 = v2[2];
    v17 = v2[3];
    v41 = *v2;
    v42 = v15;
    v43 = v16;
    v44 = v17;
    v18 = v2[7];
    v19 = v2[4];
    v20 = v2[5];
    v21 = v2[6];
    v45 = v19;
    v46 = v20;
    v47 = v21;
    v48 = v18;
    v22 = *(unsigned __int8 *)(a1 + 255);
    v23 = (unsigned int)*(v29 - 1);
    v50 = v23;
    if ( v22 )
    {
      V_LOCK(v19);
      v26 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
        194,
        "push_work_rvn_2044",
        18,
        82,
        40,
        v51);
      v27 = *(void (__fastcall **)(int, int *))(a1 + 32);
      *(_BYTE *)(a1 + 255) = 0;
      v27(a1, &v31);
    }
    else
    {
      v30 = memcmp(dword_2E9510, &v33, 0x20u);
      v24 = memcmp(dword_2E9530, &v41, 0x20u) | v30;
      if ( !(_BYTE)v24 )
      {
LABEL_4:
        qword_2E9550 = v5;
        dword_2E9500 = v3;
        dword_2E9510[0] = v33;
        dword_2E9510[1] = v34;
        dword_2E9510[2] = v35;
        dword_2E9510[3] = v36;
        dword_2E9504 = v4;
        unk_2E9520 = v37;
        unk_2E9524 = v38;
        unk_2E9528 = v39;
        unk_2E952C = v40;
        dword_2E9530[0] = v41;
        dword_2E9530[1] = v42;
        dword_2E9530[2] = v43;
        dword_2E9530[3] = v44;
        unk_2E9540 = v45;
        unk_2E9544 = v46;
        unk_2E9548 = v47;
        unk_2E954C = v48;
        byte_2E9558 = v23;
        return 0;
      }
      V_LOCK(v24);
      v28 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
        194,
        "push_work_rvn_2044",
        18,
        91,
        40,
        v51);
      (*(void (__fastcall **)(int, int *))(a1 + 32))(a1, &v31);
    }
    v3 = v31;
    v4 = v32;
    v23 = v50;
    v5 = v49;
    goto LABEL_4;
  }
  printf("invalid pointer(%s)!\n", "work->private");
  return 0;
}
