void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_306BD8 )
  {
    dword_306BA4 = 0;
    pthread_join(dword_306BDC, 0);
    delete_c_map(dword_306BC0);
    pthread_mutex_destroy(&stru_306BA8);
    v0 = sub_113DA4(0x100u);
    gpio_unreg_callback(v0, sub_113D24);
    v1 = sub_113DA4(0x101u);
    gpio_unreg_callback(v1, sub_113D24);
    v2 = sub_113D84();
    gpio_unexport(v2);
    v3 = sub_113DA4(2u);
    gpio_unexport(v3);
    v4 = sub_113DA4(0x100u);
    gpio_unexport(v4);
    v5 = sub_113DA4(0x101u);
    gpio_unexport(v5);
    dword_306BD8 = 0;
  }
}
