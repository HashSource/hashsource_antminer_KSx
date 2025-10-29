int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d18
  __int64 v8; // r8
  double v9; // r2
  double v10; // d16
  int v11; // r1
  int v12; // r4
  int v13; // r6
  int v14; // r0
  int v15; // r1
  double v17; // d18
  double v18; // d17
  double v19; // d16
  time_t v20; // r0
  __int64 v21; // r4
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r0
  _BYTE v26[32]; // [sp+28h] [bp-1044h] BYREF
  int v27; // [sp+48h] [bp-1024h] BYREF
  _BYTE v28[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_2F2D7C);
  if ( a1 )
  {
    v17 = a4[226];
    v18 = a4[245];
    ++*((_QWORD *)a4 + 241);
    ++*(_QWORD *)&total_accepted;
    v19 = total_diff_accepted + v17;
    a4[245] = v18 + v17;
    total_diff_accepted = v19;
    v20 = time(0);
    v21 = *((_QWORD *)a4 + 226);
    *((_DWORD *)a4 + 404) = v20;
    *((_QWORD *)a4 + 203) = v21;
    pthread_mutex_unlock(&stru_2F2D7C);
    return 1;
  }
  else
  {
    v7 = a4[226];
    v8 = *((_QWORD *)a4 + 242) + 1LL;
    v9 = total_rejected;
    v10 = total_diff_rejected + v7;
    a4[246] = a4[246] + v7;
    *((_QWORD *)a4 + 242) = v8;
    *(_QWORD *)&total_rejected = *(_QWORD *)&v9 + 1LL;
    total_diff_rejected = v10;
    pthread_mutex_unlock(&stru_2F2D7C);
    v11 = *((_DWORD *)a4 + 484);
    if ( v11 < 1 )
      v12 = 1;
    else
      v12 = *((_DWORD *)a4 + 484);
    v13 = v11 % 100 + v11 % 10 + v11 % 1000 + v11 % 10000;
    if ( a3 )
    {
      sub_8A0D8(a3);
      v14 = sub_27089C(v13, v12);
      if ( v15 )
        return 1;
      V_LOCK(v14);
      V_INT((int)v26, "poolno", *(int *)a4);
      v25 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "share_result",
        12,
        569,
        80,
        v28);
    }
    else
    {
      sub_8A0D8("NULL");
      v22 = sub_27089C(v13, v12);
      if ( v23 )
        return 1;
      V_LOCK(v22);
      V_INT((int)&v27, "poolno", *(int *)a4);
      v24 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "share_result",
        12,
        575,
        80,
        v28);
    }
    return 1;
  }
}
