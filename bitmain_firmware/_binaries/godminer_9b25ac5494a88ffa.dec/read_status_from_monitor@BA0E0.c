void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, (char *)&unk_2E8A98 + 224 * *(_DWORD *)(a2 + 240) + 1280, 0xE0u);
  return a1;
}
