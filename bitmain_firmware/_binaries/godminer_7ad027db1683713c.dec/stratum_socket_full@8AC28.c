int __fastcall stratum_socket_full(int a1, __time_t a2)
{
  size_t v4; // r0
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  v4 = strlen(*(const char **)(a1 + 44));
  logfmt_raw(v6, 0x1000u, 0, "stratum_socket_full sockbuf len %zu", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/stratum_handler.c",
    161,
    "stratum_socket_full",
    19,
    104,
    20,
    v6);
  if ( **(_BYTE **)(a1 + 44) )
    return 1;
  else
    return socket_full(*(_DWORD *)(a1 + 36), a2);
}
