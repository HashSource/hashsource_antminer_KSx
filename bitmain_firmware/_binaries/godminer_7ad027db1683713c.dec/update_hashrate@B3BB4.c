_QWORD *__fastcall update_hashrate(int a1, int a2, _QWORD *a3)
{
  unsigned __int64 v3; // d17
  int v7; // r7
  __int64 v8; // r2
  int v9; // r8
  char *v10; // r9
  float v11; // s16
  int v12; // r0
  __int64 v13; // d16
  int v14; // r2
  int v15; // r0
  __int64 *v16; // r3
  __int64 v17; // d17
  int v19; // r4
  __int64 v20; // r2
  double v21; // d16
  __int64 v22; // d10
  __int64 v23; // d9
  __int64 v24; // d9
  float v25; // s17
  char *v26; // r12
  char *v27; // r11
  int v28; // r3
  int v29; // lr
  int v30; // r1
  int v31; // r7
  __int64 v32; // r2
  __int64 v33; // r0
  float v34; // s17
  float v35; // s17
  __int64 v36; // [sp+28h] [bp-104Ch]
  __int64 v37; // [sp+28h] [bp-104Ch]
  _BYTE v38[4]; // [sp+44h] [bp-1030h] BYREF
  __int64 v39; // [sp+48h] [bp-102Ch] BYREF
  __int64 v40; // [sp+50h] [bp-1024h] BYREF
  double v41; // [sp+58h] [bp-101Ch] BYREF
  _BYTE v42[12]; // [sp+64h] [bp-1010h] BYREF
  char v43[4100]; // [sp+70h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v39);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v40);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v41, v38);
  v7 = *(_DWORD *)(a1 + 228);
  v8 = v40;
  *(_QWORD *)(a2 + 48) = v39;
  *(_QWORD *)(a2 + 56) = v8;
  if ( v7 <= 16 )
  {
    v9 = 16 * v7;
    if ( !*((_BYTE *)&unk_2D48E0 + v7) )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_2D48F0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D49F0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D4AF0 + v9));
      *((_BYTE *)&unk_2D48E0 + v7) = 1;
      *((_QWORD *)&unk_2D48E0 + v7 + 98) = 0;
    }
    if ( *(_QWORD *)(a1 + 424) )
    {
      if ( !byte_2D4C70 )
        byte_2D4C70 = 1;
    }
    else if ( !byte_2D4C70 )
    {
      v36 = *(_QWORD *)(a1 + 424);
      clock_gettime(1, (struct timespec *)((char *)&unk_2D48F0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D49F0 + v9));
      clock_gettime(1, (struct timespec *)((char *)&unk_2D4AF0 + v9));
      *((_QWORD *)&unk_2D48E0 + v7 + 98) = v36;
      return a3;
    }
    clock_gettime(1, (struct timespec *)((char *)&unk_2D48F0 + v9 + 8));
    v10 = (char *)&unk_2D4C78 + 2896 * v7;
    v11 = COERCE_FLOAT(
            sub_25A520(
              1000LL * (*(_DWORD *)((char *)&unk_2D48E0 + v9 + 24) - *(_DWORD *)((char *)&unk_2D48E0 + v9 + 16))
            + (*(_DWORD *)((char *)&unk_2D48E0 + v9 + 28) - *(_DWORD *)((char *)&unk_2D48E0 + v9 + 20)) / 1000000))
        / 1000.0;
    if ( v11 >= 5.0 )
    {
      v22 = *(_QWORD *)(a1 + 424);
      v23 = *((_QWORD *)&unk_2D48E0 + v7 + 98);
      get_miner_working_status((int)v42);
      v24 = v22 - v23;
      if ( v42[6] || v42[0] )
      {
        v25 = 0.0;
      }
      else
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 408);
        v35 = COERCE_FLOAT(sub_25A39C(vshld_u64(1u, v3)));
        v25 = v35 * (float)(COERCE_FLOAT(sub_25A39C(v24)) / v11);
      }
      V_LOCK();
      logfmt_raw(v43, 0x1000u, 0, "[HashRate] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s", v11, v22, v24, v25);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/bui"
        "ld/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        206,
        "update_hashrate",
        15,
        125,
        20,
        v43);
      clock_gettime(1, (struct timespec *)((char *)&unk_2D48F0 + v9));
      v26 = (char *)&unk_2D4C78 + 2896 * v7;
      *((_QWORD *)&unk_2D48E0 + v7 + 98) = v22;
      v27 = v26 + 2880;
      v28 = *((_DWORD *)v26 + 720);
      v29 = v28 + 1;
      v30 = v28 + 724 * v7;
      v31 = (v28 + 1) >> 31;
      v32 = -1240768329LL * (v28 + 1);
      LODWORD(v32) = (char *)&unk_2D4C78 + 4 * v30;
      v33 = *((_QWORD *)v26 + 361);
      v37 = v33 + 1;
      *(float *)v32 = v25;
      *((_DWORD *)v26 + 720) = v29 - 720 * (((v29 + HIDWORD(v32)) >> 9) - v31);
      v34 = v25 + (float)(COERCE_FLOAT(sub_25A39C(v33)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v34 / COERCE_FLOAT(sub_25A39C(v37));
      *((_QWORD *)v27 + 1) = v37;
    }
    sub_B3B18((int)v10);
    *(float *)(a2 + 32) = 5.0;
    sub_B3B18((int)v10);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_B3B18((int)v10);
    v12 = *(_DWORD *)(a1 + 312);
    v13 = 0;
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v12 > 0 )
    {
      v13 = 0;
      v14 = *(_DWORD *)(a1 + 432) + 16;
      v15 = v14 + 48 * v12;
      do
      {
        v16 = (__int64 *)v14;
        do
        {
          v17 = *v16++;
          v13 += v17;
        }
        while ( (__int64 *)(v14 + 32) != v16 );
        v14 += 48;
      }
      while ( v15 != v14 );
    }
    *(_QWORD *)(a2 + 80) = v13;
    clock_gettime(1, (struct timespec *)((char *)&unk_2D49F0 + v9 + 8));
    if ( (float)(COERCE_FLOAT(
                   sub_25A520(
                     1000LL
                   * (*(_DWORD *)((char *)&unk_2D48E0 + v9 + 280) - *(_DWORD *)((char *)&unk_2D48E0 + v9 + 272))
                   + (*(_DWORD *)((char *)&unk_2D48E0 + v9 + 284) - *(_DWORD *)((char *)&unk_2D48E0 + v9 + 276))
                   / 1000000))
               / 1000.0) >= 900.0 )
    {
      sub_B3B18((int)v10);
      v19 = *(_DWORD *)(a2 + 200);
      if ( v19 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v19 + 104) = 1147207680;
      }
      v20 = *(_QWORD *)(a2 + 208);
      *(_DWORD *)(a2 + 200) = v19 + 1;
      v21 = v41;
      *(_QWORD *)(a2 + 208) = v20 + 1;
      if ( v21 * 0.97 >= 900.0 )
        *a3 |= 1uLL;
      clock_gettime(1, (struct timespec *)((char *)&unk_2D49F0 + v9));
    }
  }
  return a3;
}
