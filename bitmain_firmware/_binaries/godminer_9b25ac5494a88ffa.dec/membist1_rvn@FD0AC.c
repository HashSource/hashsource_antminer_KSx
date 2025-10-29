int __fastcall membist1_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  unsigned int *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  _DWORD *v12; // r4
  int i; // r5
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v20; // r0
  int v21; // r0
  void *s; // [sp+38h] [bp-F8h]
  int v23; // [sp+3Ch] [bp-F4h]
  int v24; // [sp+40h] [bp-F0h]
  _BYTE v25[32]; // [sp+50h] [bp-E0h] BYREF
  _BYTE v26[32]; // [sp+70h] [bp-C0h] BYREF
  _BYTE v27[32]; // [sp+90h] [bp-A0h] BYREF
  _BYTE v28[32]; // [sp+B0h] [bp-80h] BYREF
  _BYTE v29[32]; // [sp+D0h] [bp-60h] BYREF
  _BYTE v30[32]; // [sp+F0h] [bp-40h] BYREF
  _BYTE v31[32]; // [sp+110h] [bp-20h] BYREF
  double v32[512]; // [sp+130h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v25, "chain");
  v23 = 0;
  v2 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build/g"
    "odminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
    192,
    "membist1_rvn",
    12,
    894,
    60,
    v32);
  v24 = 0;
  s = malloc(0x300u);
  do
  {
    sub_F9520(a1, v23, 28, 1);
    usleep(0xC350u);
    sub_F9520(a1, v23, 160, -2147483647);
    usleep((__useconds_t)&elf_hash_chain[4398]);
    memset(s, 0, 0x300u);
    v3 = sub_F9898(a1, (unsigned __int16)v23, 161, s);
    v4 = v3;
    if ( v3 == 1
      || (V_LOCK(v3),
          V_INT((int)v26, "chain"),
          v5 = logfmt_raw((int)v32, 0x1000u),
          V_UNLOCK(v5),
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                 192,
                 "membist1_rvn",
                 12,
                 914,
                 100,
                 v32),
          v4 > 0) )
    {
      v6 = (unsigned int *)s;
      v7 = 0;
      do
      {
        while ( (*v6 & 0x80) == 0 )
        {
          V_LOCK(v3);
          ++v7;
          v6 += 3;
          V_INT((int)v28, "chain");
          v8 = logfmt_raw((int)v32, 0x1000u);
          V_UNLOCK(v8);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                 192,
                 "membist1_rvn",
                 12,
                 930,
                 100,
                 v32);
          if ( v4 <= v7 )
            goto LABEL_10;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v3);
          V_INT((int)v27, "chain");
          v20 = logfmt_raw((int)v32, 0x1000u);
          V_UNLOCK(v20);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                 192,
                 "membist1_rvn",
                 12,
                 923,
                 100,
                 v32);
          v24 += bswap32(*v6) & 0x7FFFFF;
        }
        ++v7;
        v6 += 3;
      }
      while ( v4 > v7 );
    }
LABEL_10:
    memset(s, 0, 0x300u);
    v9 = sub_F9898(a1, (unsigned __int16)v23, 162, s);
    v10 = v9;
    if ( v9 == 1
      || (V_LOCK(v9),
          V_INT((int)v29, "chain"),
          v11 = logfmt_raw((int)v32, 0x1000u),
          V_UNLOCK(v11),
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                 192,
                 "membist1_rvn",
                 12,
                 938,
                 100,
                 v32),
          v10 > 0) )
    {
      v12 = s;
      for ( i = 0; v10 > i; ++i )
      {
        while ( (*v12 & 0x80) == 0 )
        {
          V_LOCK(v9);
          V_INT((int)v31, "chain");
          v14 = logfmt_raw((int)v32, 0x1000u);
          V_UNLOCK(v14);
          v15 = 954;
          v16 = g_zc;
LABEL_17:
          ++i;
          v12 += 3;
          v9 = zlog(
                 v16,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/backend/backend_rvn_2044/backend_rvn_2044.c",
                 192,
                 "membist1_rvn",
                 12,
                 v15,
                 100,
                 v32);
          if ( v10 <= i )
            goto LABEL_18;
        }
        if ( (*v12 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v9);
          V_INT((int)v30, "chain");
          v21 = logfmt_raw((int)v32, 0x1000u);
          V_UNLOCK(v21);
          v16 = g_zc;
          v15 = 947;
          goto LABEL_17;
        }
        v12 += 3;
      }
    }
LABEL_18:
    ++v23;
  }
  while ( v23 != 64 );
  free(s);
  memset(v32, 0, 64);
  v17 = sprintf((char *)v32, "<mbist1> %ld", v24);
  v18 = dev_ctrl(v17);
  (*(void (__fastcall **)(_DWORD))(v18 + 80))(*(_DWORD *)(a1 + 240));
  dword_309B3C = v24;
  return 0;
}
