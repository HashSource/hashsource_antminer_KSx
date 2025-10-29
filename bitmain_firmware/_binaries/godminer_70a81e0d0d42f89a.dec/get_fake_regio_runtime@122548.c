int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int v4; // r0
  pthread_mutex_t *v5; // r7
  int v6; // r0
  int v7; // r4
  int v8; // r0

  if ( dword_30D540[a1] )
    return dword_30D540[a1];
  v3 = calloc(1u, 0x480u);
  v3[61] = a1;
  dword_30D540[a1] = v3;
  v4 = dev_ctrl((int)v3);
  (*(void (__fastcall **)(int))(v4 + 4))(a1);
  v5 = (pthread_mutex_t *)dword_30D540[a1];
  pthread_mutex_init(v5 + 37, 0);
  pthread_mutex_init(v5 + 38, 0);
  v6 = queue_new(1, 0);
  v7 = dword_30D540[a1];
  v5[36].__lock = v6;
  v8 = *(_DWORD *)(v7 + 864);
  *(_DWORD *)(v7 + 256) = set_chipaddr_base;
  *(_DWORD *)(v7 + 260) = set_inactive_base;
  *(_DWORD *)(v7 + 856) = v8;
  *(_DWORD *)(v7 + 264) = set_chip_reg_base;
  *(_DWORD *)(v7 + 268) = set_core_reg_base;
  *(_DWORD *)(v7 + 284) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 296) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 252) = 1;
  return v7;
}
