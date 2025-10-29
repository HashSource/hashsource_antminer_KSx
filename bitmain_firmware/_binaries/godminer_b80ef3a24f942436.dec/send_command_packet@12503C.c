int __fastcall send_command_packet(int a1, unsigned __int8 *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r8
  int i; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v13; // r0
  _BYTE v14[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 924);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 924)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( (*(int (__fastcall **)(_DWORD))(v8 + 80))(*(_DWORD *)(a1 + 240)) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = (*(int (__fastcall **)(_DWORD, unsigned __int8 *, unsigned int))(v9 + 68))(*(_DWORD *)(a1 + 240), a2, a3);
  pthread_mutex_unlock(v3);
  v11 = check_and_print_uart_debug_log(a1 + 1088, a3, a2, *(_DWORD *)(a1 + 248), 1);
  if ( v10 <= 0 )
  {
    V_LOCK(v11);
    v13 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/build"
      "/godminer-origin_godminer-new/backend/chip_reg_io_interface.c",
      175,
      "send_command_packet",
      19,
      46,
      100,
      v14);
  }
  return v10;
}
