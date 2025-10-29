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

  if ( !dword_30CF34 )
  {
    v0 = sub_115430();
    gpio_export(v0);
    v1 = sub_115430();
    gpio_direction(v1, 1);
    v2 = sub_115450(2u);
    gpio_export(v2);
    v3 = sub_115450(2u);
    gpio_direction(v3, 1);
    v4 = sub_115450(0x100u);
    gpio_export(v4);
    v5 = sub_115450(0x101u);
    gpio_export(v5);
    v6 = sub_115450(0x100u);
    gpio_reg_callback(v6, sub_1153D0);
    v7 = sub_115450(0x101u);
    gpio_reg_callback(v7, sub_1153D0);
    pthread_mutex_init(&stru_30CF04, 0);
    off_30CF20 = 0;
    dword_30CF24 = 0;
    dword_30CF28 = 0;
    dword_30CF2C = 0;
    dword_30CF30 = 0;
    dword_30CF1C = new_c_map(sub_115070, 0, 0);
    dword_30CF00 = 1;
    pthread_create((pthread_t *)&dword_30CF38, 0, (void *(*)(void *))sub_115080, 0);
    dword_30CF34 = 1;
  }
  return 0;
}
