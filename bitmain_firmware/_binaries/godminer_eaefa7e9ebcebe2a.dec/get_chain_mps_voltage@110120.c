int __fastcall get_chain_mps_voltage(int a1, _WORD *a2)
{
  int result; // r0
  int v5; // r0
  unsigned __int16 v6; // r9
  __int16 v7; // r10
  unsigned int v8; // r8
  int v9; // r0
  unsigned __int8 v10; // [sp+10h] [bp-1008h] BYREF
  unsigned __int8 v11; // [sp+11h] [bp-1007h]
  __int16 src; // [sp+18h] [bp-1000h] BYREF
  char v13; // [sp+1Ah] [bp-FFEh]

  *a2 = -1;
  result = sub_1100A4(a1, 0);
  if ( !result )
    goto LABEL_3;
  src = 8562;
  v13 = 2;
  result = sub_10FCC0(a1, 60, &src, 3u, &v10, 2u);
  if ( result
    || (v6 = v10, v7 = v11, (result = sub_1100A4(a1, 2)) == 0)
    || (v13 = 2, src = 3442, (result = sub_10FCC0(a1, 60, &src, 3u, &v10, 2u)) != 0) )
  {
LABEL_3:
    V_LOCK(result);
    v5 = logfmt_raw((int)&src, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/mps2973.c",
      185,
      "get_chain_mps_voltage",
      21,
      193,
      100,
      &src);
    return 1;
  }
  else
  {
    v8 = 10 * (((unsigned int)(v10 | (v11 << 8)) >> 5) & 0x1FF) + 490;
    *a2 = v8;
    if ( 10 * ((v6 | (unsigned __int16)(v7 << 8)) & 0x1FF) + 490 != v8 )
    {
      V_LOCK(0);
      v9 = logfmt_raw((int)&src, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/backend/device/hal/drv_pic/mps2973.c",
        185,
        "get_chain_mps_voltage",
        21,
        189,
        80,
        &src);
      return 0;
    }
  }
  return result;
}
