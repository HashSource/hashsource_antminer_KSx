void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  void **v3; // r4
  void **v4; // r5

  destroy_task_timer((void *)dword_2E9DAC);
  destroy_task_timer((void *)dword_2E9DA8);
  destroy_observable_subject((void *)dword_2E9DA4);
  destroy_observable_subject((void *)dword_2E9D9C);
  destroy_observable_subject((void *)dword_2E9DA0);
  destroy_observable_subject((void *)dword_2E9D98);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (void **)&unk_2E8F98;
    v4 = (void **)((char *)&unk_2E8F98 + 224 * v2);
    do
    {
      free(v3[19]);
      free(v3[26]);
      free(*v3);
      free(v3[2]);
      free(v3[1]);
      free(v3[4]);
      v3 += 56;
      free(*(v3 - 53));
    }
    while ( v3 != v4 );
  }
}
