int __fastcall reset_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r2
  void *v6; // r0

  v2 = (*(int (**)(void))(a1 + 56))();
  v3 = dev_ctrl(v2);
  (*(void (__fastcall **)(_DWORD))(v3 + 44))(*(_DWORD *)(a1 + 240));
  queue_clear(*(_DWORD *)(a1 + 848));
  v4 = *(_DWORD *)(a1 + 328);
  v5 = *(_DWORD *)(a1 + 840);
  *(_DWORD *)(a1 + 512) = 0;
  v6 = *(void **)(a1 + 508);
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  memset(v6, 0, v5 * v4);
  return 0;
}
