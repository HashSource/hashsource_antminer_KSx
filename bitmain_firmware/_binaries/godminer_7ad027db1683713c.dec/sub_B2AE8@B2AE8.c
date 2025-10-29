int sub_B2AE8()
{
  char *all_created_runtime; // r11
  int result; // r0
  char *v2; // r11
  int v3; // t1
  _DWORD *v4; // r3
  __int64 v5; // r4
  __int64 v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r12
  int v12; // r4
  int v13; // r9
  int v14; // r6
  int v15; // r5
  int v16; // r0
  int v17; // r3
  __int64 *v18; // r5
  __int64 *v19; // r6
  int v20; // r4
  __int64 v21; // d16
  size_t v22; // r1
  char *v23; // r0
  int v24; // [sp+18h] [bp-A0h]
  int v25; // [sp+20h] [bp-98h]
  int v26; // [sp+24h] [bp-94h]
  int v27; // [sp+3Ch] [bp-7Ch] BYREF
  char v28[32]; // [sp+40h] [bp-78h] BYREF
  char v29[32]; // [sp+60h] [bp-58h] BYREF
  char v30[20]; // [sp+80h] [bp-38h] BYREF
  int v31; // [sp+B0h] [bp-8h]
  int v32; // [sp+B4h] [bp-4h]
  char v33[4040]; // [sp+B8h] [bp+0h] BYREF
  char v34[4100]; // [sp+10B8h] [bp+1000h] BYREF

  v27 = 0;
  v26 = frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v27);
  read_system_status_from_monitor((int)v30);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v26 + 72) + 16), v28);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v26 + 72) + 16), v29);
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, "total avg hashrate %s 2min avg hashrate %s hw %llu", v28, v29, v31, v32);
  V_UNLOCK();
  result = zlog(
             g_hash_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/releas"
             "e/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c",
             184,
             "task_applog_printer",
             19,
             123,
             40,
             v34);
  if ( v27 > 0 )
  {
    v2 = all_created_runtime - 4;
    v25 = 0;
    do
    {
      v3 = *((_DWORD *)v2 + 1);
      v2 += 4;
      v4 = &dword_2D3B30[54 * *(_DWORD *)(v3 + 228)];
      v5 = *((_QWORD *)v4 + 8);
      v6 = *((_QWORD *)v4 + 10);
      format_hashrate_string(*(const char **)(*(_DWORD *)(v26 + 72) + 16), v28);
      v7 = format_hashrate_string(*(const char **)(*(_DWORD *)(v26 + 72) + 16), v29);
      v8 = dev_ctrl(v7);
      v9 = (*(int (__fastcall **)(_DWORD))(v8 + 48))(*(_DWORD *)(*(_DWORD *)v2 + 228));
      LODWORD(v5) = snprintf(
                      v33,
                      0x1000u,
                      "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
                      v9,
                      *(_DWORD *)(*(_DWORD *)v2 + 228),
                      (_DWORD)v5,
                      v28,
                      v29,
                      v6);
      v10 = snprintf(
              &v33[v5],
              4096 - v5,
              "wc %llu nc %llu chip status str %s detail:\n",
              *(_DWORD *)v2,
              *(_DWORD *)(*(_DWORD *)v2 + 416),
              *(_DWORD *)(*(_DWORD *)v2 + 420),
              *(_DWORD *)(*(_DWORD *)v2 + 424),
              *(_DWORD *)(*(_DWORD *)v2 + 428),
              HIDWORD(v5));
      v11 = *(_DWORD *)v2;
      v24 = *(_DWORD *)(*(_DWORD *)v2 + 312);
      v12 = v5 + v10;
      if ( v24 > 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = 48 * v13++;
          v15 = *(_DWORD *)(v11 + 432);
          v16 = snprintf(&v33[v12], 4096 - v12, "%d:", v13);
          v17 = v15 + 48;
          v18 = (__int64 *)(v15 + v14);
          v19 = (__int64 *)(v17 + v14);
          v20 = v12 + v16;
          do
          {
            v21 = *v18++;
            v20 += snprintf(&v33[v20], 4096 - v20, " %llu", v21);
          }
          while ( v19 != v18 );
          v22 = 4096 - v20;
          v23 = &v33[v20];
          v12 = v20 + 2;
          snprintf(v23, v22, " /");
          if ( v13 == v24 )
            break;
          v11 = *(_DWORD *)v2;
        }
      }
      V_LOCK();
      ++v25;
      logfmt_raw(v34, 0x1000u, 0, "%s", v33);
      V_UNLOCK();
      result = zlog(
                 g_hash_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/re"
                 "lease/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c",
                 184,
                 "task_applog_printer",
                 19,
                 145,
                 40,
                 v34);
    }
    while ( v27 > v25 );
  }
  return result;
}
