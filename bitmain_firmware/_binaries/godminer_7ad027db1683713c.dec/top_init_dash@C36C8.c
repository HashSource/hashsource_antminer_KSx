int __fastcall top_init_dash(int *a1)
{
  int v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v5; // r1
  char v6; // r3
  void (__fastcall *v7)(int *, int, int); // r3
  _DWORD v9[7]; // [sp+28h] [bp-1024h] BYREF
  int v10; // [sp+44h] [bp-1008h]
  char v11[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v9, "chain", a1[58]);
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "top_init_dash");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    189,
    "top_init_dash",
    13,
    640,
    40,
    v11);
  v2 = a1[78];
  v3 = a1[116];
  v4 = sub_25A970(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v5 = v3 - 1;
    v6 = 0;
    do
    {
      *(_BYTE *)++v5 = v6;
      v6 += v4;
    }
    while ( v5 != v3 - 1 + (unsigned __int8)v2 );
    v3 = a1[116];
  }
  v7 = (void (__fastcall *)(int *, int, int))a1[60];
  a1[101] = v4;
  v7(a1, v3, v2);
  usleep(0x2710u);
  sub_BFB88((int)a1, 0);
  usleep(0x2710u);
  sub_C35C0((int)a1);
  return 0;
}
