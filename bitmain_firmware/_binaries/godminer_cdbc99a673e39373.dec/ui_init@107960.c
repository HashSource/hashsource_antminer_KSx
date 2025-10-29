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

  if ( !dword_2E9F7C )
  {
    v0 = sub_107554();
    gpio_export(v0);
    v1 = sub_107554();
    gpio_direction(v1, 1);
    v2 = sub_107574(2u);
    gpio_export(v2);
    v3 = sub_107574(2u);
    gpio_direction(v3, 1);
    v4 = sub_107574(0x100u);
    gpio_export(v4);
    v5 = sub_107574(0x101u);
    gpio_export(v5);
    v6 = sub_107574(0x100u);
    gpio_reg_callback(v6, (int)sub_1074F4);
    v7 = sub_107574(0x101u);
    gpio_reg_callback(v7, (int)sub_1074F4);
    pthread_mutex_init(&stru_2E9F4C, 0);
    off_2E9F68 = 0;
    dword_2E9F6C = 0;
    dword_2E9F70 = 0;
    dword_2E9F74 = 0;
    dword_2E9F78 = 0;
    dword_2E9F64 = new_c_map(sub_107194, 0, 0);
    dword_2E9F48 = 1;
    pthread_create((pthread_t *)&dword_2E9F80, 0, (void *(*)(void *))sub_1071A4, 0);
    dword_2E9F7C = 1;
  }
  return 0;
}
