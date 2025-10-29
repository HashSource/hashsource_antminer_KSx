void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_30CF34 )
  {
    dword_30CF00 = 0;
    pthread_join(dword_30CF38, 0);
    delete_c_map(dword_30CF1C);
    pthread_mutex_destroy(&stru_30CF04);
    v0 = sub_115450(0x100u);
    gpio_unreg_callback(v0, sub_1153D0);
    v1 = sub_115450(0x101u);
    gpio_unreg_callback(v1, sub_1153D0);
    v2 = sub_115430();
    gpio_unexport(v2);
    v3 = sub_115450(2u);
    gpio_unexport(v3);
    v4 = sub_115450(0x100u);
    gpio_unexport(v4);
    v5 = sub_115450(0x101u);
    gpio_unexport(v5);
    dword_30CF34 = 0;
  }
}
