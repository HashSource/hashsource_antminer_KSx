int __fastcall stratum_handle_response_eth_2282(int a1, double *a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  _DWORD *v6; // r6
  _DWORD *v7; // r8
  _DWORD *v8; // r9
  _DWORD *v9; // r0
  _BOOL4 v10; // r10
  int v11; // r5
  _BOOL4 v12; // r6
  char *v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  _DWORD *v18; // r0
  char *v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r0
  char v23[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v24[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v23);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_handle_response_eth_2282",
      32,
      1137,
      40,
      v24);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = (_DWORD *)json_object_get(v5, "id");
  if ( v6 && *v6 != 7 )
    json_false();
  v9 = json_true();
  if ( v6 == v9 )
  {
    if ( !v7 || *v7 != 7 )
    {
      v11 = *(unsigned __int8 *)(a3 + 1656);
      v10 = v7 == 0;
      if ( *(_BYTE *)(a3 + 1656) )
        goto LABEL_9;
LABEL_23:
      if ( v6 )
      {
        v18 = json_array_get(v7, 1u);
        v19 = (char *)json_string_value(v18);
        v20 = v11;
        v11 = 1;
        share_result(v10, v20, v19, (double *)a3);
      }
      goto LABEL_17;
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  v11 = *(unsigned __int8 *)(a3 + 1656);
  if ( !*(_BYTE *)(a3 + 1656) )
    goto LABEL_23;
LABEL_9:
  if ( !v8 || *v8 == 7 )
  {
    V_LOCK(v9);
    v11 = 0;
    v22 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      190,
      "stratum_handle_response_eth_2282",
      32,
      1166,
      40,
      v24);
  }
  else
  {
    if ( v6 )
      v12 = 0;
    else
      v12 = v7 == 0;
    if ( v12 )
    {
      v11 = 0;
    }
    else
    {
      v13 = json_dumps(v7, 24576);
      share_result(v10, 0, v13, (double *)a3);
    }
  }
LABEL_17:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v14 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v15 = __ldrex(v14);
      v16 = v15 - 1;
    }
    while ( __strex(v16, v14) );
    if ( !v16 )
      json_delete(v5);
  }
  return v11;
}
