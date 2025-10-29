int __fastcall stratum_subscribe_zec(int a1, int *a2)
{
  int v2; // r4
  double *v5; // r11
  char *v6; // r0
  const char *v7; // r10
  char *v8; // r6
  size_t v9; // r9
  const char *v10; // r3
  int v11; // t1
  int v12; // r0
  int *v13; // r3
  int v14; // r2
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  int v18; // r9
  double *v20; // r0
  double *v21; // r9
  int v22; // r0
  _DWORD *v23; // r10
  int v24; // r0
  int v25; // r0
  _BOOL4 v26; // r2
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  char *v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  const char *v35; // r0
  int v36; // r10
  double *v37; // [sp+2Ch] [bp-1188h]
  _DWORD *v38; // [sp+38h] [bp-117Ch]
  char dest[16]; // [sp+40h] [bp-1174h] BYREF
  _BYTE v40[28]; // [sp+50h] [bp-1164h] BYREF
  char v41[64]; // [sp+74h] [bp-1140h] BYREF
  char v42[92]; // [sp+B4h] [bp-1100h] BYREF
  _BYTE v43[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = *((unsigned __int8 *)a2 + 1656);
  if ( *((_BYTE *)a2 + 1656) )
  {
    V_LOCK(a1);
    v33 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_subscribe_zec",
      21,
      167,
      20,
      v43);
    return v2;
  }
  v5 = (double *)*((unsigned __int8 *)a2 + 1656);
  v37 = v5;
  do
  {
    v6 = (char *)malloc(0x80u);
    v7 = (const char *)a2[3];
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
    strncpy(v41, v7, v9);
    v41[v9] = 0;
    strcpy(dest, &v7[v9 + 1]);
    if ( v2 )
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null, \"%s\", \"%s\"]}",
        v41,
        dest);
    else
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null, \"%s\", \"%s\"]}",
        v41,
        dest);
    if ( !(*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8) )
    {
      V_LOCK(0);
      v12 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v12);
      v13 = &g_zc;
      v14 = 182;
LABEL_9:
      zlog(
        *v13,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
        180,
        "stratum_subscribe_zec",
        21,
        v14,
        100,
        v43);
LABEL_10:
      if ( !v8 )
      {
        if ( !v5 )
          goto LABEL_16;
        if ( *((_DWORD *)v5 + 1) == -1 )
          goto LABEL_16;
        v15 = (unsigned int *)v5 + 1;
        __dmb(0xBu);
        do
        {
          v16 = __ldrex(v15);
          v17 = v16 - 1;
        }
        while ( __strex(v17, v15) );
        if ( v17 )
          goto LABEL_16;
        v18 = 0;
LABEL_51:
        json_delete(v5);
        goto LABEL_35;
      }
      free(v8);
      if ( !v5 )
        goto LABEL_16;
      v18 = 0;
      goto LABEL_31;
    }
    if ( !socket_full(a2[9], 30) )
    {
      V_LOCK(0);
      V_INT((int)v40, "poolno", *a2);
      v34 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v34);
      v13 = &g_zc;
      v14 = 188;
      goto LABEL_9;
    }
    v20 = (double *)(*(int (__fastcall **)(int *))(a1 + 8))(a2);
    v21 = v20;
    v37 = v20;
    if ( !v20 )
      goto LABEL_10;
    v5 = json_loads(v20, 0, v42);
    free(v21);
    if ( !v5 )
    {
      V_LOCK(v22);
      v32 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
        180,
        "stratum_subscribe_zec",
        21,
        201,
        100,
        v43);
      if ( v8 )
        free(v8);
      goto LABEL_16;
    }
    v23 = (_DWORD *)json_object_get(v5, "result");
    v38 = (_DWORD *)json_object_get(v5, "error");
    v24 = json_object_get(v5, "id");
    v25 = json_integer_value(v24);
    v26 = v23 == 0;
    if ( v25 != 1 )
      v26 = 1;
    if ( !v26 && *v23 != 7 )
    {
      if ( !v38 || *v38 == 7 )
      {
        v18 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(a1 + 52))(a1, a2, v23, 1);
        if ( v18 )
        {
          v35 = (const char *)a2[8];
          a2[480] = 2;
          if ( v35 )
          {
            if ( strstr(v35, "nicehash") )
            {
              a2[480] = 3;
              sprintf(v8, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v36 = (*(int (__fastcall **)(int *, char *))(a1 + 12))(a2, v8);
              if ( v36 )
              {
                v18 = socket_full(a2[9], 30);
                if ( v18 )
                {
                  (*(void (__fastcall **)(int *))(a1 + 8))(a2);
                  free(v8);
                  goto LABEL_31;
                }
                v18 = v36;
              }
LABEL_46:
              free(v8);
              goto LABEL_31;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_44:
          v30 = json_dumps(v38, 3);
          v8 = v30;
          goto LABEL_45;
        }
LABEL_29:
        v18 = v2;
      }
      if ( v8 )
        goto LABEL_46;
      goto LABEL_31;
    }
    if ( !v2 )
      goto LABEL_29;
    if ( v38 )
      goto LABEL_44;
    v30 = (char *)malloc(0x11u);
    v8 = v30;
    if ( v30 )
    {
      v30 = *(char **)"(unknown reason)";
      strcpy(v8, "(unknown reason)");
    }
LABEL_45:
    V_LOCK(v30);
    v18 = 0;
    v31 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      180,
      "stratum_subscribe_zec",
      21,
      218,
      100,
      v43);
    if ( v8 )
      goto LABEL_46;
LABEL_31:
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
        goto LABEL_51;
    }
LABEL_35:
    if ( v18 )
      return v18;
LABEL_16:
    if ( v37 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
