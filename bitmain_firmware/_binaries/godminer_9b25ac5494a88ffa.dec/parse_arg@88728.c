int __fastcall parse_arg(int result, char *s)
{
  int v3; // r0
  int v4; // r2
  int v5; // r0
  _DWORD *file; // r0
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0
  const char *v11; // r7
  const char *v12; // r8
  size_t v13; // r6
  int v14; // r5
  const char *v15; // t1
  int v16; // r0
  int v17; // r2
  char *v18; // r3
  int v19; // r0
  unsigned int v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  int v28[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v29[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    if ( result )
    {
      V_LOCK(result);
      v19 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v19);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-kas_2382/god-miner.c",
               160,
               "parse_arg",
               9,
               422,
               100,
               v29);
    }
  }
  else if ( result > 117 )
  {
    if ( result > 1033 )
    {
      if ( result == 1035 )
      {
        v20 = strtol(s, 0, 10);
        V_LOCK(v20);
        v21 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v21);
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                   160,
                   "parse_arg",
                   9,
                   472,
                   40,
                   v29);
        if ( v20 > 1 )
        {
          V_LOCK(result);
          v23 = logfmt_raw((int)v29, 0x1000u);
          V_UNLOCK(v23);
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                   160,
                   "parse_arg",
                   9,
                   474,
                   100,
                   v29);
        }
        else
        {
          opt_custom_power_mode = v20;
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
          v10 = logfmt_raw((int)v29, 0x1000u);
          V_UNLOCK(v10);
          v4 = 465;
LABEL_9:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "parse_arg",
            9,
            v4,
            100,
            v29);
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
    file = (_DWORD *)json_load_file(s, 0, v28);
    v7 = file;
    if ( file && !*file )
    {
      parse_config((int)file);
      if ( v7[1] != -1 )
      {
        v25 = v7 + 1;
        __dmb(0xBu);
        do
        {
          v26 = __ldrex(v25);
          v27 = v26 - 1;
        }
        while ( __strex(v27, v25) );
        if ( !v27 )
          json_delete(v7);
      }
    }
    else if ( v28[0] < 0 )
    {
      V_LOCK(file);
      v24 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "parse_arg",
        9,
        390,
        100,
        v29);
    }
    else
    {
      V_LOCK(file);
      v8 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-kas_2382/god-miner.c",
        160,
        "parse_arg",
        9,
        392,
        100,
        v29);
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
        v9 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v9);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                 160,
                 "parse_arg",
                 9,
                 430,
                 100,
                 v29);
      }
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK(104);
          v5 = logfmt_raw((int)v29, 0x1000u);
          V_UNLOCK(v5);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-kas_2382/god-miner.c",
            160,
            "parse_arg",
            9,
            482,
            40,
            v29);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      if ( result )
      {
        V_LOCK(result);
        v22 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v22);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/god-miner.c",
                 160,
                 "parse_arg",
                 9,
                 409,
                 100,
                 v29);
      }
      else if ( *s )
      {
        v17 = (unsigned __int8)s[1];
        v18 = s + 1;
        *s = 120;
        if ( v17 )
        {
          do
            *v18++ = 0;
          while ( *v18 );
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
        v11 = "ckb_2040";
        v12 = "$\r'";
        v13 = 8;
        v14 = 0;
        while ( 1 )
        {
          if ( v13 )
          {
            result = strncasecmp(s, v11, v13);
            if ( !result && !s[v13] )
              break;
          }
          if ( ++v14 == 13 )
          {
            V_LOCK(result);
            v16 = logfmt_raw((int)v29, 0x1000u);
            V_UNLOCK(v16);
            return zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-kas_2382/god-miner.c",
                     160,
                     "parse_arg",
                     9,
                     373,
                     100,
                     v29);
          }
          v15 = (const char *)*((_DWORD *)v12 + 1);
          v12 += 4;
          v11 = v15;
          result = strlen(v15);
          v13 = result;
        }
        opt_algo = v14;
        break;
      case 'F':
        fan_pwm_fixed = 1;
        break;
      default:
LABEL_8:
        V_LOCK(result);
        v3 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v3);
        v4 = 495;
        goto LABEL_9;
    }
  }
  return result;
}
