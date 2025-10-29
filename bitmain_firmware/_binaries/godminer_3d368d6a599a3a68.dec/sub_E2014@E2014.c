int __fastcall sub_E2014(int a1, int a2, char a3)
{
  void *v4; // r6
  int v5; // r0
  _WORD *v6; // r4
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int result; // r0
  int v11; // r0
  int v12; // [sp+40h] [bp-1094h]
  int v13; // [sp+44h] [bp-1090h]
  char v14; // [sp+48h] [bp-108Ch]
  void *ptr; // [sp+4Ch] [bp-1088h]
  char v16; // [sp+50h] [bp-1084h]
  int v17; // [sp+5Ch] [bp-1078h] BYREF
  __int64 v18; // [sp+60h] [bp-1074h] BYREF
  __int64 v19; // [sp+68h] [bp-106Ch]
  int v20; // [sp+70h] [bp-1064h] BYREF
  char v21[32]; // [sp+90h] [bp-1044h] BYREF
  int v22; // [sp+B0h] [bp-1024h] BYREF
  _BYTE v23[4100]; // [sp+D0h] [bp-1004h] BYREF

  v12 = a3 & 1;
  v17 = 0;
  if ( a2 == -1 || *(_DWORD *)(a1 + 332) < a2 )
  {
    v14 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    v14 = *(_BYTE *)(*(_DWORD *)(a1 + 488) + a2);
  }
  v18 = 0;
  v19 = 0x10000;
  BYTE1(v19) = v14;
  v4 = calloc(0xCu, 1u);
  ptr = v4;
  v5 = (*(int (__fastcall **)(int, __int64 *, int, void *, int *))(a1 + 296))(a1, &v18, 1, v4, &v17);
  if ( v17 <= 0 )
  {
    v13 = v12;
  }
  else
  {
    v6 = v4;
    v7 = 0;
    v13 = v12;
    do
    {
      if ( v6[3] == 1 )
      {
        V_LOCK(v5);
        V_INT((int)&v20, "chain");
        v9 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v9);
        v5 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
               171,
               "ChipSetting_same_nonce_HNS_2130",
               31,
               374,
               20,
               v23);
        v13 = v12 | *(_DWORD *)v6;
      }
      else
      {
        V_LOCK(v5);
        V_INT((int)v21, "chain");
        v8 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v8);
        v5 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
               171,
               "ChipSetting_same_nonce_HNS_2130",
               31,
               378,
               100,
               v23);
      }
      ++v7;
      v6 += 6;
    }
    while ( v17 > v7 );
  }
  free(ptr);
  BYTE4(v19) = -1;
  LOBYTE(v19) = v16;
  BYTE1(v19) = v14;
  LODWORD(v18) = v13;
  WORD1(v19) = 1;
  result = (*(int (__fastcall **)(int, __int64 *))(a1 + 268))(a1, &v18);
  if ( result < 0 )
  {
    V_LOCK(result);
    V_INT((int)&v22, "chain");
    v11 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/chip_setting.c",
      171,
      "ChipSetting_same_nonce_HNS_2130",
      31,
      391,
      100,
      v23);
    return -1;
  }
  return result;
}
