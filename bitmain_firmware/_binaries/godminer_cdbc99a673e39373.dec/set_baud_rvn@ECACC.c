int __fastcall set_baud_rvn(int a1, char *a2)
{
  int v3; // r8
  int v4; // r0
  void (__fastcall *v5)(int, _DWORD *); // r3
  int v7; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  __int64 v9; // [sp+50h] [bp-FF8h]

  if ( a2 == (_BYTE *)&loc_FE500 + 2 )
    goto LABEL_18;
  if ( (int)a2 > 1041666 )
  {
    if ( a2 == (char *)&loc_17D784 )
      goto LABEL_17;
    if ( (int)a2 > 1562500 )
    {
      if ( a2 == (char *)&unk_2DC6C0 || a2 == (char *)3125000 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      goto LABEL_11;
    }
    if ( a2 == (char *)&loc_16E360 )
    {
LABEL_17:
      v3 = 1;
      goto LABEL_9;
    }
LABEL_11:
    v3 = 26;
    goto LABEL_9;
  }
  if ( a2 != "r_alloc" )
  {
    if ( a2 != (char *)&loc_E1000 )
    {
      if ( a2 == (char *)38400 )
      {
        v3 = 80;
        goto LABEL_9;
      }
      goto LABEL_11;
    }
LABEL_18:
    v3 = 2;
    goto LABEL_9;
  }
  v3 = 6;
LABEL_9:
  V_LOCK(a1);
  V_INT((int)&v7, "chain");
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    187,
    "set_baud_rvn",
    12,
    1183,
    60,
    v8);
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 248);
  v8[1] = 0;
  v8[0] = v3;
  v9 = 6291457;
  v5(a1, v8);
  usleep(0x2710u);
  return 0;
}
