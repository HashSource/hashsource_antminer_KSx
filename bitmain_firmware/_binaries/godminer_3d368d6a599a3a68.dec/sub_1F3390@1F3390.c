void __noreturn sub_1F3390()
{
  void *v0; // r5
  void *v1; // r6
  int v2; // r7

  sub_1B68D8(v1, *(_DWORD *)(v2 + 4));
  sub_1B68F0(v0);
  core::panicking::panic_cannot_unwind();
}
