int __fastcall chip_temp_ks5_2382(int a1, int a2)
{
  int v2; // r5
  void (__fastcall *v4)(int, __int64 *); // r3
  int v5; // r8
  _WORD *v6; // r7
  int v7; // r0
  _WORD *v8; // r4
  int v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // r3
  float v12; // s15
  int v15; // [sp+3Ch] [bp-1038h] BYREF
  __int64 v16; // [sp+40h] [bp-1034h] BYREF
  __int64 v17; // [sp+48h] [bp-102Ch]
  char v18[32]; // [sp+50h] [bp-1024h] BYREF
  unsigned __int16 v19; // [sp+70h] [bp-1004h] BYREF
  char v20; // [sp+72h] [bp-1002h]
  char v21; // [sp+73h] [bp-1001h]

  v2 = 0;
  v17 = 1;
  v16 = 285212672;
  v4 = *(void (__fastcall **)(int, __int64 *))(a1 + 264);
  WORD1(v17) = 192;
  v15 = 0;
  v4(a1, &v16);
  usleep(0x2710u);
  v17 = 12582913;
  v16 = 285343744;
  (*(void (__fastcall **)(int, __int64 *))(a1 + 264))(a1, &v16);
  usleep(0x2710u);
  v5 = *(_DWORD *)(a1 + 336);
  v16 = 0;
  v17 = 12845057;
  v6 = calloc(12 * v5, 1u);
  v7 = (*(int (__fastcall **)(int, __int64 *, int, _WORD *, int *))(a1 + 284))(a1, &v16, v5, v6, &v15);
  if ( v15 > 0 )
  {
    v8 = v6;
    do
    {
      while ( 1 )
      {
        ++v2;
        if ( v8[3] == 196 )
          break;
        v8 += 6;
        if ( v15 <= v2 )
          goto LABEL_6;
      }
      V_LOCK(v7);
      v8 += 6;
      V_INT((int)v18, "chain", *(int *)(a1 + 248));
      v9 = logfmt_raw((int)&v19, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        187,
        "chip_temp_ks5_2382",
        18,
        1052,
        20,
        &v19);
      v10 = *((_DWORD *)v8 - 3);
      v11 = *((unsigned __int8 *)v8 - 8);
      HIBYTE(v19) = BYTE2(v10);
      v7 = v10 >> 8;
      LOBYTE(v19) = HIBYTE(v10);
      v20 = BYTE1(v10);
      v21 = v10;
      v12 = ((double)v19 - 0.5) * 662.88 * 0.000244140625 - 287.48;
      *(float *)(a2 + 4 * (v11 >> 1)) = v12;
    }
    while ( v15 > v2 );
  }
LABEL_6:
  free(v6);
  return 0;
}
