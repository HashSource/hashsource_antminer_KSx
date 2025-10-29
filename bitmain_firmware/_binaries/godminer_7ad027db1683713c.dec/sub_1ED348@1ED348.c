void __noreturn sub_1ED348()
{
  int v0; // r7

  sub_1A3D64(*(void **)v0, *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4));
  sub_1A3D70((void *)v0);
  core::panicking::panic_cannot_unwind();
}
