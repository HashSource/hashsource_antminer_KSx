int sub_125838()
{
  _DWORD *v0; // r5
  int v1; // r0
  int v2; // r0
  void (__fastcall *v3)(_DWORD *, _DWORD *, int); // r3
  int v4; // r8
  int v5; // r0
  int v6; // r7
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r0
  unsigned __int8 v11; // [sp+1Fh] [bp-1805h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _DWORD v13[1025]; // [sp+820h] [bp-1004h] BYREF

  prctl(15, "gpio");
  while ( dword_30C78C )
  {
    if ( !pthread_mutex_lock(&stru_30C758) )
    {
      v0 = new_iterator_c_map(dword_30C770);
      if ( ((int (*)(void))*v0)() )
      {
        while ( 1 )
        {
          v4 = v0[5];
          v5 = ((int (*)(void))v0[2])();
          v6 = ***(_DWORD ***)(v4 + 16);
          v11 = 0;
          v7 = (_DWORD *)v5;
          if ( gpio_read(v6, &v11) )
            break;
          if ( v7[1] != v11 )
          {
            v1 = snprintf(s, 0x800u, "gpio port %d, last val = %d, new val = %d", ***(_DWORD ***)(v4 + 16), v7[1], v11);
            V_LOCK(v1);
            v2 = logfmt_raw((int)v13, 0x1000u);
            V_UNLOCK(v2);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/relea"
              "se/build/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
              197,
              "gpio_thread_function",
              20,
              66,
              20,
              v13);
            ((void (__fastcall *)(int, _DWORD))*v7)(v6, v11);
            v3 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v0[1];
            v13[0] = *v7;
            v13[1] = v11;
            v3(v0, v13, 8);
          }
          free(v7);
          if ( !((int (__fastcall *)(_DWORD *))*v0)(v0) )
            goto LABEL_12;
        }
        v8 = snprintf(s, 0x800u, "failed to read gpio port %d", v6);
        V_LOCK(v8);
        v9 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v9);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_KS5_CVCtrl_godminer_release/build/rootfs/buildroot/tmp/release/b"
          "uild/godminer-origin_godminer-kas_2382/backend/device/hal/platform/cv183x/cv183x_gpio.c",
          197,
          "gpio_thread_function",
          20,
          60,
          20,
          v13);
        free(v7);
      }
LABEL_12:
      delete_iterator_c_map(v0);
      pthread_mutex_unlock(&stru_30C758);
    }
    usleep((__useconds_t)"ore..iter..traits..iterator..Iterator$GT$4last17hc978315af0f81255E");
  }
  return 0;
}
