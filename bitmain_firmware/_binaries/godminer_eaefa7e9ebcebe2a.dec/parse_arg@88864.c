int __fastcall parse_arg(int result, char *s)
{
  int v3; // r0
  int v4; // r0
  _DWORD *file; // r0
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  const char *v10; // r7
  char **v11; // r8
  size_t v12; // r6
  int v13; // r5
  const char *v14; // t1
  int v15; // r0
  int v16; // r2
  char *v17; // r3
  int v18; // r0
  unsigned int v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v28[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    if ( result )
    {
      V_LOCK(result);
      v18 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v18);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/god-miner.c",
               160,
               "parse_arg",
               9,
               422,
               100,
               v28);
    }
  }
  else if ( result > 117 )
  {
    if ( result > 1033 )
    {
      if ( result == 1035 )
      {
        v19 = strtol(s, 0, 10);
        V_LOCK(v19);
        v20 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v20);
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                   160,
                   "parse_arg",
                   9,
                   472,
                   40,
                   v28);
        if ( v19 > 1 )
        {
          V_LOCK(result);
          v22 = logfmt_raw((int)v28, 0x1000u);
          V_UNLOCK(v22);
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                   160,
                   "parse_arg",
                   9,
                   474,
                   100,
                   v28);
        }
        else
        {
          opt_custom_power_mode = v19;
        }
      }
      else if ( result >= 1035 )
      {
        if ( result != 1036 )
          goto LABEL_8;
      }
      else
      {
        result = strtol(s, 0, 10);
        if ( (unsigned int)result > 0x64 )
        {
          V_LOCK(result);
          v9 = logfmt_raw((int)v28, 0x1000u);
          V_UNLOCK(v9);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "parse_arg",
            9,
            465,
            100,
            v28);
LABEL_9:
          exit(1);
        }
        fan_pwm = result;
      }
    }
    else if ( result < 1032 )
    {
      switch ( result )
      {
        case 122:
          if ( opt_zlog_conf_file )
            free((void *)opt_zlog_conf_file);
          result = (int)_strdup(s);
          opt_zlog_conf_file = result;
          break;
        case 1030:
          opt_api_remote = 1;
          break;
        case 118:
          opt_version_path = (int)s;
          break;
        default:
          goto LABEL_8;
      }
    }
  }
  else if ( result == 99 )
  {
    file = (_DWORD *)json_load_file(s, 0, v27);
    v6 = file;
    if ( file && !*file )
    {
      parse_config((int)file);
      if ( v6[1] != -1 )
      {
        v24 = v6 + 1;
        __dmb(0xBu);
        do
        {
          v25 = __ldrex(v24);
          v26 = v25 - 1;
        }
        while ( __strex(v26, v24) );
        if ( !v26 )
          json_delete(v6);
      }
    }
    else if ( v27[0] < 0 )
    {
      V_LOCK(file);
      v23 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "parse_arg",
        9,
        390,
        100,
        v28);
    }
    else
    {
      V_LOCK(file);
      v7 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "parse_arg",
        9,
        392,
        100,
        v28);
    }
    if ( default_config )
    {
      free((void *)default_config);
      default_config = 0;
    }
    result = (int)_strdup(s);
    default_config = result;
  }
  else if ( result > 99 )
  {
    if ( result == 111 )
    {
      result = set_url(s);
      if ( result )
      {
        V_LOCK(result);
        v8 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v8);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                 160,
                 "parse_arg",
                 9,
                 430,
                 100,
                 v28);
      }
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK(104);
          v4 = logfmt_raw((int)v28, 0x1000u);
          V_UNLOCK(v4);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "parse_arg",
            9,
            482,
            40,
            v28);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      if ( result )
      {
        V_LOCK(result);
        v21 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v21);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                 160,
                 "parse_arg",
                 9,
                 409,
                 100,
                 v28);
      }
      else if ( *s )
      {
        v16 = (unsigned __int8)s[1];
        v17 = s + 1;
        *s = 120;
        if ( v16 )
        {
          do
            *v17++ = 0;
          while ( *v17 );
        }
      }
    }
  }
  else
  {
    switch ( result )
    {
      case 'P':
        opt_protocol = 1;
        break;
      case 'a':
        v10 = "ckb_2040";
        v11 = off_2706EC;
        v12 = 8;
        v13 = 0;
        while ( 1 )
        {
          if ( v12 )
          {
            result = strncasecmp(s, v10, v12);
            if ( !result && !s[v12] )
              break;
          }
          if ( ++v13 == 13 )
          {
            V_LOCK(result);
            v15 = logfmt_raw((int)v28, 0x1000u);
            V_UNLOCK(v15);
            return zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                     160,
                     "parse_arg",
                     9,
                     373,
                     100,
                     v28);
          }
          v14 = v11[1];
          ++v11;
          v10 = v14;
          result = strlen(v14);
          v12 = result;
        }
        opt_algo = v13;
        break;
      case 'F':
        fan_pwm_fixed = 1;
        break;
      default:
LABEL_8:
        V_LOCK(result);
        v3 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v3);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "parse_arg",
          9,
          495,
          100,
          v28);
        goto LABEL_9;
    }
  }
  return result;
}
