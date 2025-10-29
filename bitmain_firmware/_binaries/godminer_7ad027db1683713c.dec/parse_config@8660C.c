void __fastcall parse_config(_DWORD *a1)
{
  double v1; // d0
  char **v2; // r4
  char *v3; // r10
  char *v5; // t1
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  int v8; // r3
  const char *v9; // r0
  char *v10; // r5
  int v11; // r0
  unsigned int i; // r10
  _DWORD *v13; // r0
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  v2 = &off_25E234;
  v3 = "algo";
  while ( 1 )
  {
    v6 = (_DWORD *)json_object_get(a1, v3);
    v7 = v6;
    if ( !v6 )
      goto LABEL_7;
    v8 = *v6;
    if ( v2[1] )
      break;
    if ( v8 != 5 )
      goto LABEL_7;
    parse_arg((int)v2[3], "");
    if ( &unk_25E344 == (_UNKNOWN *)v2 )
      return;
LABEL_8:
    v5 = v2[4];
    v2 += 4;
    v3 = v5;
    if ( !v5 )
      return;
  }
  if ( v8 != 2 )
  {
    switch ( v8 )
    {
      case 3:
        v11 = json_integer_value((int)v6);
        sprintf(s, "%d", v11);
        parse_arg((int)v2[3], s);
        break;
      case 4:
        json_real_value();
        sprintf(s, "%f", v1);
        parse_arg((int)v2[3], s);
        break;
      case 1:
        for ( i = 0; (unsigned int)json_array_size(v7) > i; ++i )
        {
          v13 = json_array_get(v7, i);
          if ( !v13 )
            break;
          if ( *v13 )
          {
            V_LOCK();
            logfmt_raw(s, 0x1000u, 0, "JSON %s array value invalid", *v2);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/god-miner.c",
              155,
              "parse_config",
              12,
              531,
              100,
              s);
          }
          else
          {
            parse_config(v13);
          }
        }
        break;
      default:
        V_LOCK();
        logfmt_raw(s, 0x1000u, 0, "JSON option %s invalid", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/god-miner.c",
          155,
          "parse_config",
          12,
          539,
          100,
          s);
        break;
    }
LABEL_7:
    if ( &unk_25E344 == (_UNKNOWN *)v2 )
      return;
    goto LABEL_8;
  }
  v9 = (const char *)json_string_value(v6);
  v10 = _strdup(v9);
  if ( v10 )
  {
    parse_arg((int)v2[3], v10);
    free(v10);
    goto LABEL_7;
  }
}
