int __fastcall workio_submit_work(int a1, pthread_mutex_t *a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v9; // r0
  int v10; // r1
  __int64 v11; // r2
  int v12; // r0
  _BYTE v13[32]; // [sp+38h] [bp-1C24h] BYREF
  _BYTE v14[3064]; // [sp+58h] [bp-1C04h] BYREF
  _BYTE v15[4100]; // [sp+C58h] [bp-1004h] BYREF

  v4 = frontend_runtime_instance(a1);
  v5 = pool_tget(a2, (unsigned __int8 *)&a2[79].__size[8]);
  v6 = v5;
  if ( v5 )
  {
    V_LOCK(v5);
    V_INT((int)v14, "poolno", a2->__lock);
    v9 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner.c",
      151,
      "workio_submit_work",
      18,
      18,
      20,
      v15);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes(a2);
    (*(void (__fastcall **)(int, pthread_mutex_t *, _BYTE *))(v4 + 32))(a1, a2, v14);
    while ( 1 )
    {
      v7 = (*(int (__fastcall **)(pthread_mutex_t *, _BYTE *))(v4 + 12))(a2, v14);
      if ( v7 )
        break;
      v10 = dword_2F2D14;
      v11 = 3518437209LL * (unsigned int)dword_2F2D14;
      LODWORD(v11) = a2[81].__owner;
      ++total_ro;
      a2[81].__owner = v11 + 1;
      dword_2F2D14 = v10 + 1;
      if ( v10 == 10000 * (HIDWORD(v11) >> 13) )
      {
        V_LOCK(10000);
        V_INT((int)v13, "poolno", a2->__lock);
        v12 = logfmt_raw((int)v15, 0x1000u);
        V_UNLOCK(v12);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner.c",
          151,
          "workio_submit_work",
          18,
          34,
          100,
          v15);
        if ( v6 == 3 )
          return v7;
      }
      else if ( v6 == 3 )
      {
        return v7;
      }
      ++v6;
    }
    return v7;
  }
}
