int eeprom_get_strategy()
{
  int v0; // r0
  int v1; // r4
  char *v2; // r3
  char *v3; // lr
  int *v4; // r2
  int v5; // t1
  int result; // r0
  int *v7; // r2
  int v8; // t1
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r0
  _BYTE *v15; // [sp+Ch] [bp-1848h] BYREF
  int v16; // [sp+10h] [bp-1844h] BYREF
  int v17; // [sp+14h] [bp-1840h] BYREF
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE v19[4100]; // [sp+850h] [bp-1004h] BYREF

  v0 = dword_30CF3C[0];
  if ( !dword_30CF3C[0] || !*(_BYTE *)(dword_30CF3C[0] + 80) )
  {
    v13 = snprintf(s, 0x800u, "%s: eeprom is not ready", "eeprom_get_strategy");
    V_LOCK(v13);
    v14 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v14);
    v15 = v19;
    v12 = 1110;
LABEL_14:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/eeprom/bitmain_eeprom.c",
      191,
      "eeprom_get_strategy",
      19,
      v12,
      100,
      v15);
    return -1;
  }
  v1 = dword_30CF40;
  if ( dword_30CF40 <= 0 )
    return -1;
  v2 = (char *)&unk_30CF44;
  v3 = (char *)&unk_30CF44 + 4 * dword_30CF40;
  v4 = &v16;
  do
  {
    v5 = *(_DWORD *)v2;
    v2 += 4;
    *v4++ = **(unsigned __int8 **)(*(_DWORD *)(v0 + 4 * v5) + 56);
  }
  while ( v2 != v3 );
  if ( v1 == 1 )
    return v16;
  result = v17;
  if ( v17 != v16 )
  {
    v9 = v17;
LABEL_13:
    v10 = snprintf(s, 0x800u, "Strategy of the chains are different,%02x != %02x", v16, v9);
    V_LOCK(v10);
    v11 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v11);
    v15 = v19;
    v12 = 1121;
    goto LABEL_14;
  }
  v7 = &v17;
  while ( &(&v15)[v1] != (_BYTE **)v7 )
  {
    v8 = v7[1];
    ++v7;
    v9 = v8;
    if ( v8 != v17 )
      goto LABEL_13;
  }
  return result;
}
