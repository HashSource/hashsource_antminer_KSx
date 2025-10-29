int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  pthread_mutex_t *v5; // r7
  int *v6; // r0
  int v7; // r4
  int v8; // r0

  if ( dword_2E908C[a1] )
    return dword_2E908C[a1];
  v3 = calloc(1u, 0x3D8u);
  v3[57] = a1;
  dword_2E908C[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = (pthread_mutex_t *)dword_2E908C[a1];
  pthread_mutex_init(v5 + 36, 0);
  pthread_mutex_init(v5 + 37, 0);
  v6 = queue_new(1, 0);
  v7 = dword_2E908C[a1];
  v5[35].__lock = (int)v6;
  v8 = *(_DWORD *)(v7 + 840);
  *(_DWORD *)(v7 + 240) = set_chipaddr_base;
  *(_DWORD *)(v7 + 244) = set_inactive_base;
  *(_DWORD *)(v7 + 832) = v8;
  *(_DWORD *)(v7 + 248) = set_chip_reg_base;
  *(_DWORD *)(v7 + 252) = set_core_reg_base;
  *(_DWORD *)(v7 + 268) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 276) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 236) = 1;
  return v7;
}
