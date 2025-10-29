bool __fastcall hex2bin(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  char v5; // r12
  int v6; // r6
  unsigned __int8 *v7; // r4
  char *v8; // r3
  int v9; // r0
  int v11; // r0
  char v12[4]; // [sp+10h] [bp-1008h] BYREF
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  _BYTE v14[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *a2;
  v4 = a3;
  v12[2] = 0;
  if ( !v3 )
    return v4 == 0;
  if ( !a3 )
    return 1;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = a1 - 1;
    v7 = a2;
    while ( 1 )
    {
      v12[0] = v3;
      v12[1] = v5;
      a1 = strtol(v12, &endptr, 16);
      v8 = endptr;
      --v4;
      *(_BYTE *)++v6 = a1;
      if ( *v8 )
        break;
      v3 = v7[2];
      v7 += 2;
      if ( !v3 )
        return v4 == 0;
      if ( !v4 )
        return 1;
      v5 = v7[1];
      if ( !v5 )
        goto LABEL_14;
    }
    V_LOCK(a1);
    v9 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/util.c",
      155,
      "hex2bin",
      7,
      156,
      100,
      v14);
  }
  else
  {
LABEL_14:
    V_LOCK(a1);
    v11 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/util.c",
      155,
      "hex2bin",
      7,
      149,
      100,
      v14);
  }
  return 0;
}
