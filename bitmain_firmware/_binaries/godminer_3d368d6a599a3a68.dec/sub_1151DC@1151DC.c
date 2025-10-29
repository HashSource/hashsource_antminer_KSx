int sub_1151DC()
{
  int v0; // r8
  int v1; // r3
  int v2; // r7
  int v3; // r4
  int v4; // r5
  void *v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r8
  int v10; // r9
  int v11; // r4
  int v12; // r3
  int v13; // r5
  void *v14; // r0
  int v15; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v17[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_306BE0[0] || (dword_306BE0[0] = (int)calloc(1u, 0x54u)) != 0 )
  {
    v0 = dword_306BE4;
    if ( dword_306BE4 <= 0 )
      return 0;
    v1 = 0;
    v2 = dword_306BE0[0];
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = dword_306BE0[v1 + 2];
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
    v6 = snprintf(s, 0x800u, "No memory for configuraion for chain %d.", v4);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "_alloc_memory",
      13,
      215,
      100,
      v17);
  }
  else
  {
    strcpy(s, "No memory for configuraion.");
    V_LOCK(*(_DWORD *)"nfiguraion.");
    v15 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "_alloc_memory",
      13,
      202,
      100,
      v17);
  }
  v8 = (_DWORD *)dword_306BE0[0];
  if ( !dword_306BE0[0] )
    return -1;
  v10 = dword_306BE4;
  if ( dword_306BE4 > 0 )
  {
    LOBYTE(v11) = 0;
    v12 = 0;
    do
    {
      v13 = dword_306BE0[v12 + 2];
      v14 = (void *)v8[v13];
      if ( v14 )
      {
        free(v14);
        v8[v13] = 0;
      }
      v11 = (unsigned __int8)(v11 + 1);
      v12 = v11;
    }
    while ( v10 > v11 );
  }
  free(v8);
  dword_306BE0[0] = 0;
  return -1;
}
