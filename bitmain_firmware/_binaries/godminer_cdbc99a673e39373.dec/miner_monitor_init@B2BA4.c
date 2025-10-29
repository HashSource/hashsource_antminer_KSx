int __fastcall miner_monitor_init(int a1)
{
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r6
  char *v4; // r7
  _BYTE *v5; // r0
  char *v6; // r5
  char *v7; // r4
  void *v8; // r0
  char *v9; // r2
  char *v10; // r3
  char *v11; // r0
  int v12; // r0

  v1 = (int (**)(void))dev_ctrl(a1);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (char *)&unk_2D4FE8;
    v4 = (char *)&unk_2D4FE8 + 216 * v2;
    do
    {
      v5 = calloc(0x100u, 1u);
      *v5 = 63;
      *((_DWORD *)v3 + 17) = v5;
      *((_DWORD *)v3 + 24) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 25) = calloc(0x10u, 4u);
      v6 = (char *)calloc(0x10u, 4u);
      *((_DWORD *)v3 + 1) = v6;
      v7 = (char *)calloc(0x10u, 4u);
      *(_DWORD *)v3 = v7;
      *((_DWORD *)v3 + 3) = calloc(0x10u, 4u);
      v8 = calloc(0x10u, 4u);
      *((_QWORD *)v3 + 26) = 0;
      v9 = v7 - 4;
      v10 = v6 - 4;
      *((_DWORD *)v3 + 50) = 0;
      *((_DWORD *)v3 + 2) = v8;
      do
      {
        *((_DWORD *)v10 + 1) = -64;
        v10 += 4;
        *((_DWORD *)v9 + 1) = -64;
        v9 += 4;
      }
      while ( v10 != v6 + 60 );
      v11 = v3;
      v3 += 216;
      init_temp_senor_info(v11, -64, v9);
    }
    while ( v3 != v4 );
  }
  dword_2D5D74 = new_observable_subject();
  dword_2D5D6C = new_observable_subject();
  dword_2D5D70 = new_observable_subject();
  dword_2D5D68 = new_observable_subject();
  dword_2D5D78 = ((int (*)(void))new_task_timer)();
  ((void (*)(void))add_new_task)();
  add_new_task(dword_2D5D78, sub_B2984, &stru_1D4BC.st_value);
  v12 = add_new_task(dword_2D5D78, sub_B2FCC, 60000);
  dword_2D5D7C = new_task_timer(v12);
  add_new_task(dword_2D5D7C, 731324, 5000);
  add_new_task(dword_2D5D7C, 731124, 1000);
  return add_new_task(dword_2D5D7C, task_check_miner_status, 1000);
}
