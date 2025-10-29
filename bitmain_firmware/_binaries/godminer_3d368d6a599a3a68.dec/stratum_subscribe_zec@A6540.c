int __fastcall stratum_subscribe_zec(int a1, int a2)
{
  int v2; // r4
  int v5; // r11
  char *v6; // r0
  const char *v7; // r10
  char *v8; // r6
  size_t v9; // r9
  const char *v10; // r3
  int v11; // t1
  int v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r9
  int v18; // r0
  void *v19; // r9
  int v20; // r0
  _DWORD *v21; // r10
  int v22; // r0
  int v23; // r0
  _BOOL4 v24; // r2
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  char *v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  const char *v33; // r0
  int v34; // r10
  int v35; // [sp+2Ch] [bp-1188h]
  _DWORD *v36; // [sp+38h] [bp-117Ch]
  char dest[16]; // [sp+40h] [bp-1174h] BYREF
  _BYTE v38[36]; // [sp+50h] [bp-1164h] BYREF
  char v39[64]; // [sp+74h] [bp-1140h] BYREF
  char v40[92]; // [sp+B4h] [bp-1100h] BYREF
  _BYTE v41[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656);
  if ( *(_BYTE *)(a2 + 1656) )
  {
    V_LOCK(a1);
    v31 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_subscribe_zec",
      21,
      167,
      20,
      v41);
    return v2;
  }
  v5 = *(unsigned __int8 *)(a2 + 1656);
  v35 = v5;
  do
  {
    v6 = (char *)malloc(0x80u);
    v7 = *(const char **)(a2 + 12);
    v8 = v6;
    v9 = strlen(v7) - 1;
    v10 = &v7[v9];
    if ( v7[v9] != 58 )
    {
      do
      {
        v11 = *(unsigned __int8 *)--v10;
        --v9;
      }
      while ( v11 != 58 );
    }
    strncpy(v39, v7, v9);
    v39[v9] = 0;
    strcpy(dest, &v7[v9 + 1]);
    if ( v2 )
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null, \"%s\", \"%s\"]}",
        v39,
        dest);
    else
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null, \"%s\", \"%s\"]}",
        v39,
        dest);
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v8) )
    {
      V_LOCK(0);
      v12 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
        185,
        "stratum_subscribe_zec",
        21,
        182,
        100,
        v41);
LABEL_9:
      if ( !v8 )
      {
        if ( !v5 )
          goto LABEL_15;
        if ( *(_DWORD *)(v5 + 4) == -1 )
          goto LABEL_15;
        v13 = (unsigned int *)(v5 + 4);
        __dmb(0xBu);
        do
        {
          v14 = __ldrex(v13);
          v15 = v14 - 1;
        }
        while ( __strex(v15, v13) );
        if ( v15 )
          goto LABEL_15;
        v16 = 0;
LABEL_50:
        json_delete((_DWORD *)v5);
        goto LABEL_34;
      }
      free(v8);
      if ( !v5 )
        goto LABEL_15;
      v16 = 0;
      goto LABEL_30;
    }
    if ( !socket_full(*(_DWORD *)(a2 + 36), 30) )
    {
      V_LOCK(0);
      V_INT((int)v38, "poolno");
      v32 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
        185,
        "stratum_subscribe_zec",
        21,
        188,
        100,
        v41);
      goto LABEL_9;
    }
    v18 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
    v19 = (void *)v18;
    v35 = v18;
    if ( !v18 )
      goto LABEL_9;
    v5 = json_loads(v18, 0, v40);
    free(v19);
    if ( !v5 )
    {
      V_LOCK(v20);
      v30 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
        185,
        "stratum_subscribe_zec",
        21,
        201,
        100,
        v41);
      if ( v8 )
        free(v8);
      goto LABEL_15;
    }
    v21 = (_DWORD *)json_object_get((_DWORD *)v5, "result");
    v36 = (_DWORD *)json_object_get((_DWORD *)v5, "error");
    v22 = json_object_get((_DWORD *)v5, "id");
    v23 = json_integer_value(v22);
    v24 = v21 == 0;
    if ( v23 != 1 )
      v24 = 1;
    if ( !v24 && *v21 != 7 )
    {
      if ( !v36 || *v36 == 7 )
      {
        v16 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 52))(a1, a2, v21, 1);
        if ( v16 )
        {
          v33 = *(const char **)(a2 + 32);
          *(_DWORD *)(a2 + 1920) = 2;
          if ( v33 )
          {
            if ( strstr(v33, "nicehash") )
            {
              *(_DWORD *)(a2 + 1920) = 3;
              sprintf(v8, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v34 = (*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v8);
              if ( v34 )
              {
                v16 = socket_full(*(_DWORD *)(a2 + 36), 30);
                if ( v16 )
                {
                  (*(void (__fastcall **)(int))(a1 + 8))(a2);
                  free(v8);
                  goto LABEL_30;
                }
                v16 = v34;
              }
LABEL_45:
              free(v8);
              goto LABEL_30;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_43:
          v28 = (char *)json_dumps(v36, 3);
          v8 = v28;
          goto LABEL_44;
        }
LABEL_28:
        v16 = v2;
      }
      if ( v8 )
        goto LABEL_45;
      goto LABEL_30;
    }
    if ( !v2 )
      goto LABEL_28;
    if ( v36 )
      goto LABEL_43;
    v28 = (char *)malloc(0x11u);
    v8 = v28;
    if ( v28 )
    {
      v28 = *(char **)"(unknown reason)";
      strcpy(v8, "(unknown reason)");
    }
LABEL_44:
    V_LOCK(v28);
    v16 = 0;
    v29 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_zec/frontend_zec.c",
      185,
      "stratum_subscribe_zec",
      21,
      218,
      100,
      v41);
    if ( v8 )
      goto LABEL_45;
LABEL_30:
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
        goto LABEL_50;
    }
LABEL_34:
    if ( v16 )
      return v16;
LABEL_15:
    if ( v35 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
