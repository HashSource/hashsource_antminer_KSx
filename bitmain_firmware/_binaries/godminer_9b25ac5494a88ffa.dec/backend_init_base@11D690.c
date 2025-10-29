int __fastcall backend_init_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  signed int v7; // r6
  void *v8; // r0
  size_t v9; // r1
  char *v10; // r0
  int v11; // r5
  signed int v12; // r7
  size_t v13; // r1
  int v14; // r3
  bool v15; // zf
  void (__fastcall *v16)(int); // r3

  v2 = dev_ctrl(a1);
  v3 = (*(int (__fastcall **)(_DWORD))(v2 + 48))(*(_DWORD *)(a1 + 240));
  *(_DWORD *)(a1 + 244) = v3;
  v4 = dev_ctrl(v3);
  v5 = (*(int (__fastcall **)(_DWORD))(v4 + 44))(*(_DWORD *)(a1 + 240));
  v6 = dev_ctrl(v5);
  (*(void (__fastcall **)(_DWORD))(v6 + 4))(*(_DWORD *)(a1 + 240));
  *(_DWORD *)(a1 + 848) = queue_new(1, 0);
  *(_DWORD *)(a1 + 852) = queue_new(*(_DWORD *)(a1 + 824), 0);
  *(_DWORD *)(a1 + 856) = queue_new(1, 0);
  *(_DWORD *)(a1 + 844) = queue_new(*(_DWORD *)(a1 + 820), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 880), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 904), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 928), 0);
  v7 = *(_DWORD *)(a1 + 328);
  *(_DWORD *)(a1 + 480) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = 2 * *(_DWORD *)(a1 + 828);
  *(_DWORD *)(a1 + 472) = v8;
  *(_DWORD *)(a1 + 476) = calloc(v7, v9);
  *(_DWORD *)(a1 + 448) = calloc(v7, 0x30u);
  v10 = (char *)calloc(v7, 0x2Cu);
  *(_DWORD *)(a1 + 520) = v10;
  if ( v7 > 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      ++v12;
      pthread_mutex_init((pthread_mutex_t *)&v10[v11 + 20], 0);
      v7 = *(_DWORD *)(a1 + 328);
      v11 += 44;
      if ( v7 <= v12 )
        break;
      v10 = *(char **)(a1 + 520);
    }
  }
  v13 = *(_DWORD *)(a1 + 840);
  *(_DWORD *)(a1 + 420) = -1;
  *(_QWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 468) = 0;
  *(_BYTE *)(a1 + 452) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 456) = 0;
  *(_DWORD *)(a1 + 484) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  if ( v13 )
    *(_DWORD *)(a1 + 508) = calloc(v7, v13);
  *(_DWORD *)(a1 + 512) = 0;
  memset((void *)(a1 + 560), 0, 0x100u);
  v14 = *(_DWORD *)(a1 + 860);
  *(_BYTE *)(a1 + 876) = 0;
  v15 = v14 == 0;
  v16 = *(void (__fastcall **)(int))(a1 + 76);
  if ( v15 )
    *(_DWORD *)(a1 + 860) = a1;
  *(_BYTE *)(a1 + 877) = 0;
  *(_BYTE *)(a1 + 878) = 0;
  if ( v16 )
    v16(a1);
  pthread_create((pthread_t *)(a1 + 868), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 864), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 872), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 248) = 1;
  return 0;
}
