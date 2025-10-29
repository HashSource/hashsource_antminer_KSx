void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  if ( dword_3113F8 )
  {
    dword_3113C4 = 0;
    pthread_join(dword_3113FC, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_3113E0);
    pthread_mutex_destroy(&stru_3113C8);
    v0 = sub_1176DC(0x100u);
    gpio_unreg_callback(v0, (int)sub_11765C);
    v1 = sub_1176DC(0x101u);
    gpio_unreg_callback(v1, (int)sub_11765C);
    v2 = sub_1176BC();
    gpio_unexport(v2);
    v3 = sub_1176DC(2u);
    gpio_unexport(v3);
    v4 = sub_1176DC(0x100u);
    gpio_unexport(v4);
    v5 = sub_1176DC(0x101u);
    gpio_unexport(v5);
    dword_3113F8 = 0;
  }
}
