int __fastcall parse_arg(int result, char *s)
{
  int v3; // r2
  char *v4; // r3
  int v5; // r0
  int v6; // r0
  double *file; // r0
  double *v8; // r5
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r5
  int v16; // r0
  const char *v17; // r7
  char **v18; // r8
  size_t v19; // r6
  int v20; // r5
  const char *v21; // t1
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v30[4096]; // [sp+110h] [bp-1000h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    if ( result )
    {
      V_LOCK(result);
      v25 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v25);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/rele"
               "ase/build/godminer-origin_godminer-new/god-miner.c",
               155,
               "parse_arg",
               9,
               251,
               100,
               v30);
    }
    return result;
  }
  if ( result > 117 )
  {
    if ( result > 1033 )
    {
      if ( result == 1035 )
      {
        v15 = strtol(s, 0, 10);
        V_LOCK(v15);
        v16 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v16);
        result = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/god-miner.c",
                   155,
                   "parse_arg",
                   9,
                   301,
                   40,
                   v30);
        if ( v15 > 1 )
        {
          V_LOCK(result);
          v27 = logfmt_raw((int)v30, 0x1000u);
          V_UNLOCK(v27);
          return zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/"
                   "release/build/godminer-origin_godminer-new/god-miner.c",
                   155,
                   "parse_arg",
                   9,
                   303,
                   100,
                   v30);
        }
        else
        {
          opt_custom_power_mode = v15;
        }
        return result;
      }
      if ( result < 1035 )
      {
        result = strtol(s, 0, 10);
        if ( (unsigned int)result <= 0x64 )
        {
          fan_pwm = result;
          return result;
        }
        V_LOCK(result);
        v13 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "parse_arg",
          9,
          294,
          100,
          v30);
LABEL_20:
        exit(1);
      }
      if ( result == 1036 )
        return result;
    }
    else
    {
      if ( result >= 1032 )
        return result;
      switch ( result )
      {
        case 122:
          if ( opt_zlog_conf_file )
            free((void *)opt_zlog_conf_file);
          result = (int)_strdup(s);
          opt_zlog_conf_file = result;
          return result;
        case 1030:
          opt_api_remote = 1;
          return result;
        case 118:
          opt_version_path = (int)s;
          return result;
      }
    }
    goto LABEL_19;
  }
  if ( result == 99 )
  {
    file = json_load_file(s, 0, (char *)v29);
    v8 = file;
    if ( !file || *(_DWORD *)file )
    {
      if ( v29[0] < 0 )
      {
        V_LOCK(file);
        v28 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v28);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "parse_arg",
          9,
          219,
          100,
          v30);
      }
      else
      {
        V_LOCK(file);
        v12 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v12);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "parse_arg",
          9,
          221,
          100,
          v30);
      }
    }
    else
    {
      parse_config();
      if ( *((_DWORD *)v8 + 1) != -1 )
      {
        v9 = (unsigned int *)v8 + 1;
        __dmb(0xBu);
        do
        {
          v10 = __ldrex(v9);
          v11 = v10 - 1;
        }
        while ( __strex(v11, v9) );
        if ( !v11 )
          json_delete(v8);
      }
    }
    if ( default_config )
    {
      free((void *)default_config);
      default_config = 0;
    }
    result = (int)_strdup(s);
    default_config = result;
    return result;
  }
  if ( result <= 99 )
  {
    switch ( result )
    {
      case 'P':
        opt_protocol = 1;
        return result;
      case 'a':
        v17 = "ckb_2040";
        v18 = off_2742F0;
        v19 = 8;
        v20 = 0;
        while ( 1 )
        {
          if ( v19 )
          {
            result = strncasecmp(s, v17, v19);
            if ( !result && !s[v19] )
              break;
          }
          if ( ++v20 == 13 )
          {
            V_LOCK(result);
            v22 = logfmt_raw((int)v30, 0x1000u);
            V_UNLOCK(v22);
            return zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tm"
                     "p/release/build/godminer-origin_godminer-new/god-miner.c",
                     155,
                     "parse_arg",
                     9,
                     198,
                     100,
                     v30);
          }
          v21 = v18[1];
          ++v18;
          v17 = v21;
          result = strlen(v21);
          v19 = result;
        }
        opt_algo = v20;
        return result;
      case 'F':
        fan_pwm_fixed = 1;
        return result;
    }
LABEL_19:
    V_LOCK(result);
    v5 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/god-miner.c",
      155,
      "parse_arg",
      9,
      324,
      100,
      v30);
    goto LABEL_20;
  }
  if ( result == 108 )
  {
    v23 = strtol(s, 0, 10);
    case_select = v23;
    V_LOCK(v23);
    v24 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v24);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/god-miner.c",
             155,
             "parse_arg",
             9,
             209,
             40,
             v30);
  }
  if ( result <= 108 )
  {
    if ( result == 104 )
    {
      V_LOCK(104);
      v6 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/god-miner.c",
        155,
        "parse_arg",
        9,
        311,
        40,
        v30);
      exit(0);
    }
    goto LABEL_19;
  }
  if ( result != 111 )
  {
    if ( result == 112 )
    {
      result = set_pass(s);
      if ( result )
      {
        V_LOCK(result);
        v26 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v26);
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/god-miner.c",
                 155,
                 "parse_arg",
                 9,
                 238,
                 100,
                 v30);
      }
      else if ( *s )
      {
        v3 = (unsigned __int8)s[1];
        v4 = s + 1;
        *s = 120;
        if ( v3 )
        {
          do
            *v4++ = 0;
          while ( *v4 );
        }
      }
      return result;
    }
    goto LABEL_19;
  }
  result = set_url(s);
  if ( result )
  {
    V_LOCK(result);
    v14 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v14);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/god-miner.c",
             155,
             "parse_arg",
             9,
             259,
             100,
             v30);
  }
  return result;
}
