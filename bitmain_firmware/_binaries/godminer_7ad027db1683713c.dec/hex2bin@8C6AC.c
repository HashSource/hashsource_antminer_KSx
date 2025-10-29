bool __fastcall hex2bin(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  unsigned __int8 v5; // r12
  int v6; // r6
  unsigned __int8 *v7; // r4
  char v8; // r0
  char *v9; // r3
  char v11[4]; // [sp+10h] [bp-1008h] BYREF
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  char v13[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *a2;
  v4 = a3;
  v11[2] = 0;
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
      v11[0] = v3;
      v11[1] = v5;
      v8 = strtol(v11, &endptr, 16);
      v9 = endptr;
      --v4;
      *(_BYTE *)++v6 = v8;
      if ( *v9 )
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
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "hex2bin failed on '%s'", v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "hex2bin",
      7,
      155,
      100,
      v13);
  }
  else
  {
LABEL_14:
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "hex2bin str truncated");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "hex2bin",
      7,
      148,
      100,
      v13);
  }
  return 0;
}
