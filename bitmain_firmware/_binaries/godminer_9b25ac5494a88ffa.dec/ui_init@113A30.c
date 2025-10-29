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

  if ( !dword_309C00 )
  {
    v0 = sub_113624();
    gpio_export(v0);
    v1 = sub_113624();
    gpio_direction(v1, 1);
    v2 = sub_113644(2u);
    gpio_export(v2);
    v3 = sub_113644(2u);
    gpio_direction(v3, 1);
    v4 = sub_113644(0x100u);
    gpio_export(v4);
    v5 = sub_113644(0x101u);
    gpio_export(v5);
    v6 = sub_113644(0x100u);
    gpio_reg_callback(v6, sub_1135C4);
    v7 = sub_113644(0x101u);
    gpio_reg_callback(v7, sub_1135C4);
    pthread_mutex_init(&stru_309BD0, 0);
    off_309BEC = 0;
    dword_309BF0 = 0;
    dword_309BF4 = 0;
    dword_309BF8 = 0;
    dword_309BFC = 0;
    dword_309BE8 = new_c_map(sub_113264, 0, 0);
    dword_309BCC = 1;
    pthread_create((pthread_t *)&dword_309C04, 0, (void *(*)(void *))sub_113274, 0);
    dword_309C00 = 1;
  }
  return 0;
}
