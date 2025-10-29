int __fastcall send_command_packet(pthread_mutex_t *a1, unsigned __int8 *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r8
  int i; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v13; // r0
  _BYTE v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = a1 + 38;
  for ( i = pthread_mutex_lock(a1 + 38); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( (*(int (__fastcall **)(unsigned int))(v8 + 64))(a1[10].__count) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = (*(int (__fastcall **)(unsigned int, unsigned __int8 *, unsigned int))(v9 + 56))(a1[10].__count, a2, a3);
  pthread_mutex_unlock(v3);
  v11 = check_and_print_uart_debug_log((int)&a1[45], a3, a2, a1[10].__owner, 1);
  if ( v10 <= 0 )
  {
    V_LOCK(v11);
    v13 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-kas_2382/backend/chip_reg_io_interface.c",
      180,
      "send_command_packet",
      19,
      46,
      100,
      v14);
  }
  return v10;
}
