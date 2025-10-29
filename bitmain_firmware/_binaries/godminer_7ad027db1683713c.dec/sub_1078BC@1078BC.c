int sub_1078BC()
{
  int v0; // r8
  int v1; // r3
  int v2; // r7
  int v3; // r4
  int v4; // r5
  void *v5; // r9
  _DWORD *v6; // r8
  int v8; // r9
  int v9; // r4
  int v10; // r3
  int v11; // r5
  void *v12; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v14[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_2E8A8C[0] || (dword_2E8A8C[0] = (int)calloc(1u, 0x54u)) != 0 )
  {
    v0 = dword_2E8A90;
    if ( dword_2E8A90 <= 0 )
      return 0;
    v1 = 0;
    v2 = dword_2E8A8C[0];
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = dword_2E8A8C[v1 + 2];
      if ( !*(_DWORD *)(v2 + 4 * v4) )
      {
        v5 = calloc(1u, 0xCCu);
        *(_DWORD *)(v2 + 4 * v4) = v5;
        if ( !v5 )
          break;
      }
      v3 = (unsigned __int8)(v3 + 1);
      v1 = v3;
      if ( v3 >= v0 )
        return 0;
    }
    snprintf(s, 0x800u, "No memory for configuraion for chain %d.", v4);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "_alloc_memory",
      13,
      215,
      100,
      v14);
  }
  else
  {
    strcpy(s, "No memory for configuraion.");
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      186,
      "_alloc_memory",
      13,
      202,
      100,
      v14);
  }
  v6 = (_DWORD *)dword_2E8A8C[0];
  if ( !dword_2E8A8C[0] )
    return -1;
  v8 = dword_2E8A90;
  if ( dword_2E8A90 > 0 )
  {
    LOBYTE(v9) = 0;
    v10 = 0;
    do
    {
      v11 = dword_2E8A8C[v10 + 2];
      v12 = (void *)v6[v11];
      if ( v12 )
      {
        free(v12);
        v6[v11] = 0;
      }
      v9 = (unsigned __int8)(v9 + 1);
      v10 = v9;
    }
    while ( v8 > v9 );
  }
  free(v6);
  dword_2E8A8C[0] = 0;
  return -1;
}
