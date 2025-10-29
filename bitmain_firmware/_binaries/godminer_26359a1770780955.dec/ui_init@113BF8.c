int ui_init()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  if ( !dword_306BD0 )
  {
    v0 = sub_1137EC();
    gpio_export(v0);
    v1 = sub_1137EC();
    gpio_direction(v1, 1);
    v2 = sub_11380C(2u);
    gpio_export(v2);
    v3 = sub_11380C(2u);
    gpio_direction(v3, 1);
    v4 = sub_11380C(0x100u);
    gpio_export(v4);
    v5 = sub_11380C(0x101u);
    gpio_export(v5);
    v6 = sub_11380C(0x100u);
    gpio_reg_callback(v6, sub_11378C);
    v7 = sub_11380C(0x101u);
    gpio_reg_callback(v7, sub_11378C);
    pthread_mutex_init(&stru_306BA0, 0);
    off_306BBC = 0;
    dword_306BC0 = 0;
    dword_306BC4 = 0;
    dword_306BC8 = 0;
    dword_306BCC = 0;
    dword_306BB8 = new_c_map(sub_11342C, 0, 0);
    dword_306B9C = 1;
    pthread_create((pthread_t *)&dword_306BD4, 0, (void *(*)(void *))sub_11343C, 0);
    dword_306BD0 = 1;
  }
  return 0;
}
