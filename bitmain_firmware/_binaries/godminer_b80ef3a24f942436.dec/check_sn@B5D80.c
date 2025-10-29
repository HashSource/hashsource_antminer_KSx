int __fastcall check_sn(int a1)
{
  bool v1; // zf
  int *v2; // r4
  FILE *v3; // r0
  FILE *v4; // r6
  char *v5; // r0
  size_t v6; // r0
  int v7; // r3
  int v8; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  __int64 ptr; // [sp+14h] [bp-1018h] BYREF
  _BYTE v14[10]; // [sp+1Ch] [bp-1010h]
  _BYTE v15[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = a1 == 0;
  v2 = (int *)(unsigned __int16)&g_miner_sn_file_path;
  if ( !a1 )
    HIWORD(v2) = (unsigned int)&g_miner_sn_file_path >> 16;
  ptr = 0;
  *(_QWORD *)v14 = 0;
  if ( a1 )
    HIWORD(v2) = 47;
  else
    a1 = 39404;
  if ( v1 )
    HIWORD(a1) = 39;
  *(_QWORD *)&v14[2] = 0;
  *v2 = a1;
  v3 = (FILE *)fopen64(a1, "r");
  v4 = v3;
  if ( v3 )
  {
    if ( fread(&ptr, 0x11u, 1u, v3) )
    {
      v5 = strstr((const char *)&ptr, "\r\n");
      if ( v5 )
        strncpy(g_miner_sn, (const char *)&ptr, v5 - (char *)&ptr);
      else
        strcpy(g_miner_sn, (const char *)&ptr);
      v6 = strlen(g_miner_sn) - 1;
      v7 = *((unsigned __int8 *)v2 + v6 + 4);
      if ( v7 == 10 )
      {
        *((_BYTE *)v2 + v6 + 4) = 0;
        v6 = strlen(g_miner_sn) - 1;
        v7 = *((unsigned __int8 *)v2 + v6 + 4);
      }
      if ( v7 == 13 )
        *((_BYTE *)v2 + v6 + 4) = 0;
      V_LOCK(v6);
      v8 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/check_sn.c",
        165,
        "check_sn",
        8,
        51,
        60,
        v15);
      fclose(v4);
      return 0;
    }
    else
    {
      if ( (_BYTE)ptr )
      {
        V_LOCK(0);
        strlen((const char *)&ptr);
        v11 = logfmt_raw((int)v15, 0x1000u);
        V_UNLOCK(v11);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_sn.c",
          165,
          "check_sn",
          8,
          55,
          100,
          v15);
      }
      else
      {
        V_LOCK(0);
        v10 = logfmt_raw((int)v15, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/miner_util/check_sn.c",
          165,
          "check_sn",
          8,
          57,
          100,
          v15);
      }
      return 1;
    }
  }
  else
  {
    V_LOCK(0);
    v12 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/miner_util/check_sn.c",
      165,
      "check_sn",
      8,
      23,
      100,
      v15);
    return 2;
  }
}
