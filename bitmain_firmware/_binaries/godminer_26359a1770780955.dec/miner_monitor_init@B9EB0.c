int __fastcall miner_monitor_init(int a1)
{
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r6
  char *v4; // r7
  _BYTE *v5; // r0
  char *v6; // r8
  char *v7; // r5
  char *v8; // r4
  void *v9; // r0
  char *v10; // r12
  char *v11; // r2
  char *v12; // r1
  char *v13; // r0
  int v14; // r0

  v1 = (int (**)(void))dev_ctrl(a1);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (char *)&unk_2E9FA8;
    v4 = (char *)&unk_2E9FA8 + 224 * v2;
    do
    {
      v5 = calloc(0x100u, 1u);
      *v5 = 63;
      *((_DWORD *)v3 + 19) = v5;
      *((_DWORD *)v3 + 26) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 27) = calloc(0x10u, 4u);
      v6 = (char *)calloc(0x10u, 4u);
      *((_DWORD *)v3 + 2) = v6;
      v7 = (char *)calloc(0x10u, 4u);
      *((_DWORD *)v3 + 1) = v7;
      v8 = (char *)calloc(0x10u, 4u);
      *(_DWORD *)v3 = v8;
      *((_DWORD *)v3 + 4) = calloc(0x10u, 4u);
      v9 = calloc(0x10u, 4u);
      *((_QWORD *)v3 + 27) = 0;
      v10 = v7 - 4;
      v11 = v6 - 4;
      v12 = v8 - 4;
      *((_DWORD *)v3 + 52) = 0;
      *((_DWORD *)v3 + 3) = v9;
      do
      {
        *((_DWORD *)v11 + 1) = -64;
        v11 += 4;
        *((_DWORD *)v10 + 1) = -64;
        v10 += 4;
        *((_DWORD *)v12 + 1) = -64;
        v12 += 4;
      }
      while ( v11 != v6 + 60 );
      v13 = v3;
      v3 += 224;
      init_temp_senor_info(v13, v12);
    }
    while ( v3 != v4 );
  }
  dword_2EADB4 = new_observable_subject();
  dword_2EADAC = new_observable_subject();
  dword_2EADB0 = new_observable_subject();
  dword_2EADA8 = new_observable_subject();
  dword_2EADB8 = ((int (*)(void))new_task_timer)();
  ((void (*)(void))add_new_task)();
  add_new_task(dword_2EADB8, sub_B9C90, &stru_1D4C0);
  v14 = add_new_task(dword_2EADB8, sub_BA404, 60000);
  if ( !is_test_pool )
  {
    add_new_task(dword_2EADB8, update_droa_log, &stru_2BF20);
    v14 = add_new_task(dword_2EADB8, update_timestamp_file, &stru_2BF20);
  }
  dword_2EADBC = new_task_timer(v14);
  add_new_task(dword_2EADBC, sub_B9BC8, 5000);
  add_new_task(dword_2EADBC, sub_B9B00, 1000);
  return add_new_task(dword_2EADBC, task_check_miner_status, 1000);
}
