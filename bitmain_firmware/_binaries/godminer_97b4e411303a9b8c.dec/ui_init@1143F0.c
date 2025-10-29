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

  if ( !dword_30BC20 )
  {
    v0 = sub_113FE4();
    gpio_export(v0);
    v1 = sub_113FE4();
    gpio_direction(v1, 1);
    v2 = sub_114004(2u);
    gpio_export(v2);
    v3 = sub_114004(2u);
    gpio_direction(v3, 1);
    v4 = sub_114004(0x100u);
    gpio_export(v4);
    v5 = sub_114004(0x101u);
    gpio_export(v5);
    v6 = sub_114004(0x100u);
    gpio_reg_callback(v6, sub_113F84);
    v7 = sub_114004(0x101u);
    gpio_reg_callback(v7, sub_113F84);
    pthread_mutex_init(&stru_30BBF0, 0);
    off_30BC0C = 0;
    dword_30BC10 = 0;
    dword_30BC14 = 0;
    dword_30BC18 = 0;
    dword_30BC1C = 0;
    dword_30BC08 = new_c_map(sub_113C24, 0, 0);
    dword_30BBEC = 1;
    pthread_create((pthread_t *)&dword_30BC24, 0, (void *(*)(void *))sub_113C34, 0);
    dword_30BC20 = 1;
  }
  return 0;
}
