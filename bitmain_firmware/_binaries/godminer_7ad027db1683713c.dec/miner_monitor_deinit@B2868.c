void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  void **v3; // r4
  void **v4; // r5

  destroy_task_timer((_DWORD *)dword_2D48C4);
  destroy_task_timer((_DWORD *)dword_2D48C0);
  destroy_observable_subject((void *)dword_2D48BC);
  destroy_observable_subject((void *)dword_2D48B4);
  destroy_observable_subject((void *)dword_2D48B8);
  destroy_observable_subject((void *)dword_2D48B0);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (void **)dword_2D3B30;
    v4 = (void **)&dword_2D3B30[54 * v2];
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
