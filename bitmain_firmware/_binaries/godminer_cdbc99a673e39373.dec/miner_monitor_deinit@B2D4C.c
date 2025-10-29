void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  void **v3; // r4
  void **v4; // r5

  destroy_task_timer((void *)dword_2D5D7C);
  destroy_task_timer((void *)dword_2D5D78);
  destroy_observable_subject((void *)dword_2D5D74);
  destroy_observable_subject((void *)dword_2D5D6C);
  destroy_observable_subject((void *)dword_2D5D70);
  destroy_observable_subject((void *)dword_2D5D68);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (void **)&unk_2D4FE8;
    v4 = (void **)((char *)&unk_2D4FE8 + 216 * v2);
    do
    {
      free(v3[17]);
      free(v3[24]);
      free(v3[1]);
      free(*v3);
      free(v3[3]);
      v3 += 54;
      free(*(v3 - 52));
    }
    while ( v3 != v4 );
  }
}
