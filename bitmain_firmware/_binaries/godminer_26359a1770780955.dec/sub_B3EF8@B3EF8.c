int __fastcall sub_B3EF8(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_B3C74();
  api();
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
