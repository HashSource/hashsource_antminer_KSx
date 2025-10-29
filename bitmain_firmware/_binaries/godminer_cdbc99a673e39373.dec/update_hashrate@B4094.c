_QWORD *__fastcall update_hashrate(int a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // d17
  int v7; // r7
  __int64 v8; // r2
  int v9; // r8
  __int64 v10; // r0
  char *v11; // r9
  float v12; // s16
  int v13; // r0
  __int64 v14; // d16
  int v15; // r2
  int v16; // r0
  __int64 *v17; // r3
  __int64 v18; // d17
  __int64 v19; // r0
  int v21; // r4
  __int64 v22; // r2
  double v23; // d16
  __int64 v24; // d10
  __int64 v25; // d9
  float v26; // r0
  __int64 v27; // d9
  float v28; // s17
  int v29; // r0
  char *v30; // r12
  char *v31; // r11
  int v32; // r3
  int v33; // lr
  int v34; // r1
  int v35; // r7
  __int64 v36; // r2
  __int64 v37; // r0
  float v38; // s17
  unsigned __int64 v39; // r0
  float v40; // s17
  __int64 v41; // [sp+28h] [bp-104Ch]
  __int64 v42; // [sp+28h] [bp-104Ch]
  _BYTE v43[4]; // [sp+44h] [bp-1030h] BYREF
  __int64 v44; // [sp+48h] [bp-102Ch] BYREF
  __int64 v45; // [sp+50h] [bp-1024h] BYREF
  double v46; // [sp+58h] [bp-101Ch] BYREF
  _BYTE v47[12]; // [sp+64h] [bp-1010h] BYREF
  _BYTE v48[4100]; // [sp+70h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v44);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v45);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v46, v43);
  v7 = *(_DWORD *)(a1 + 228);
  v8 = v45;
  *(_QWORD *)(a2 + 48) = v44;
  *(_QWORD *)(a2 + 56) = v8;
  if ( v7 <= 16 )
  {
    v9 = 16 * v7;
    if ( !*((_BYTE *)&unk_2D5DD8 + v7) )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5DE8 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5EE8 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5FE8 + v9));
      *((_BYTE *)&unk_2D5DD8 + v7) = 1;
      *((_QWORD *)&unk_2D5DD8 + v7 + 98) = 0;
    }
    if ( *(_QWORD *)(a1 + 424) )
    {
      if ( !byte_2D6168 )
        byte_2D6168 = 1;
    }
    else if ( !byte_2D6168 )
    {
      v41 = *(_QWORD *)(a1 + 424);
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5DE8 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5EE8 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5FE8 + v9));
      *((_QWORD *)&unk_2D5DD8 + v7 + 98) = v41;
      return a3;
    }
    clock_gettime(1, (struct timespec *)((char *)&unk_2D5DE8 + v9 + 8));
    v10 = 1000LL * (*(_DWORD *)((char *)&unk_2D5DD8 + v9 + 24) - *(_DWORD *)((char *)&unk_2D5DD8 + v9 + 16))
        + (*(_DWORD *)((char *)&unk_2D5DD8 + v9 + 28) - *(_DWORD *)((char *)&unk_2D5DD8 + v9 + 20)) / 1000000;
    v11 = (char *)&unk_2D6170 + 2896 * v7;
    v12 = sub_25B690(v10, HIDWORD(v10)) / 1000.0;
    if ( v12 >= 5.0 )
    {
      v24 = *(_QWORD *)(a1 + 424);
      v25 = *((_QWORD *)&unk_2D5DD8 + v7 + 98);
      v26 = COERCE_FLOAT(get_miner_working_status((int)v47));
      v27 = v24 - v25;
      if ( v47[6] || v47[0] )
      {
        v28 = 0.0;
      }
      else
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 408);
        v39 = vshld_u64(1u, v3);
        v40 = COERCE_FLOAT(((int (__fastcall *)(_DWORD, _DWORD))sub_25B50C)(v39, HIDWORD(v39)));
        v26 = sub_25B50C(v27, HIDWORD(v27));
        v28 = v40 * (float)(v26 / v12);
      }
      V_LOCK(LODWORD(v26));
      v29 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v29);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        206,
        "update_hashrate",
        15,
        125,
        20,
        v48);
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5DE8 + v9));
      v30 = (char *)&unk_2D6170 + 2896 * v7;
      *((_QWORD *)&unk_2D5DD8 + v7 + 98) = v24;
      v31 = v30 + 2880;
      v32 = *((_DWORD *)v30 + 720);
      v33 = v32 + 1;
      v34 = v32 + 724 * v7;
      v35 = (v32 + 1) >> 31;
      v36 = -1240768329LL * (v32 + 1);
      LODWORD(v36) = (char *)&unk_2D6170 + 4 * v34;
      v37 = *((_QWORD *)v30 + 361);
      v42 = v37 + 1;
      *(float *)v36 = v28;
      *((_DWORD *)v30 + 720) = v33 - 720 * (((v33 + HIDWORD(v36)) >> 9) - v35);
      v38 = v28 + (float)(sub_25B50C(v37, HIDWORD(v37)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v38 / sub_25B50C(v42, HIDWORD(v42));
      *((_QWORD *)v31 + 1) = v42;
    }
    sub_B3FF8((int)v11);
    *(float *)(a2 + 32) = 5.0;
    sub_B3FF8((int)v11);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_B3FF8((int)v11);
    v13 = *(_DWORD *)(a1 + 312);
    v14 = 0;
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v13 > 0 )
    {
      v14 = 0;
      v15 = *(_DWORD *)(a1 + 432) + 16;
      v16 = v15 + 48 * v13;
      do
      {
        v17 = (__int64 *)v15;
        do
        {
          v18 = *v17++;
          v14 += v18;
        }
        while ( (__int64 *)(v15 + 32) != v17 );
        v15 += 48;
      }
      while ( v16 != v15 );
    }
    *(_QWORD *)(a2 + 80) = v14;
    clock_gettime(1, (struct timespec *)((char *)&unk_2D5EE8 + v9 + 8));
    v19 = 1000LL * (*(_DWORD *)((char *)&unk_2D5DD8 + v9 + 280) - *(_DWORD *)((char *)&unk_2D5DD8 + v9 + 272))
        + (*(_DWORD *)((char *)&unk_2D5DD8 + v9 + 284) - *(_DWORD *)((char *)&unk_2D5DD8 + v9 + 276)) / 1000000;
    if ( (float)(sub_25B690(v19, HIDWORD(v19)) / 1000.0) >= 900.0 )
    {
      sub_B3FF8((int)v11);
      v21 = *(_DWORD *)(a2 + 200);
      if ( v21 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v21 + 104) = 1147207680;
      }
      v22 = *(_QWORD *)(a2 + 208);
      *(_DWORD *)(a2 + 200) = v21 + 1;
      v23 = v46;
      *(_QWORD *)(a2 + 208) = v22 + 1;
      if ( v23 * 0.97 >= 900.0 )
        *a3 |= 1uLL;
      clock_gettime(1, (struct timespec *)((char *)&unk_2D5EE8 + v9));
    }
  }
  return a3;
}
