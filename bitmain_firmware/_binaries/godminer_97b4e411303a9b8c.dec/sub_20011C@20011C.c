void __noreturn sub_20011C()
{
  int v0; // r7

  sub_1B6B38(*(void **)v0, *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4));
  sub_1B6B44((void *)v0);
  core::panicking::panic_cannot_unwind();
}
