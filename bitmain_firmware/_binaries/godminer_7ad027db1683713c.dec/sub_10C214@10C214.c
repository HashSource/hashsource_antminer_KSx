int __fastcall sub_10C214(int a1, __int16 a2)
{
  int v3; // [sp+10h] [bp-1810h] BYREF
  __int16 v4; // [sp+14h] [bp-180Ch]
  __int64 v5; // [sp+16h] [bp-180Ah] BYREF
  __int16 v6; // [sp+1Eh] [bp-1802h]
  char v7[2048]; // [sp+20h] [bp-1800h] BYREF
  char v8[4096]; // [sp+820h] [bp-1000h] BYREF

  v6 = 0;
  v3 = -2096715179;
  v5 = (unsigned __int16)(a2 + 137);
  v4 = (unsigned __int8)a2;
  if ( a1 == 255 )
  {
    if ( !sub_10BDBC((unsigned __int8 *)&v3, 8u, (unsigned __int8 *)&v5 + 2, 8u) )
      return HIWORD(v5);
    strcpy(v7, "set DA conversion N failed");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_set_DA_conversion_N",
      28,
      398,
      100,
      v8);
  }
  else
  {
    if ( !sub_10BF24(a1, (unsigned __int8 *)&v3, 8u, (unsigned __int8 *)&v5 + 2, 8u) )
      return HIWORD(v5);
    strcpy(v7, "set DA conversion N failed");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      189,
      "_bitmain_set_DA_conversion_N",
      28,
      404,
      100,
      v8);
  }
  return -2147482880;
}
