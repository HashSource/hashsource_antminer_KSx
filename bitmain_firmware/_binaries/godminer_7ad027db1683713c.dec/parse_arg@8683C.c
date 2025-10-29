int __fastcall parse_arg(int result, char *s)
{
  double *file; // r0
  double *v4; // r5
  int v5; // r5
  const char *v6; // r7
  char **v7; // r8
  size_t v8; // r6
  int v9; // r5
  const char *v10; // t1
  int v11; // r5
  int v12; // r2
  char *v13; // r3
  int v14; // r5
  unsigned int v15; // r5
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v19[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v20[160]; // [sp+70h] [bp-10A0h] BYREF
  char v21[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    v14 = result;
    if ( result )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "%s", v14);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/god-miner.c",
               155,
               "parse_arg",
               9,
               420,
               100,
               v21);
    }
  }
  else if ( result > 117 )
  {
    if ( result > 1033 )
    {
      if ( result == 1035 )
      {
        v15 = strtol(s, 0, 10);
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "work mode: %d!", v15);
        V_UNLOCK();
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/god-miner.c",
                   155,
                   "parse_arg",
                   9,
                   470,
                   40,
                   v21);
        if ( v15 > 1 )
        {
          V_LOCK();
          logfmt_raw(v21, 0x1000u, 0, "power mode value error!");
          V_UNLOCK();
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/god-miner.c",
                   155,
                   "parse_arg",
                   9,
                   472,
                   100,
                   v21);
        }
        else
        {
          opt_custom_power_mode = v15;
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
          V_LOCK();
          logfmt_raw(v21, 0x1000u, 0, "fan_pwm value error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "parse_arg",
            9,
            463,
            100,
            v21);
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
    file = json_load_file(s, 0, (char *)v19);
    v4 = file;
    if ( file && !*(_DWORD *)file )
    {
      parse_config(file);
      if ( *((_DWORD *)v4 + 1) != -1 )
      {
        v16 = (unsigned int *)v4 + 1;
        __dmb(0xBu);
        do
        {
          v17 = __ldrex(v16);
          v18 = v17 - 1;
        }
        while ( __strex(v18, v16) );
        if ( !v18 )
          json_delete(v4);
      }
    }
    else if ( v19[0] < 0 )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "%s", v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "parse_arg",
        9,
        388,
        100,
        v21);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "%s:%d: %s", s, v19[0], v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "parse_arg",
        9,
        390,
        100,
        v21);
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
      v5 = result;
      if ( result )
      {
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "%s", v5);
        V_UNLOCK();
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/god-miner.c",
                 155,
                 "parse_arg",
                 9,
                 428,
                 100,
                 v21);
      }
    }
    else
    {
      if ( result != 112 )
      {
        if ( result == 104 )
        {
          V_LOCK();
          logfmt_raw(
            v21,
            0x1000u,
            0,
            "Usage: GODMINER [OPTIONS]\n"
            "Options:\n"
            "  -a, --algo=ALGO       specify the algorithm to use\n"
            "                          eth_1798         ethash\n"
            "                          ckb_2040         eaglesong\n"
            "                          ckb_2042         eaglesong\n"
            "                          kda_2110         blake2s\n"
            "                          dcr_1727         blaker14\n"
            "                          hns_2130         blake2s\n"
            "                          dash_1766        x11\n"
            "  -o, --url=URL         URL of mining server\n"
            "  -u, --user=USERNAME   username for mining server\n"
            "  -p, --pass=PASSWORD   password for mining server\n"
            "  -P, --protocol        verbose dump of protocol-level activities\n"
            "      --api-remote      Allow remote control\n"
            "  -c, --config=FILE     load a JSON-format configuration file\n"
            "  -v, --version         display version information and exit\n"
            "  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n"
            "      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n"
            "      --bitmain-freq=N  set working freq\n"
            "      --bitmain-voltage=N  set working power voltage\n"
            "  -z, --zlog=FILE       load a zlog configuration file\n"
            "  -h, --help            display this help text and exit\n");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/god-miner.c",
            155,
            "parse_arg",
            9,
            480,
            40,
            v21);
          exit(0);
        }
        goto LABEL_8;
      }
      result = set_pass(s);
      v11 = result;
      if ( result )
      {
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "%s", v11);
        V_UNLOCK();
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/god-miner.c",
                 155,
                 "parse_arg",
                 9,
                 407,
                 100,
                 v21);
      }
      else if ( *s )
      {
        v12 = (unsigned __int8)s[1];
        v13 = s + 1;
        *s = 120;
        if ( v12 )
        {
          do
            *v13++ = 0;
          while ( *v13 );
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
        v6 = "ckb_2040";
        v7 = off_25E1D8;
        v8 = 8;
        v9 = 0;
        while ( 1 )
        {
          if ( v8 )
          {
            result = strncasecmp(s, v6, v8);
            if ( !result && !s[v8] )
              break;
          }
          if ( ++v9 == 12 )
          {
            V_LOCK();
            logfmt_raw(v21, 0x1000u, 0, "Unknown algo parameter '%s'", s);
            V_UNLOCK();
            return zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-new/god-miner.c",
                     155,
                     "parse_arg",
                     9,
                     371,
                     100,
                     v21);
          }
          v10 = v7[1];
          ++v7;
          v6 = v10;
          v8 = strlen(v10);
        }
        opt_algo = v9;
        break;
      case 'F':
        fan_pwm_fixed = 1;
        break;
      default:
LABEL_8:
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, "unknow config parameter!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "parse_arg",
          9,
          493,
          100,
          v21);
        goto LABEL_9;
    }
  }
  return result;
}
