int __fastcall sub_BA270(int a1)
{
  int all_created_runtime; // r11
  int v2; // r0
  int v3; // r0
  int result; // r0
  _DWORD *v5; // r11
  int v6; // t1
  char *v7; // r3
  __int64 v8; // r4
  __int64 v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r12
  int v15; // r4
  int v16; // r9
  int v17; // r6
  int v18; // r5
  int v19; // r0
  int v20; // r3
  __int64 *v21; // r5
  __int64 *v22; // r6
  int v23; // r4
  __int64 v24; // d16
  size_t v25; // r1
  char *v26; // r0
  int v27; // r0
  int v28; // [sp+18h] [bp-A0h]
  int v29; // [sp+20h] [bp-98h]
  int v30; // [sp+24h] [bp-94h]
  int v31; // [sp+3Ch] [bp-7Ch] BYREF
  char v32[32]; // [sp+40h] [bp-78h] BYREF
  char v33[32]; // [sp+60h] [bp-58h] BYREF
  _BYTE v34[20]; // [sp+80h] [bp-38h] BYREF
  char v35[4040]; // [sp+B8h] [bp+0h] BYREF
  _BYTE v36[4100]; // [sp+10B8h] [bp+1000h] BYREF

  v31 = 0;
  v30 = frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v31);
  read_system_status_from_monitor((int)v34);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v30 + 72) + 16), v32);
  v2 = format_hashrate_string(*(const char **)(*(_DWORD *)(v30 + 72) + 16), v33);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v3);
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_monitor.c",
             189,
             "task_applog_printer",
             19,
             125,
             40,
             v36);
  if ( v31 > 0 )
  {
    v5 = (_DWORD *)(all_created_runtime - 4);
    v29 = 0;
    do
    {
      v6 = v5[1];
      ++v5;
      v7 = (char *)&unk_2E8F98 + 224 * *(_DWORD *)(v6 + 240);
      v8 = *((_QWORD *)v7 + 9);
      v9 = *((_QWORD *)v7 + 11);
      format_hashrate_string(*(const char **)(*(_DWORD *)(v30 + 72) + 16), v32);
      v10 = format_hashrate_string(*(const char **)(*(_DWORD *)(v30 + 72) + 16), v33);
      v11 = dev_ctrl(v10);
      v12 = (*(int (__fastcall **)(_DWORD))(v11 + 48))(*(_DWORD *)(*v5 + 240));
      LODWORD(v8) = snprintf(
                      v35,
                      0x1000u,
                      "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
                      v12,
                      *(_DWORD *)(*v5 + 240),
                      (_DWORD)v8,
                      v32,
                      v33,
                      v9);
      v13 = snprintf(
              &v35[v8],
              4096 - v8,
              "wc %llu nc %llu chip status str %s detail:\n",
              *v5,
              *(_DWORD *)(*v5 + 432),
              *(_DWORD *)(*v5 + 436),
              *(_DWORD *)(*v5 + 440),
              *(_DWORD *)(*v5 + 444),
              HIDWORD(v8));
      v14 = *v5;
      v28 = *(_DWORD *)(*v5 + 328);
      v15 = v8 + v13;
      if ( v28 > 0 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = 48 * v16++;
          v18 = *(_DWORD *)(v14 + 448);
          v19 = snprintf(&v35[v15], 4096 - v15, "%d:", v16);
          v20 = v18 + 48;
          v21 = (__int64 *)(v18 + v17);
          v22 = (__int64 *)(v20 + v17);
          v23 = v15 + v19;
          do
          {
            v24 = *v21++;
            v23 += snprintf(&v35[v23], 4096 - v23, " %llu", v24);
          }
          while ( v22 != v21 );
          v25 = 4096 - v23;
          v26 = &v35[v23];
          v15 = v23 + 2;
          v13 = snprintf(v26, v25, " /");
          if ( v16 == v28 )
            break;
          v14 = *v5;
        }
      }
      V_LOCK(v13);
      ++v29;
      v27 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v27);
      result = zlog(
                 g_hash_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-kas_2382/miner_util/miner_monitor/miner_monitor.c",
                 189,
                 "task_applog_printer",
                 19,
                 147,
                 40,
                 v36);
    }
    while ( v31 > v29 );
  }
  return result;
}
