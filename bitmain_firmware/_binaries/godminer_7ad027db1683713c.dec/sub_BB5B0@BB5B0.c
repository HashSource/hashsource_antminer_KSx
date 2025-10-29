int __fastcall sub_BB5B0(int a1, int a2, char a3)
{
  void *v4; // r6
  _DWORD *v5; // r4
  int v6; // r6
  int result; // r0
  int v8; // [sp+40h] [bp-1094h]
  int v9; // [sp+44h] [bp-1090h]
  char v10; // [sp+48h] [bp-108Ch]
  void *ptr; // [sp+4Ch] [bp-1088h]
  char v12; // [sp+50h] [bp-1084h]
  int v14; // [sp+5Ch] [bp-1078h] BYREF
  __int64 v15; // [sp+60h] [bp-1074h] BYREF
  __int64 v16; // [sp+68h] [bp-106Ch]
  _DWORD v17[7]; // [sp+70h] [bp-1064h] BYREF
  int v18; // [sp+8Ch] [bp-1048h]
  _DWORD v19[7]; // [sp+90h] [bp-1044h] BYREF
  int v20; // [sp+ACh] [bp-1028h]
  _DWORD v21[7]; // [sp+B0h] [bp-1024h] BYREF
  int v22; // [sp+CCh] [bp-1008h]
  char v23[4100]; // [sp+D0h] [bp-1004h] BYREF

  v8 = a3 & 1;
  v14 = 0;
  if ( a2 == -1 || *(_DWORD *)(a1 + 312) < a2 )
  {
    v10 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v10 = *(_BYTE *)(*(_DWORD *)(a1 + 464) + a2);
  }
  v15 = 0;
  v16 = 0x10000;
  BYTE1(v16) = v10;
  v4 = calloc(0xCu, 1u);
  ptr = v4;
  (*(void (__fastcall **)(int, __int64 *, int, void *, int *))(a1 + 276))(a1, &v15, 1, v4, &v14);
  if ( v14 <= 0 )
  {
    v9 = v8;
  }
  else
  {
    v5 = v4;
    v6 = 0;
    v9 = v8;
    do
    {
      if ( *((_WORD *)v5 + 3) == 1 )
      {
        V_LOCK();
        V_INT((int)v17, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v23,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "%s chip %02x, core %02x, reg %02x, core_mode %08x",
          "ChipSetting_same_nonce_CKB_2042",
          *((unsigned __int8 *)v5 + 4),
          *((unsigned __int8 *)v5 + 8),
          *((unsigned __int16 *)v5 + 3),
          *v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_same_nonce_CKB_2042",
          31,
          333,
          20,
          v23);
        v9 = v8 | *v5;
      }
      else
      {
        V_LOCK();
        V_INT((int)v19, "chain", *(int *)(a1 + 232));
        logfmt_raw(
          v23,
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
          "%s chip %02x, expected reg %02x, but %02x, core_mode %08x",
          "ChipSetting_same_nonce_CKB_2042",
          *((unsigned __int8 *)v5 + 4),
          5,
          *((unsigned __int16 *)v5 + 3),
          *v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/chip_setting.c",
          166,
          "ChipSetting_same_nonce_CKB_2042",
          31,
          337,
          100,
          v23);
      }
      ++v6;
      v5 += 3;
    }
    while ( v14 > v6 );
  }
  free(ptr);
  BYTE4(v16) = -1;
  LOBYTE(v16) = v12;
  BYTE1(v16) = v10;
  LODWORD(v15) = v9;
  WORD1(v16) = 1;
  result = (*(int (__fastcall **)(int, __int64 *))(a1 + 252))(a1, &v15);
  if ( result < 0 )
  {
    V_LOCK();
    V_INT((int)v21, "chain", *(int *)(a1 + 232));
    logfmt_raw(
      v23,
      0x1000u,
      0,
      v22,
      v21[0],
      v21[1],
      v21[2],
      v21[3],
      v21[4],
      v21[5],
      v21[6],
      v22,
      "set same nonce failed! chip_id:%d",
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_setting.c",
      166,
      "ChipSetting_same_nonce_CKB_2042",
      31,
      350,
      100,
      v23);
    return -1;
  }
  return result;
}
