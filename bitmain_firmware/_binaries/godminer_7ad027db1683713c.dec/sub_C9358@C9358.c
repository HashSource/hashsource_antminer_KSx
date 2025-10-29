unsigned int __fastcall sub_C9358(int a1, int a2, void *a3)
{
  int v5; // r5
  _DWORD *v6; // r8
  unsigned int v7; // r10
  _DWORD *v8; // r4
  unsigned int v9; // r3
  int v12; // [sp+44h] [bp-1038h] BYREF
  __int64 v13; // [sp+48h] [bp-1034h] BYREF
  __int64 v14; // [sp+50h] [bp-102Ch]
  _DWORD v15[7]; // [sp+58h] [bp-1024h] BYREF
  int v16; // [sp+74h] [bp-1008h]
  char v17[4100]; // [sp+78h] [bp-1004h] BYREF

  v13 = 0;
  v14 = 1;
  v5 = 0;
  WORD1(v14) = a2;
  v12 = 0;
  v6 = calloc(0x60u, 1u);
  (*(void (__fastcall **)(int, __int64 *, int, _DWORD *, int *))(a1 + 268))(a1, &v13, 8, v6, &v12);
  v7 = v12;
  if ( v12 > 0 )
  {
    v8 = v6;
    do
    {
      while ( 1 )
      {
        ++v5;
        if ( *((unsigned __int16 *)v8 + 3) == a2 )
          break;
        v7 = v12;
        v8 += 3;
        if ( v12 <= v5 )
          goto LABEL_6;
      }
      V_LOCK();
      v8 += 3;
      V_INT((int)v15, "chain", *(int *)(a1 + 232));
      logfmt_raw(
        v17,
        0x1000u,
        0,
        v16,
        v15[0],
        v15[1],
        v15[2],
        v15[3],
        v15[4],
        v15[5],
        v15[6],
        v16,
        "[Chip status] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v8 - 8),
        *((unsigned __int16 *)v8 - 3),
        *(v8 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/chip_setting.c",
        166,
        "ChipSetting_get_chip_status_ETH",
        31,
        1234,
        20,
        v17);
      v7 = v12;
    }
    while ( v12 > v5 );
  }
LABEL_6:
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 400);
    if ( v7 < v9 )
      v9 = v7;
    memcpy(a3, v6, 12 * v9);
  }
  free(v6);
  return v7;
}
