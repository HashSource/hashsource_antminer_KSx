int __fastcall sub_11973C(int a1, __int16 a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // [sp+10h] [bp-1810h] BYREF
  __int16 v6; // [sp+14h] [bp-180Ch]
  __int64 v7; // [sp+16h] [bp-180Ah] BYREF
  __int16 v8; // [sp+1Eh] [bp-1802h]
  char v9[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v10[4096]; // [sp+820h] [bp-1000h] BYREF

  v8 = 0;
  v5 = -2096715179;
  v7 = (unsigned __int16)(a2 + 137);
  v6 = (unsigned __int8)a2;
  if ( a1 == 255 )
  {
    if ( !sub_119144((unsigned __int8 *)&v5, 8u, (unsigned __int8 *)&v7 + 2, 8u) )
      return HIWORD(v7);
    strcpy(v9, "set DA conversion N failed");
    V_LOCK(*(_DWORD *)"n N failed");
    v3 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_set_DA_conversion_N",
      28,
      420,
      100,
      v10);
  }
  else
  {
    if ( !sub_1192E4(a1, (unsigned __int8 *)&v5, 8u, (unsigned __int8 *)&v7 + 2, 8u) )
      return HIWORD(v7);
    strcpy(v9, "set DA conversion N failed");
    V_LOCK(*(_DWORD *)"n N failed");
    v4 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/power/bitmain_power_APW9.c",
      194,
      "_bitmain_set_DA_conversion_N",
      28,
      426,
      100,
      v10);
  }
  return -2147482880;
}
