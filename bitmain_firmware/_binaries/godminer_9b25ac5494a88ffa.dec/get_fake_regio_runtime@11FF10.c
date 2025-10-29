int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r4
  int v8; // r0

  if ( dword_30A208[a1] )
    return dword_30A208[a1];
  v3 = calloc(1u, 0x478u);
  v3[60] = a1;
  dword_30A208[a1] = v3;
  v4 = dev_ctrl((int)v3);
  (*(void (__fastcall **)(int))(v4 + 4))(a1);
  v5 = dword_30A208[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 880), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 904), 0);
  v6 = queue_new(1, 0);
  v7 = dword_30A208[a1];
  *(_DWORD *)(v5 + 856) = v6;
  v8 = *(_DWORD *)(v7 + 856);
  *(_DWORD *)(v7 + 252) = set_chipaddr_base;
  *(_DWORD *)(v7 + 256) = set_inactive_base;
  *(_DWORD *)(v7 + 848) = v8;
  *(_DWORD *)(v7 + 260) = set_chip_reg_base;
  *(_DWORD *)(v7 + 264) = set_core_reg_base;
  *(_DWORD *)(v7 + 280) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 292) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 248) = 1;
  return v7;
}
