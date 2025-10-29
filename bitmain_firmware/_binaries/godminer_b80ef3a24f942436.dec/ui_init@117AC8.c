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

  if ( !dword_3113F8 )
  {
    v0 = sub_1176BC();
    gpio_export(v0);
    v1 = sub_1176BC();
    gpio_direction(v1, 1);
    v2 = sub_1176DC(2u);
    gpio_export(v2);
    v3 = sub_1176DC(2u);
    gpio_direction(v3, 1);
    v4 = sub_1176DC(0x100u);
    gpio_export(v4);
    v5 = sub_1176DC(0x101u);
    gpio_export(v5);
    v6 = sub_1176DC(0x100u);
    gpio_reg_callback(v6, (int)sub_11765C);
    v7 = sub_1176DC(0x101u);
    gpio_reg_callback(v7, (int)sub_11765C);
    pthread_mutex_init(&stru_3113C8, 0);
    off_3113E4 = 0;
    dword_3113E8 = 0;
    dword_3113EC = 0;
    dword_3113F0 = 0;
    dword_3113F4 = 0;
    dword_3113E0 = (int)new_c_map((int)sub_1172FC, 0, 0);
    dword_3113C4 = 1;
    pthread_create((pthread_t *)&dword_3113FC, 0, (void *(*)(void *))sub_11730C, 0);
    dword_3113F8 = 1;
  }
  return 0;
}
