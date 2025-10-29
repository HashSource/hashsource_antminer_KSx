int __fastcall pre_stratum_handle_method_eth_2282(
        int (__fastcall **a1)(_DWORD, _DWORD, _DWORD),
        int a2,
        double *a3,
        _DWORD *a4)
{
  double *v7; // r0
  double *v8; // r4
  _DWORD *v9; // r6
  const char *v10; // r0
  bool v11; // zf
  _DWORD *v12; // r0
  const char *v13; // r6
  int v14; // r7
  int v15; // r6
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v20; // r0
  _DWORD *v21; // r6
  _DWORD *v22; // r5
  __int64 v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  __int64 v27; // r0
  __int64 v28; // r10
  int v29; // r0
  _BYTE *v30; // r1
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  char v35[92]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v36[4100]; // [sp+118h] [bp-1004h] BYREF

  v7 = json_loads(a3, 0, v35);
  v8 = v7;
  if ( v7 )
  {
    v9 = (_DWORD *)json_object_get(v7, "jsonrpc");
    v10 = (const char *)json_string_value(v9);
    v11 = v9 == 0;
    if ( v9 )
      v11 = v10 == 0;
    if ( !v11 && !strcasecmp(v10, "2.0") )
    {
      *(_BYTE *)(a2 + 1656) = 1;
      v25 = (_DWORD *)json_object_get(v8, "params");
      if ( !v25 )
        v25 = (_DWORD *)json_object_get(v8, "result");
      v15 = sub_9C7E8(v25, a2);
      if ( !v15 )
      {
        V_LOCK(0);
        v32 = logfmt_raw((int)v36, 0x1000u);
        V_UNLOCK(v32);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          190,
          "pre_stratum_handle_method_eth_2282",
          34,
          1111,
          80,
          v36);
        goto LABEL_31;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 1656) = 0;
      v12 = (_DWORD *)json_object_get(v8, "method");
      v13 = (const char *)json_string_value(v12);
      if ( v13 )
      {
        v14 = json_object_get(v8, "params");
        if ( !v14 )
          v14 = json_object_get(v8, "result");
        json_object_get(v8, "id");
        if ( !strcasecmp(v13, "mining.notify") )
        {
          v26 = json_object_get(v8, "height");
          v27 = json_integer_value(v26);
          v28 = v27;
          if ( v27 )
          {
            V_LOCK(v27);
            v34 = logfmt_raw((int)v36, 0x1000u);
            V_UNLOCK(v34);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
              190,
              "pre_stratum_handle_method_eth_2282",
              34,
              1037,
              40,
              v36);
            v15 = *(_DWORD *)(a2 + 1588);
            if ( !v15 )
            {
              v15 = (int)calloc(1u, 0x6Bu);
              *(_DWORD *)(a2 + 1588) = v15;
              if ( !v15 )
              {
                printf("invalid pointer(%s)!\n", "work->private");
                return v15;
              }
            }
            *(_QWORD *)(v15 + 96) = v28;
          }
          v29 = a1[12](a1, a2, v14);
          v30 = (_BYTE *)(a2 + 1916);
          v15 = v29;
          v11 = v29 == 0;
          v31 = a2;
          if ( !v11 )
          {
            *a4 = "notify";
            pool_tset(a2, v30, 1);
            goto LABEL_12;
          }
          goto LABEL_35;
        }
        if ( !strcasecmp(v13, "mining.set_difficulty") || !strcasecmp(v13, "mining.set_target") )
        {
          *a4 = "set diff or target";
          v15 = a1[14](a1, a2, v14);
          goto LABEL_12;
        }
        if ( !strcasecmp(v13, "mining.set_extranonce") )
        {
          v33 = a1[13](a1, a2, v14);
          v30 = (_BYTE *)(a2 + 1916);
          v15 = v33;
          v11 = v33 == 0;
          v31 = a2;
          if ( !v11 )
          {
            pool_tset(a2, v30, 1);
LABEL_12:
            if ( *((_DWORD *)v8 + 1) != -1 )
            {
              v16 = (unsigned int *)v8 + 1;
              __dmb(0xBu);
              do
              {
                v17 = __ldrex(v16);
                v18 = v17 - 1;
              }
              while ( __strex(v18, v16) );
              if ( !v18 )
                json_delete(v8);
            }
            return v15;
          }
LABEL_35:
          pool_tclear(v31, v30, v15);
          goto LABEL_12;
        }
      }
      v21 = (_DWORD *)json_object_get(v8, "result");
      json_object_get(v8, "error");
      v22 = (_DWORD *)json_object_get(v8, "id");
      if ( v21 && *v21 != 7 && v21 != json_false() )
        json_string_value(v21);
      LODWORD(v23) = json_true();
      if ( !v22 || *v22 == 7 || (v23 = json_integer_value((int)v22), v23 != 2) )
      {
        V_LOCK(v23);
        v15 = 0;
        v24 = logfmt_raw((int)v36, 0x1000u);
        V_UNLOCK(v24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          190,
          "pre_stratum_handle_method_eth_2282",
          34,
          1103,
          40,
          v36);
        goto LABEL_12;
      }
    }
    v15 = 1;
LABEL_31:
    *a4 = "notify";
    goto LABEL_12;
  }
  V_LOCK(0);
  v20 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    190,
    "pre_stratum_handle_method_eth_2282",
    34,
    1012,
    100,
    v36);
  return 0;
}
