void __fastcall parse_config(int a1)
{
  double v1; // d0
  char **v2; // r4
  const char *v3; // r10
  int v5; // r0
  const char *v6; // t1
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r3
  const char *v10; // r0
  char *v11; // r5
  int v12; // r0
  unsigned int i; // r10
  _DWORD *v14; // r0
  int v15; // r0
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  v2 = &off_27074C;
  v3 = "algo";
  while ( 1 )
  {
    v7 = (_DWORD *)json_object_get(a1, v3);
    v8 = v7;
    if ( !v7 )
      goto LABEL_7;
    v9 = *v7;
    if ( v2[1] )
      break;
    if ( v9 != 5 )
      goto LABEL_7;
    parse_arg((int)v2[3], "");
    if ( &unk_27085C == (_UNKNOWN *)v2 )
      return;
LABEL_8:
    v6 = v2[4];
    v2 += 4;
    v3 = v6;
    if ( !v6 )
      return;
  }
  if ( v9 != 2 )
  {
    switch ( v9 )
    {
      case 3:
        v12 = json_integer_value(v7);
        sprintf(s, "%d", v12);
        parse_arg((int)v2[3], s);
        break;
      case 4:
        json_real_value(v7);
        sprintf(s, "%f", v1);
        parse_arg((int)v2[3], s);
        break;
      case 1:
        for ( i = 0; json_array_size(v8) > i; ++i )
        {
          v14 = (_DWORD *)json_array_get(v8, i);
          if ( !v14 )
            break;
          if ( *v14 )
          {
            V_LOCK(v14);
            v15 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v15);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/god-miner.c",
              160,
              "parse_config",
              12,
              533,
              100,
              s);
          }
          else
          {
            parse_config();
          }
        }
        break;
      default:
        V_LOCK(v7);
        v5 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v5);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/god-miner.c",
          160,
          "parse_config",
          12,
          541,
          100,
          s);
        break;
    }
LABEL_7:
    if ( &unk_27085C == (_UNKNOWN *)v2 )
      return;
    goto LABEL_8;
  }
  v10 = (const char *)json_string_value(v7);
  v11 = _strdup(v10);
  if ( v11 )
  {
    parse_arg((int)v2[3], v11);
    free(v11);
    goto LABEL_7;
  }
}
