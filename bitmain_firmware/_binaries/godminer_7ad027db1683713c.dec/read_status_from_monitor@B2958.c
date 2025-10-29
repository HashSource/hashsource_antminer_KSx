void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &byte_2D3630[216 * *(_DWORD *)(a2 + 228) + 1280], 0xD8u);
  return a1;
}
