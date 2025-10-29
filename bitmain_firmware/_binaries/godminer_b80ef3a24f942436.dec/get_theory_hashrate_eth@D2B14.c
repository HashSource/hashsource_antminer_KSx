int __fastcall get_theory_hashrate_eth(int a1, double *a2)
{
  double v4; // r0
  double v5; // d16
  float v6; // s15
  int v8; // r0
  int v9; // r0
  float v10; // [sp+2Ch] [bp-1048h] BYREF
  _BYTE v11[32]; // [sp+30h] [bp-1044h] BYREF
  _BYTE v12[32]; // [sp+50h] [bp-1024h] BYREF
  _BYTE v13[4100]; // [sp+70h] [bp-1004h] BYREF

  v10 = 1.0;
  if ( is_eeprom_loaded() )
  {
    LODWORD(v4) = api_get_eeprom_nonce_response_rate(*(_DWORD *)(a1 + 240), &v10);
    if ( LODWORD(v4) )
    {
      v10 = 1.0;
      V_LOCK(LODWORD(v4));
      V_INT((int)v12, "chain", *(int *)(a1 + 248));
      v8 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v8);
      LODWORD(v4) = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                      187,
                      "get_theory_hashrate_eth",
                      23,
                      1454,
                      100,
                      v13);
      v6 = v10 * 1920.0;
    }
    else
    {
      if ( v10 == 0.0 )
      {
        v5 = 1900000000.0;
LABEL_7:
        *a2 = v5;
        return 0;
      }
      v6 = (float)(v10 / 100.0) * 1920.0;
    }
    floor(v4);
    v5 = (double)(50 * (unsigned int)(v6 / 50.0)) * 1000.0 * 1000.0;
    goto LABEL_7;
  }
  *a2 = 1.0;
  V_LOCK(0);
  V_INT((int)v11, "chain", *(int *)(a1 + 248));
  v9 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    187,
    "get_theory_hashrate_eth",
    23,
    1445,
    100,
    v13);
  return 32;
}
