int __fastcall stratum_subscribe_base(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r7
  double *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  void *v9; // r0
  char *v10; // r1
  size_t v11; // r2
  void *v12; // r6
  int v13; // r0
  int *v14; // r3
  int v15; // r2
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v19; // r9
  double *v21; // r0
  int v22; // r0
  _DWORD *v23; // r10
  int v24; // r0
  int v25; // r0
  _BOOL4 v26; // r2
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  _BYTE *v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  const char *v35; // r0
  int v36; // r10
  _DWORD *v37; // [sp+30h] [bp-112Ch]
  _BYTE v38[28]; // [sp+38h] [bp-1124h] BYREF
  char v39[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v40[4100]; // [sp+158h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK(a1);
    v33 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_subscribe_base",
      22,
      174,
      20,
      v40);
    return v2;
  }
  v5 = (double *)*((unsigned __int8 *)a2 + 1656);
  v6 = v5;
  do
  {
    v7 = (const char *)a2[18];
    if ( v7 )
      v8 = strlen(v7) + 128;
    else
      v8 = 128;
    v9 = malloc(v8);
    if ( v2 )
    {
      v10 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
      v11 = 77;
    }
    else
    {
      v10 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}";
      v11 = 76;
    }
    v12 = v9;
    memcpy(v9, v10, v11);
    if ( !(*(int (__fastcall **)(int *, void *))(a1 + 12))(a2, v12) )
    {
      V_LOCK(0);
      v13 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v13);
      v14 = &g_zc;
      v15 = 190;
LABEL_11:
      zlog(
        *v14,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "stratum_subscribe_base",
        22,
        v15,
        100,
        v40);
LABEL_12:
      if ( !v12 )
      {
        if ( !v5 )
          goto LABEL_18;
        if ( *((_DWORD *)v5 + 1) == -1 )
          goto LABEL_18;
        v16 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v17 = __ldrex(v16);
          v18 = v17 - 1;
        }
        while ( __strex(v18, v16) );
        if ( v18 )
          goto LABEL_18;
        v19 = 0;
LABEL_52:
        json_delete(v5);
        goto LABEL_37;
      }
      free(v12);
      if ( !v5 )
        goto LABEL_18;
      v19 = 0;
      goto LABEL_33;
    }
    if ( !socket_full(a2[9], 30) )
    {
      V_LOCK(0);
      V_INT((int)v38, "poolno", *a2);
      v34 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v34);
      v14 = &g_zc;
      v15 = 195;
      goto LABEL_11;
    }
    v21 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v6 = v21;
    if ( !v21 )
      goto LABEL_12;
    v5 = json_loads(v21, 0, v39);
    free(v6);
    if ( !v5 )
    {
      V_LOCK(v22);
      v32 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_base.c",
        168,
        "stratum_subscribe_base",
        22,
        206,
        100,
        v40);
      if ( v12 )
        free(v12);
      goto LABEL_18;
    }
    v23 = (_DWORD *)json_object_get(v5, "result");
    v37 = (_DWORD *)json_object_get(v5, "error");
    v24 = json_object_get(v5, "id");
    v25 = json_integer_value(v24);
    v26 = v23 == 0;
    if ( v25 != 1 )
      v26 = 1;
    if ( !v26 && *v23 != 7 )
    {
      if ( !v37 || *v37 == 7 )
      {
        v19 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v23, 1);
        if ( v19 )
        {
          v35 = (const char *)a2[8];
          a2[480] = 2;
          if ( v35 )
          {
            if ( strstr(v35, "nicehash") )
            {
              a2[480] = 3;
              sprintf((char *)v12, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v36 = (*(int (__fastcall **)(int *, void *))(a1 + 12))(a2, v12);
              if ( v36 )
              {
                v19 = socket_full(a2[9], 30);
                if ( v19 )
                {
                  (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                  free(v12);
                  goto LABEL_33;
                }
                v19 = v36;
              }
LABEL_47:
              free(v12);
              goto LABEL_33;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_45:
          v30 = json_dumps(v37, 3);
          v12 = v30;
          goto LABEL_46;
        }
LABEL_31:
        v19 = v2;
      }
      if ( v12 )
        goto LABEL_47;
      goto LABEL_33;
    }
    if ( !v2 )
      goto LABEL_31;
    if ( v37 )
      goto LABEL_45;
    v30 = malloc(0x11u);
    v12 = v30;
    if ( v30 )
    {
      v30 = *(_BYTE **)"(unknown reason)";
      strcpy((char *)v12, "(unknown reason)");
    }
LABEL_46:
    V_LOCK(v30);
    v19 = 0;
    v31 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_base.c",
      168,
      "stratum_subscribe_base",
      22,
      221,
      100,
      v40);
    if ( v12 )
      goto LABEL_47;
LABEL_33:
    if ( *((_DWORD *)v5 + 1) != -1 )
    {
      v27 = (unsigned int *)v5 + 1;
      __dmb(0xBu);
      do
      {
        v28 = __ldrex(v27);
        v29 = v28 - 1;
      }
      while ( __strex(v29, v27) );
      if ( !v29 )
        goto LABEL_52;
    }
LABEL_37:
    if ( v19 )
      return v19;
LABEL_18:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
