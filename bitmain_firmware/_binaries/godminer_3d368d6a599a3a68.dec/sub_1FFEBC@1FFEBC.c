void __noreturn sub_1FFEBC()
{
  int v0; // r7

  sub_1B68D8(*(void **)v0, *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4));
  sub_1B68E4((void *)v0);
  core::panicking::panic_cannot_unwind();
}
