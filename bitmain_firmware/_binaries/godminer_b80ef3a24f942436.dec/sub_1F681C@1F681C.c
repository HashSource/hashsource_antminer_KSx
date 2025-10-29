void __noreturn sub_1F681C()
{
  void *v0; // r5
  void *v1; // r6
  int v2; // r7

  sub_1B9D64(v1, *(_DWORD *)(v2 + 4));
  sub_1B9D7C(v0);
  core::panicking::panic_cannot_unwind();
}
