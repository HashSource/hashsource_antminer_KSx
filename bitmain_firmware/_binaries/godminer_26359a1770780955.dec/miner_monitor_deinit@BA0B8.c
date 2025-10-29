void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  void **v3; // r4
  void **v4; // r5

  destroy_task_timer((void *)dword_2EADBC);
  destroy_task_timer((void *)dword_2EADB8);
  destroy_observable_subject((void *)dword_2EADB4);
  destroy_observable_subject((void *)dword_2EADAC);
  destroy_observable_subject((void *)dword_2EADB0);
  destroy_observable_subject((void *)dword_2EADA8);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (void **)&unk_2E9FA8;
    v4 = (void **)((char *)&unk_2E9FA8 + 224 * v2);
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
