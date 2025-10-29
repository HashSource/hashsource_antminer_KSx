void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_306BD0 )
  {
    dword_306B9C = 0;
    pthread_join(dword_306BD4, 0);
    delete_c_map(dword_306BB8);
    pthread_mutex_destroy(&stru_306BA0);
    v0 = sub_113904(0x100u);
    gpio_unreg_callback(v0, sub_113884);
    v1 = sub_113904(0x101u);
    gpio_unreg_callback(v1, sub_113884);
    v2 = sub_1138E4();
    gpio_unexport(v2);
    v3 = sub_113904(2u);
    gpio_unexport(v3);
    v4 = sub_113904(0x100u);
    gpio_unexport(v4);
    v5 = sub_113904(0x101u);
    gpio_unexport(v5);
    dword_306BD0 = 0;
  }
}
