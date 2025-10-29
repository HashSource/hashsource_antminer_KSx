void *__fastcall abin2hex(int a1, int a2)
{
  void *v4; // r0
  void *v5; // r8
  int v6; // r6
  int v7; // r4
  int v8; // r6
  char *v9; // r5
  int v10; // t1
  char *v11; // r0
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = malloc(2 * a2 + 1);
  v5 = v4;
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = a1 + a2;
      v7 = a1 - 1;
      v8 = v6 - 1;
      v9 = (char *)v4;
      do
      {
        v10 = *(unsigned __int8 *)++v7;
        v11 = v9;
        v9 += 2;
        sprintf(v11, "%02x", v10);
      }
      while ( v7 != v8 );
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Sweep error string = %s.", "M:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/util.c",
      150,
      "abin2hex",
      8,
      132,
      100,
      v13);
  }
  return v5;
}
