void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_30BC20 )
  {
    dword_30BBEC = 0;
    pthread_join(dword_30BC24, 0);
    delete_c_map(dword_30BC08);
    pthread_mutex_destroy(&stru_30BBF0);
    v0 = sub_114004(0x100u);
    gpio_unreg_callback(v0, sub_113F84);
    v1 = sub_114004(0x101u);
    gpio_unreg_callback(v1, sub_113F84);
    v2 = sub_113FE4();
    gpio_unexport(v2);
    v3 = sub_114004(2u);
    gpio_unexport(v3);
    v4 = sub_114004(0x100u);
    gpio_unexport(v4);
    v5 = sub_114004(0x101u);
    gpio_unexport(v5);
    dword_30BC20 = 0;
  }
}
