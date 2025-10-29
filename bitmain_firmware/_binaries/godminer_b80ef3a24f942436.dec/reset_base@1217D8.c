int __fastcall reset_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r2
  void *v6; // r0

  v2 = (*(int (**)(void))(a1 + 56))();
  v3 = dev_ctrl(v2);
  (*(void (__fastcall **)(_DWORD))(v3 + 56))(*(_DWORD *)(a1 + 240));
  queue_clear(*(_DWORD *)(a1 + 856));
  v4 = *(_DWORD *)(a1 + 336);
  v5 = *(_DWORD *)(a1 + 848);
  *(_DWORD *)(a1 + 520) = 0;
  v6 = *(void **)(a1 + 516);
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  memset(v6, 0, v5 * v4);
  return 0;
}
