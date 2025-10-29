unsigned int *__fastcall sub_BA2F4(unsigned int *result)
{
  float v1; // s0
  int v2; // r8
  int v3; // r10
  int v4; // r9
  float v5; // s11
  int v6; // lr
  int v7; // r5
  float v8; // s6
  float v9; // s15
  int v10; // r3
  int v11; // r4
  float v12; // s16
  float v13; // s17
  int v15; // [sp+2Ch] [bp-1008h]
  char v16[4100]; // [sp+30h] [bp-1004h] BYREF

  v2 = 2;
  v15 = 2;
  *result = -1068236443;
  while ( 1 )
  {
    v3 = 0;
    v4 = 0;
    v5 = (float)v2;
    while ( 2 )
    {
      v6 = v4 + 1;
      v7 = v4;
      v8 = (float)(v4 + 1);
      do
      {
        v9 = (float)(v7 + 1);
        v10 = (int)(float)((float)((float)((float)((float)(v8 * v1) * v9) * v5) / 25.0) * 100.0);
        v11 = v10 / 100;
        if ( v10 % 100 > 50 )
          ++v11;
        if ( (unsigned int)(v11 - 16) <= 0xEA )
        {
          v12 = (float)((float)v11 * 25.0) / v5;
          if ( (v2 != 1 || v12 <= 3125.0) && v12 <= 3200.0 && v12 >= 2000.0 )
          {
            *result = v7 & 7 | (v2 << 8) | 0xC0000000 | v3 | (v11 << 16) | ((v12 > 2400.0) << 28);
            v13 = (float)(v12 / v8) / v9;
            if ( fabsf(v13 - v1) < 3.0 )
            {
              V_LOCK();
              logfmt_raw(
                v16,
                0x1000u,
                0,
                "target_freq:%.2f actual_freq:%.2f,vco:%.2f fbdiv:%d refdiv:%d postdiv1:%d, postdiv2:%d",
                v1,
                v13,
                v12,
                v11,
                v2,
                v4,
                v7);
              V_UNLOCK();
              return (unsigned int *)zlog(
                                       g_zc,
                                       "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/r"
                                       "ootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/chip_setting.c",
                                       166,
                                       "inferred_plldivider",
                                       19,
                                       538,
                                       20,
                                       v16);
            }
          }
        }
      }
      while ( v7-- != 0 );
      v3 += 16;
      ++v4;
      if ( v6 != 8 )
        continue;
      break;
    }
    v2 = 1;
    if ( v15 == 1 )
      return result;
    v15 = 1;
  }
}
