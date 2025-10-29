int __fastcall sub_A14FC(int a1, int a2)
{
  const char *v4; // r0
  const char *v5; // r1
  int v6; // r0
  int v8; // r0
  void *v9; // r4
  _BYTE v10[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( *(_DWORD *)(a1 + 1132) || (v9 = calloc(1u, 0x11u), (*(_DWORD *)(a1 + 1132) = v9) != 0) )
  {
    if ( *(_DWORD *)(a2 + 1588) )
    {
      v4 = *(const char **)(a1 + 1124);
      if ( v4 && (v5 = *(const char **)(a2 + 1580)) != 0 && (v4 = (const char *)strcmp(v4, v5)) == 0 )
      {
        V_LOCK(0);
        v6 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v6);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
          185,
          "check_job_ks5",
          13,
          206,
          20,
          v10);
        return 0;
      }
      else
      {
        V_LOCK(v4);
        v8 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/frontend/frontend_ks5/frontend_ks5.c",
          185,
          "check_job_ks5",
          13,
          211,
          20,
          v10);
        return 2;
      }
    }
    else
    {
      printf("invalid pointer(%s)!\n", "pool->work.private");
      return 0;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
