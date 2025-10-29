int __fastcall stratum_handle_response_ks5(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  _DWORD *v7; // r10
  _DWORD *v8; // r7
  _BYTE *v9; // r0
  _BOOL4 v10; // r8
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r6
  _BOOL4 v14; // r5
  char *v15; // r0
  int v16; // r0
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  int v21; // r0
  _DWORD *v22; // r0
  char *v23; // r0
  int v24; // r1
  char v25[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v26[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = (_DWORD *)json_loads(a2, 0, v25);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
      185,
      "stratum_handle_response_ks5",
      27,
      294,
      40,
      v26);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = (_DWORD *)json_object_get(v5, "id");
  if ( !v6 || *v6 == 7 || v6 == json_false() )
    goto LABEL_15;
  v9 = json_string_value(v6);
  v10 = (_BOOL4)v9;
  if ( !v9 )
    goto LABEL_16;
  if ( *v9 == 111 && v9[1] == 107 )
  {
    v11 = (unsigned __int8)v9[2];
    v10 = (_BOOL4)v7;
    if ( v7 )
      v10 = 1;
    if ( v11 )
      v10 = 0;
    if ( v10 )
      v10 = *v7 == 7;
  }
  else
  {
LABEL_15:
    v10 = 0;
  }
LABEL_16:
  v12 = json_true();
  if ( v6 != v12 )
    goto LABEL_17;
  if ( !v7 )
  {
    v10 = 1;
LABEL_17:
    if ( !v8 )
      goto LABEL_31;
    goto LABEL_18;
  }
  if ( *v7 == 7 )
    v10 = 1;
  if ( !v8 )
    goto LABEL_31;
LABEL_18:
  if ( *v8 != 7 )
  {
    v13 = *(unsigned __int8 *)(a3 + 1656);
    if ( *(_BYTE *)(a3 + 1656) )
    {
      if ( v6 )
        v14 = 0;
      else
        v14 = v7 == 0;
      if ( v14 )
      {
        v13 = 0;
      }
      else
      {
        v15 = (char *)json_dumps(v7, 24576);
        share_result(v10, 0, v15, a3);
      }
    }
    else if ( v6 )
    {
      if ( json_integer_value((int)v8) >= 4 )
      {
        v22 = json_array_get(v7, 1u);
        v23 = (char *)json_string_value(v22);
        v24 = v13;
        v13 = 1;
        share_result(v10, v24, v23, a3);
      }
      else
      {
        v13 = 1;
      }
    }
    goto LABEL_32;
  }
LABEL_31:
  V_LOCK(v12);
  v13 = 0;
  v16 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
    185,
    "stratum_handle_response_ks5",
    27,
    326,
    20,
    v26);
LABEL_32:
  if ( v5[1] != -1 )
  {
    v17 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v18 = __ldrex(v17);
      v19 = v18 - 1;
    }
    while ( __strex(v19, v17) );
    if ( !v19 )
      json_delete(v5);
  }
  return v13;
}
