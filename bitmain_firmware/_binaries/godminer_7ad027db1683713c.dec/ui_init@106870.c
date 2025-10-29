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

  if ( !dword_2E8A84 )
  {
    v0 = sub_106464();
    gpio_export(v0);
    v1 = sub_106464();
    gpio_direction(v1, 1);
    v2 = sub_106484(2u);
    gpio_export(v2);
    v3 = sub_106484(2u);
    gpio_direction(v3, 1);
    v4 = sub_106484(0x100u);
    gpio_export(v4);
    v5 = sub_106484(0x101u);
    gpio_export(v5);
    v6 = sub_106484(0x100u);
    gpio_reg_callback(v6, (int)sub_106404);
    v7 = sub_106484(0x101u);
    gpio_reg_callback(v7, (int)sub_106404);
    pthread_mutex_init(&stru_2E8A54, 0);
    off_2E8A70 = 0;
    dword_2E8A74 = 0;
    dword_2E8A78 = 0;
    dword_2E8A7C = 0;
    dword_2E8A80 = 0;
    dword_2E8A6C = (int)new_c_map((int)sub_1060A4, 0, 0);
    dword_2E8A50[0] = 1;
    pthread_create((pthread_t *)&dword_2E8A88, 0, (void *(*)(void *))sub_1060B4, 0);
    dword_2E8A84 = 1;
  }
  return 0;
}
