int __fastcall stratum_handle_response_kas(int a1, double *a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  _DWORD *v6; // r5
  _DWORD *v7; // r10
  _DWORD *v8; // r7
  _BYTE *v9; // r0
  _BOOL4 v10; // r8
  int v11; // r0
  int v12; // r6
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  _BOOL4 v17; // r5
  char *v18; // r0
  _DWORD *v19; // r0
  char *v20; // r0
  int v21; // r1
  char v22[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v23[160]; // [sp+70h] [bp-10A0h] BYREF
  char v24[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = json_loads(a2, 0, v22);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v22, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
      180,
      "stratum_handle_response_kas",
      27,
      294,
      40,
      v24);
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
  if ( v6 == json_true() )
  {
    if ( v7 )
    {
      if ( *v7 == 7 )
        v10 = 1;
      if ( !v8 )
        goto LABEL_28;
      goto LABEL_18;
    }
    v10 = 1;
  }
  if ( !v8 )
  {
LABEL_28:
    V_LOCK();
    v12 = 0;
    logfmt_raw(v24, 0x1000u, 0, "%s json id is null!", "stratum_handle_response_kas");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
      180,
      "stratum_handle_response_kas",
      27,
      326,
      20,
      v24);
    goto LABEL_29;
  }
LABEL_18:
  if ( *v8 == 7 )
    goto LABEL_28;
  v12 = *(unsigned __int8 *)(a3 + 1656);
  if ( *(_BYTE *)(a3 + 1656) )
  {
    if ( v6 )
      v17 = 0;
    else
      v17 = v7 == 0;
    if ( !v17 )
    {
      v18 = json_dumps(v7, 24576);
      share_result(v10, 0, v18, (double *)a3);
      goto LABEL_29;
    }
  }
  else if ( v6 && json_integer_value((int)v8) >= 4 )
  {
    v19 = json_array_get(v7, 1u);
    v20 = (char *)json_string_value(v19);
    v21 = v12;
    v12 = 1;
    share_result(v10, v21, v20, (double *)a3);
    goto LABEL_29;
  }
  v12 = 0;
LABEL_29:
  if ( *((_DWORD *)v5 + 1) != -1 )
  {
    v13 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( !v15 )
      json_delete(v5);
  }
  return v12;
}
