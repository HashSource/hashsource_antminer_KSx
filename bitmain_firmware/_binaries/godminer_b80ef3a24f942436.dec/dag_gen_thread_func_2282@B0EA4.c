void __noreturn dag_gen_thread_func_2282()
{
  int epoch_number_eth_2282; // r0
  int v1; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  void **v8; // r6
  signed int i; // r5
  void (**v10)(void); // t1
  __int64 v11; // r0
  signed int *v12; // r8
  __int64 v13; // d10
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r6
  signed int v19; // t1
  int v20; // r5
  int v21; // r0
  pthread_t *v22; // r0
  pthread_t *v23; // r8
  void **v24; // r7
  pthread_t *v25; // r6
  signed int v26; // r5
  _DWORD *v27; // t1
  pthread_t *v28; // r0
  char *v29; // r6
  signed int j; // r5
  pthread_t v31; // t1
  int v32; // r0
  int v33; // r0
  pthread_t *v34; // r0
  pthread_t *v35; // r8
  void **v36; // r7
  pthread_t *v37; // r6
  signed int v38; // r5
  _DWORD *v39; // t1
  pthread_t *v40; // r0
  char *v41; // r6
  signed int k; // r5
  pthread_t v43; // t1
  int v44; // [sp+4h] [bp-1090h]
  __int64 v45; // [sp+20h] [bp-1074h]
  void **v46; // [sp+28h] [bp-106Ch]
  signed int v47; // [sp+3Ch] [bp-1058h] BYREF
  double v48[4]; // [sp+40h] [bp-1054h] BYREF
  _QWORD v49[6]; // [sp+60h] [bp-1034h] BYREF
  _BYTE v50[4100]; // [sp+90h] [bp-1004h] BYREF

  v47 = 0;
  v46 = (void **)((char *)get_all_created_runtime(&v47) - 4);
  while ( 1 )
  {
    memset(v48, 0, sizeof(v48));
    get_cur_seed_2282((int)v48);
    epoch_number_eth_2282 = get_epoch_number_eth_2282(v48);
    v1 = epoch_number_eth_2282;
    if ( dword_2F09C0 == epoch_number_eth_2282 )
    {
      if ( !dword_2F09C0 )
        goto LABEL_9;
    }
    else
    {
      V_LOCK(epoch_number_eth_2282);
      v2 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v2);
      epoch_number_eth_2282 = zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/b"
                                "uildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
                                190,
                                "dag_gen_thread_func_2282",
                                24,
                                202,
                                40,
                                v50);
      if ( v1 )
      {
        if ( dword_2F09C0 != v1 )
        {
          if ( dword_2F09C0 > v1 )
          {
            V_LOCK(epoch_number_eth_2282);
            v3 = logfmt_raw((int)v50, 0x1000u);
            V_UNLOCK(v3);
            LOWORD(v4) = (unsigned __int16)"dag_gen_thread_func_2282";
            v5 = g_zc;
            v44 = 215;
            goto LABEL_7;
          }
          dword_2F09C0 = v1;
          V_LOCK(epoch_number_eth_2282);
          v7 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v7);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            190,
            "dag_gen_thread_func_2282",
            24,
            220,
            60,
            v50);
          if ( v47 > 0 )
          {
            v8 = v46;
            for ( i = 0; i < v47; ++i )
            {
              v10 = (void (**)(void))v8[1];
              ++v8;
              v10[5]();
            }
          }
          v11 = qword_287510[dword_2F09C0];
          v12 = &v47;
          v13 = qword_283510[dword_2F09C0];
          v45 = v11;
          if ( (v11 & 0x1F) != 0 )
          {
            LODWORD(v11) = v11 | 0x20;
            v45 = v11;
          }
          V_LOCK(v11);
          v14 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v14);
          v15 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/r"
                  "elease/build/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
                  190,
                  "dag_gen_thread_func_2282",
                  24,
                  234,
                  60,
                  v50);
          V_LOCK(v15);
          v16 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v16);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            190,
            "dag_gen_thread_func_2282",
            24,
            235,
            60,
            v50);
          v49[0] = v13;
          v17 = v45;
          v18 = 0;
          v49[1] = v45;
          do
          {
            v19 = v12[1];
            ++v12;
            v20 = v18 >> 2;
            V_LOCK(v17);
            v18 += 4;
            v21 = logfmt_raw((int)v50, 0x1000u);
            V_UNLOCK(v21);
            v17 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp"
                    "/release/build/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
                    190,
                    "dag_gen_thread_func_2282",
                    24,
                    244,
                    40,
                    v50);
            *((_DWORD *)&v49[2] + v20) = v19;
          }
          while ( v18 != 32 );
          v22 = (pthread_t *)calloc(v47, 4u);
          v23 = v22;
          if ( v47 > 0 )
          {
            v24 = v46;
            v25 = v22;
            v26 = 0;
            do
            {
              v27 = v24[1];
              ++v24;
              v28 = v25;
              ++v26;
              ++v25;
              v27[251] = v49;
              pthread_create(v28, 0, *((void *(**)(void *))*v24 + 58), *v24);
            }
            while ( v47 > v26 );
            if ( v47 > 0 )
            {
              v29 = (char *)(v23 - 1);
              for ( j = 0; j < v47; ++j )
              {
                v31 = *((_DWORD *)v29 + 1);
                v29 += 4;
                pthread_join(v31, 0);
              }
            }
          }
          free(v23);
          V_LOCK(v32);
          v33 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v33);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release"
            "/build/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            190,
            "dag_gen_thread_func_2282",
            24,
            260,
            60,
            v50);
          v34 = (pthread_t *)calloc(v47, 4u);
          v35 = v34;
          if ( v47 > 0 )
          {
            v36 = v46;
            v37 = v34;
            v38 = 0;
            do
            {
              v39 = v36[1];
              ++v36;
              v40 = v37;
              ++v38;
              ++v37;
              v39[251] = v49;
              pthread_create(v40, 0, *((void *(**)(void *))*v36 + 6), *v36);
            }
            while ( v47 > v38 );
            if ( v47 > 0 )
            {
              v41 = (char *)(v35 - 1);
              for ( k = 0; k < v47; ++k )
              {
                v43 = *((_DWORD *)v41 + 1);
                v41 += 4;
                pthread_join(v43, 0);
              }
            }
          }
          free(v35);
        }
      }
      else
      {
LABEL_9:
        V_LOCK(epoch_number_eth_2282);
        v6 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v6);
        v5 = g_zc;
        v44 = 205;
        LOWORD(v4) = 13528;
LABEL_7:
        HIWORD(v4) = (unsigned int)"dag_gen_thread_func_2282" >> 16;
        zlog(
          v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
          190,
          v4,
          24,
          v44,
          40,
          v50);
      }
    }
  }
}
