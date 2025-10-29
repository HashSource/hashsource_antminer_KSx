void __fastcall __noreturn sub_162050(int a1)
{
  unsigned int v2; // r4
  struct tm *v3; // r8
  size_t v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r0
  char *s1; // [sp+14h] [bp-2058h]
  char *dest; // [sp+20h] [bp-204Ch]
  time_t timer; // [sp+30h] [bp-203Ch] BYREF
  char s[20]; // [sp+34h] [bp-2038h] BYREF
  char v15[32]; // [sp+48h] [bp-2024h] BYREF
  char v16[4056]; // [sp+68h] [bp-2004h] BYREF
  char v17[4100]; // [sp+1068h] [bp-1004h] BYREF

  if ( !a1 )
  {
    strcpy(v16, "input arg wrong\n");
    V_LOCK(*(_DWORD *)"input arg wrong\n");
    v10 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/common/general/log/log.c",
      173,
      "log_thread_routine",
      18,
      272,
      120,
      v17);
  }
  v2 = 1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 92) = "cglog_sync";
  s1 = (char *)(a1 + 12);
  dest = (char *)(a1 + 72);
  while ( 1 )
  {
    do
    {
      ++v2;
      sleep(1u);
    }
    while ( v2 % 0x1E );
    time(&timer);
    v3 = localtime(&timer);
    strftime(v15, 0xFu, "%Y-%m/%d", v3);
    strftime(s, 0xAu, "%H-%M-%S", v3);
    if ( !strncmp((const char *)(a1 + 42), "1970", 4u) && timer > 31536000 )
    {
      v7 = sub_161C98(a1, "cglog_init", v15, s);
      if ( !(v7 | sub_161C98(a1, "cglog_sync", v15, s)) )
      {
        strncpy((char *)(a1 + 42), v15, 0x1Eu);
        strncpy(dest, s, 0x14u);
        strcpy(s1, (const char *)(a1 + 42));
      }
    }
    if ( *(_BYTE *)(a1 + 12) )
    {
      v4 = strlen(v15);
      if ( strncmp(s1, v15, v4) )
      {
        v5 = snprintf(
               v16,
               0x1000u,
               "/usr/bin/symbollink.sh %s %s %s %s %s",
               *(const char **)(a1 + 8),
               (const char *)(a1 + 42),
               dest,
               "cglog_sync",
               v15);
        if ( v5 >= 0x1000 )
        {
          V_LOCK(v5);
          v9 = logfmt_raw((int)v17, 0x1000u);
          V_UNLOCK(v9);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/common/general/log/log.c",
            173,
            "_log_generate_symbol_link",
            25,
            246,
            40,
            v17);
        }
        else
        {
          v6 = my_system(v16);
          if ( v6 )
          {
            V_LOCK(v6);
            v8 = logfmt_raw((int)v17, 0x1000u);
            V_UNLOCK(v8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/common/general/log/log.c",
              173,
              "_log_generate_symbol_link",
              25,
              253,
              40,
              v17);
          }
          else
          {
            strncpy(s1, v15, 0x1Eu);
          }
        }
      }
    }
    else
    {
      strcpy(s1, (const char *)(a1 + 42));
    }
    sub_161E28(a1);
  }
}
