void __fastcall __noreturn check_working_freq(int a1)
{
  float v1; // s0
  int temp; // r0
  float v3; // s18
  _DWORD *v4; // r6
  int i; // r8
  int v6; // r3
  int v7; // t1
  int v8; // r4
  int v9; // r5
  int v10; // r3
  float v11; // s17
  float v12; // s16
  int v13; // [sp+24h] [bp-44h]
  char *v15; // [sp+38h] [bp-30h]
  int v16; // [sp+44h] [bp-24h] BYREF
  _DWORD v17[7]; // [sp+48h] [bp-20h] BYREF
  int v18; // [sp+64h] [bp-4h]
  char v19[4100]; // [sp+68h] [bp+0h] BYREF

  v16 = 0;
  v15 = (char *)get_all_created_runtime(&v16) - 4;
  while ( 1 )
  {
    temp = get_temp(1);
    if ( temp != -64 )
    {
      (*(void (__fastcall **)(int, int))(a1 + 36))(a1, temp);
      v3 = v1;
      if ( v16 > 0 )
      {
        v4 = v15;
        for ( i = 0; i < v16; ++i )
        {
          v7 = v4[1];
          ++v4;
          v6 = v7;
          if ( *(int *)(v7 + 312) > 0 )
          {
            v8 = 0;
            v9 = 0;
            do
            {
              pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(v6 + 504) + v8 + 20));
              v10 = *(_DWORD *)(*v4 + 504) + v8;
              v11 = *(float *)(v10 + 12);
              v12 = v3 + *(float *)(v10 + 4);
              *(float *)(v10 + 8) = v3;
              pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
              if ( v12 != v11 )
              {
                if ( !v9 )
                {
                  V_LOCK();
                  logfmt_raw(
                    v19,
                    0x1000u,
                    0,
                    "before set_frequency_by_temp base freq %.2f bias freq %.2f cur freq %.2f",
                    *(float *)(*(_DWORD *)(*v4 + 504) + v8 + 4),
                    *(float *)(*(_DWORD *)(*v4 + 504) + v8 + 8),
                    *(float *)(*(_DWORD *)(*v4 + 504) + v8 + 12));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                    182,
                    "check_working_freq",
                    18,
                    389,
                    20,
                    v19);
                  if ( v12 < v11 && v3 < -1.0 )
                  {
                    V_LOCK();
                    V_INT((int)v17, "chain", *(int *)(*v4 + 232));
                    logfmt_raw(
                      v19,
                      0x1000u,
                      0,
                      v18,
                      v17[0],
                      v17[1],
                      v17[2],
                      v17[3],
                      v17[4],
                      v17[5],
                      v17[6],
                      v18,
                      "Chip temperature is too high, enable protection. Bias freq:%.2f",
                      v13,
                      v3);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                      182,
                      "check_working_freq",
                      18,
                      392,
                      80,
                      v19);
                  }
                }
                v1 = v12;
                (*(void (**)(void))(*v4 + 192))();
              }
              v6 = *v4;
              ++v9;
              v8 += 44;
            }
            while ( *(_DWORD *)(*v4 + 312) > v9 );
          }
        }
      }
    }
    sleep(1u);
  }
}
