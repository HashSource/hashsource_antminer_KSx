int __fastcall async_push_work_base(int a1, int a2, int a3, int a4)
{
  queue_enqueue(*(_DWORD *)(a1 + 852), a2, 1, a4);
  return 0;
}
