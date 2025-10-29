void __noreturn sub_1EE4B8()
{
  int v0; // r7

  sub_1A4ED4(*(void **)v0, *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4));
  sub_1A4EE0((void *)v0);
  core::panicking::panic_cannot_unwind();
}
