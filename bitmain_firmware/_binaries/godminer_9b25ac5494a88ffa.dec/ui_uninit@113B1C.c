void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_309C00 )
  {
    dword_309BCC = 0;
    pthread_join(dword_309C04, 0);
    delete_c_map(dword_309BE8);
    pthread_mutex_destroy(&stru_309BD0);
    v0 = sub_113644(0x100u);
    gpio_unreg_callback(v0, sub_1135C4);
    v1 = sub_113644(0x101u);
    gpio_unreg_callback(v1, sub_1135C4);
    v2 = sub_113624();
    gpio_unexport(v2);
    v3 = sub_113644(2u);
    gpio_unexport(v3);
    v4 = sub_113644(0x100u);
    gpio_unexport(v4);
    v5 = sub_113644(0x101u);
    gpio_unexport(v5);
    dword_309C00 = 0;
  }
}
