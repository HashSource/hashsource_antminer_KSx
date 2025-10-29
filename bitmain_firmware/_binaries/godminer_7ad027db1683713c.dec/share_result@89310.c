int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d18
  __int64 v8; // r6
  double v9; // d16
  double v11; // d18
  double v12; // d17
  double v13; // d16
  time_t v14; // r0
  __int64 v15; // r6
  _DWORD v16[7]; // [sp+28h] [bp-1040h] BYREF
  int v17; // [sp+44h] [bp-1024h]
  _DWORD v18[7]; // [sp+48h] [bp-1020h] BYREF
  int v19; // [sp+64h] [bp-1004h]
  char v20[4096]; // [sp+68h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_2D25A4);
  if ( a1 )
  {
    v11 = a4[226];
    v12 = a4[245];
    ++*((_QWORD *)a4 + 241);
    ++*(_QWORD *)&total_accepted;
    v13 = total_diff_accepted + v11;
    a4[245] = v12 + v11;
    total_diff_accepted = v13;
    v14 = time(0);
    v15 = *((_QWORD *)a4 + 226);
    *((_DWORD *)a4 + 404) = v14;
    *((_QWORD *)a4 + 203) = v15;
    pthread_mutex_unlock(&stru_2D25A4);
    return 1;
  }
  else
  {
    v7 = a4[226];
    v8 = *((_QWORD *)a4 + 242) + 1LL;
    v9 = total_diff_rejected + v7;
    a4[246] = a4[246] + v7;
    *((_QWORD *)a4 + 242) = v8;
    ++*(_QWORD *)&total_rejected;
    total_diff_rejected = v9;
    pthread_mutex_unlock(&stru_2D25A4);
    if ( a3 )
    {
      sub_882B4(a3);
      V_LOCK();
      V_INT((int)v16, "poolno", *(int *)a4);
      logfmt_raw(
        v20,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "share_result",
        12,
        558,
        80,
        v20);
    }
    else
    {
      sub_882B4("NULL");
      V_LOCK();
      V_INT((int)v18, "poolno", *(int *)a4);
      logfmt_raw(
        v20,
        0x1000u,
        0,
        v19,
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        "reject reason:: NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/pool.c",
        150,
        "share_result",
        12,
        561,
        80,
        v20);
    }
    return 1;
  }
}
