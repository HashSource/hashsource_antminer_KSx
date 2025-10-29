int __fastcall stratum_subscribe_base(int a1, int a2)
{
  int v2; // r4
  int v5; // r7
  void *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  void *v9; // r0
  const char *v10; // r1
  size_t v11; // r2
  void *v12; // r6
  int v13; // r0
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  int v17; // r9
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r10
  int v22; // r0
  int v23; // r0
  _BOOL4 v24; // r2
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  void *v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  const char *v33; // r0
  int v34; // r10
  _DWORD *v35; // [sp+30h] [bp-112Ch]
  _BYTE v36[36]; // [sp+38h] [bp-1124h] BYREF
  char v37[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v38[4100]; // [sp+158h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656);
  if ( *(_BYTE *)(a2 + 1656) )
  {
    V_LOCK(a1);
    v31 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_base.c",
      173,
      "stratum_subscribe_base",
      22,
      174,
      20,
      v38);
    return v2;
  }
  v5 = *(unsigned __int8 *)(a2 + 1656);
  v6 = (void *)v5;
  do
  {
    v7 = *(const char **)(a2 + 72);
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
    if ( !(*(int (__fastcall **)(int, void *))(a1 + 12))(a2, v12) )
    {
      V_LOCK(0);
      v13 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_base.c",
        173,
        "stratum_subscribe_base",
        22,
        190,
        100,
        v38);
LABEL_11:
      if ( !v12 )
      {
        if ( !v5 )
          goto LABEL_17;
        if ( *(_DWORD *)(v5 + 4) == -1 )
          goto LABEL_17;
        v14 = (unsigned int *)(v5 + 4);
        __dmb(0xBu);
        do
        {
          v15 = __ldrex(v14);
          v16 = v15 - 1;
        }
        while ( __strex(v16, v14) );
        if ( v16 )
          goto LABEL_17;
        v17 = 0;
LABEL_51:
        json_delete((_DWORD *)v5);
        goto LABEL_36;
      }
      free(v12);
      if ( !v5 )
        goto LABEL_17;
      v17 = 0;
      goto LABEL_32;
    }
    if ( !socket_full(*(_DWORD *)(a2 + 36), 30) )
    {
      V_LOCK(0);
      V_INT((int)v36, "poolno");
      v32 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_base.c",
        173,
        "stratum_subscribe_base",
        22,
        195,
        100,
        v38);
      goto LABEL_11;
    }
    v19 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
    v6 = (void *)v19;
    if ( !v19 )
      goto LABEL_11;
    v5 = json_loads(v19, 0, v37);
    free(v6);
    if ( !v5 )
    {
      V_LOCK(v20);
      v30 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_base.c",
        173,
        "stratum_subscribe_base",
        22,
        206,
        100,
        v38);
      if ( v12 )
        free(v12);
      goto LABEL_17;
    }
    v21 = (_DWORD *)json_object_get((_DWORD *)v5, "result");
    v35 = (_DWORD *)json_object_get((_DWORD *)v5, "error");
    v22 = json_object_get((_DWORD *)v5, "id");
    v23 = json_integer_value(v22);
    v24 = v21 == 0;
    if ( v23 != 1 )
      v24 = 1;
    if ( !v24 && *v21 != 7 )
    {
      if ( !v35 || *v35 == 7 )
      {
        v17 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 52))(a1, a2, v21, 1);
        if ( v17 )
        {
          v33 = *(const char **)(a2 + 32);
          *(_DWORD *)(a2 + 1920) = 2;
          if ( v33 )
          {
            if ( strstr(v33, "nicehash") )
            {
              *(_DWORD *)(a2 + 1920) = 3;
              sprintf((char *)v12, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v34 = (*(int (__fastcall **)(int, void *))(a1 + 12))(a2, v12);
              if ( v34 )
              {
                v17 = socket_full(*(_DWORD *)(a2 + 36), 30);
                if ( v17 )
                {
                  (*(void (__fastcall **)(int))(a1 + 8))(a2);
                  free(v12);
                  goto LABEL_32;
                }
                v17 = v34;
              }
LABEL_46:
              free(v12);
              goto LABEL_32;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_44:
          v28 = (void *)json_dumps(v35, 3);
          v12 = v28;
          goto LABEL_45;
        }
LABEL_30:
        v17 = v2;
      }
      if ( v12 )
        goto LABEL_46;
      goto LABEL_32;
    }
    if ( !v2 )
      goto LABEL_30;
    if ( v35 )
      goto LABEL_44;
    v28 = malloc(0x11u);
    v12 = v28;
    if ( v28 )
    {
      v28 = *(void **)"(unknown reason)";
      strcpy((char *)v12, "(unknown reason)");
    }
LABEL_45:
    V_LOCK(v28);
    v17 = 0;
    v29 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_base.c",
      173,
      "stratum_subscribe_base",
      22,
      221,
      100,
      v38);
    if ( v12 )
      goto LABEL_46;
LABEL_32:
    if ( *(_DWORD *)(v5 + 4) != -1 )
    {
      v25 = (unsigned int *)(v5 + 4);
      __dmb(0xBu);
      do
      {
        v26 = __ldrex(v25);
        v27 = v26 - 1;
      }
      while ( __strex(v27, v25) );
      if ( !v27 )
        goto LABEL_51;
    }
LABEL_36:
    if ( v17 )
      return v17;
LABEL_17:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
