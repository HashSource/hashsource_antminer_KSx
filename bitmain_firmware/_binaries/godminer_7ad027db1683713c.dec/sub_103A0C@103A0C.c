int sub_103A0C()
{
  _DWORD *v0; // r5
  void (__fastcall *v1)(_DWORD *, _DWORD *, int); // r3
  int v2; // r8
  int v3; // r0
  int v4; // r7
  _DWORD *v5; // r6
  int v6; // r10
  unsigned __int8 v8; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _DWORD v10[1025]; // [sp+820h] [bp-1004h] BYREF

  prctl(15, "gpio");
  while ( dword_2E8714 )
  {
    if ( !pthread_mutex_lock(&stru_2E86E0) )
    {
      v0 = new_iterator_c_map(dword_2E86F8);
      if ( ((int (*)(void))*v0)() )
      {
        while ( 1 )
        {
          v2 = v0[5];
          v3 = ((int (*)(void))v0[2])();
          v4 = ***(_DWORD ***)(v2 + 16);
          v8 = 0;
          v5 = (_DWORD *)v3;
          v6 = gpio_read(v4, &v8);
          if ( v6 )
            break;
          if ( v5[1] != v8 )
          {
            snprintf(s, 0x800u, "gpio port %d, last val = %d, new val = %d", ***(_DWORD ***)(v2 + 16), v5[1], v8);
            V_LOCK();
            logfmt_raw((char *)v10, 0x1000u, v6, s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
              192,
              "gpio_thread_function",
              20,
              66,
              20,
              v10);
            ((void (__fastcall *)(int, _DWORD))*v5)(v4, v8);
            v1 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v0[1];
            v10[0] = *v5;
            v10[1] = v8;
            v1(v0, v10, 8);
          }
          free(v5);
          if ( !((int (__fastcall *)(_DWORD *))*v0)(v0) )
            goto LABEL_12;
        }
        snprintf(s, 0x800u, "failed to read gpio port %d", v4);
        V_LOCK();
        logfmt_raw((char *)v10, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS3_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-new/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          192,
          "gpio_thread_function",
          20,
          60,
          20,
          v10);
        free(v5);
      }
LABEL_12:
      delete_iterator_c_map(v0);
      pthread_mutex_unlock(&stru_2E86E0);
    }
    usleep((__useconds_t)"d_power17h7a6a23e613986a08E");
  }
  return 0;
}
