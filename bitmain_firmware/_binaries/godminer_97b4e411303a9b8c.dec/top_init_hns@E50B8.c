int __fastcall top_init_hns(_DWORD *a1)
{
  int v2; // r0
  int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  void (__fastcall *v8)(_DWORD *, int, int); // r3
  int v10; // [sp+28h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v10, "chain");
  v2 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_hns_2130/backend_hns_2130.c",
    192,
    "top_init_hns",
    12,
    524,
    40,
    v11);
  v3 = a1[83];
  v4 = a1[122];
  v5 = sub_26D748(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v6 != v4 - 1 + (unsigned __int8)v3 );
    v4 = a1[122];
  }
  v8 = (void (__fastcall *)(_DWORD *, int, int))a1[64];
  a1[107] = v5;
  v8(a1, v4, v3);
  sub_E1668((int)a1, 0);
  sub_E4FB0((int)a1);
  return 0;
}
