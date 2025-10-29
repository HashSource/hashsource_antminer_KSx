void __noreturn sub_1FF60C()
{
  int v0; // r7

  sub_1B6028(*(void **)v0, *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4));
  sub_1B6034((void *)v0);
  core::panicking::panic_cannot_unwind();
}
