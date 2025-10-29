void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, (char *)&unk_2F42D0 + 216 * *(_DWORD *)(a2 + 240) + 1280, 0xD8u);
  return a1;
}
