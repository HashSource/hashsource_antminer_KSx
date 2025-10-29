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
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v18; // [sp+38h] [bp-30h]
  int v19; // [sp+44h] [bp-24h] BYREF
  _BYTE v20[32]; // [sp+48h] [bp-20h] BYREF
  _BYTE v21[4100]; // [sp+68h] [bp+0h] BYREF

  v19 = 0;
  v18 = get_all_created_runtime(&v19) - 4;
  while ( 1 )
  {
    temp = get_temp(1);
    if ( temp != -64 )
    {
      (*(void (__fastcall **)(int, int))(a1 + 36))(a1, temp);
      v3 = v1;
      if ( v19 > 0 )
      {
        v4 = (_DWORD *)v18;
        for ( i = 0; i < v19; ++i )
        {
          v7 = v4[1];
          ++v4;
          v6 = v7;
          if ( *(int *)(v7 + 332) > 0 )
          {
            v8 = 0;
            v9 = 0;
            do
            {
              pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(v6 + 528) + v8 + 20));
              v10 = *(_DWORD *)(*v4 + 528) + v8;
              v11 = *(float *)(v10 + 12);
              v12 = v3 + *(float *)(v10 + 4);
              *(float *)(v10 + 8) = v3;
              v13 = pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
              if ( v12 != v11 )
              {
                if ( !v9 )
                {
                  V_LOCK(v13);
                  v14 = logfmt_raw((int)v21, 0x1000u);
                  V_UNLOCK(v14);
                  v15 = zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildro"
                          "ot/tmp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                          187,
                          "check_working_freq",
                          18,
                          431,
                          20,
                          v21);
                  if ( v12 < v11 && v3 < -1.0 )
                  {
                    V_LOCK(v15);
                    V_INT((int)v20, "chain");
                    v16 = logfmt_raw((int)v21, 0x1000u);
                    V_UNLOCK(v16);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/t"
                      "mp/release/build/godminer-origin_godminer-kas_2382/machine_runtime/machine_runtime_base.c",
                      187,
                      "check_working_freq",
                      18,
                      434,
                      80,
                      v21);
                  }
                }
                v1 = v12;
                (*(void (**)(void))(*v4 + 192))();
              }
              v6 = *v4;
              ++v9;
              v8 += 44;
            }
            while ( *(_DWORD *)(*v4 + 332) > v9 );
          }
        }
      }
    }
    sleep(1u);
  }
}
