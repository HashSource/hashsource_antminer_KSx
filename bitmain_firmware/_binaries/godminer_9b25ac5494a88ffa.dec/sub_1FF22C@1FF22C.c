void __noreturn sub_1FF22C()
{
  int v0; // r7

  sub_1B5C48(*(void **)v0, *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4));
  sub_1B5C54((void *)v0);
  core::panicking::panic_cannot_unwind();
}
