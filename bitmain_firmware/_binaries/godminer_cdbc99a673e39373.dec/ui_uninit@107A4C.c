void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_2E9F7C )
  {
    dword_2E9F48 = 0;
    pthread_join(dword_2E9F80, 0);
    delete_c_map(dword_2E9F64);
    pthread_mutex_destroy(&stru_2E9F4C);
    v0 = sub_107574(0x100u);
    gpio_unreg_callback(v0, (int)sub_1074F4);
    v1 = sub_107574(0x101u);
    gpio_unreg_callback(v1, (int)sub_1074F4);
    v2 = sub_107554();
    gpio_unexport(v2);
    v3 = sub_107574(2u);
    gpio_unexport(v3);
    v4 = sub_107574(0x100u);
    gpio_unexport(v4);
    v5 = sub_107574(0x101u);
    gpio_unexport(v5);
    dword_2E9F7C = 0;
  }
}
