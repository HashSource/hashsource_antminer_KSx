void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_2E8A84 )
  {
    dword_2E8A50[0] = 0;
    pthread_join(dword_2E8A88, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_2E8A6C);
    pthread_mutex_destroy(&stru_2E8A54);
    v0 = sub_106484(0x100u);
    gpio_unreg_callback(v0, (int)sub_106404);
    v1 = sub_106484(0x101u);
    gpio_unreg_callback(v1, (int)sub_106404);
    v2 = sub_106464();
    gpio_unexport(v2);
    v3 = sub_106484(2u);
    gpio_unexport(v3);
    v4 = sub_106484(0x100u);
    gpio_unexport(v4);
    v5 = sub_106484(0x101u);
    gpio_unexport(v5);
    dword_2E8A84 = 0;
  }
}
