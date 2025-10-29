void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, (char *)&unk_2D4AE8 + 216 * *(_DWORD *)(a2 + 228) + 1280, 0xD8u);
  return a1;
}
