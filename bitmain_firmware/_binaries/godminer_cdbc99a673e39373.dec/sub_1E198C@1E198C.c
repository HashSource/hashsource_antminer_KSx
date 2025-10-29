void __noreturn sub_1E198C()
{
  void *v0; // r5
  void *v1; // r6
  int v2; // r7

  sub_1A4ED4(v1, *(_DWORD *)(v2 + 4));
  sub_1A4EEC(v0);
  core::panicking::panic_cannot_unwind();
}
