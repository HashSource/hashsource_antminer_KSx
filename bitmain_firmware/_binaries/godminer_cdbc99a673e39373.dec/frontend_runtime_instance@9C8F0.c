int __fastcall frontend_runtime_instance(int a1)
{
  int v1; // r4
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = dword_2D4658;
  if ( !dword_2D4658 )
  {
    V_LOCK(a1);
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/frontend/frontend_interface.c",
      173,
      "frontend_runtime_instance",
      25,
      74,
      100,
      v4);
  }
  return v1;
}
