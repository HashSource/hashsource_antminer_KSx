void __noreturn std::alloc::rust_oom()
{
  void (*v0)(void); // r2
  void (*v1)(void); // r3

  v0 = (void (*)(void))off_2EAB04;
  __dmb(0xBu);
  v1 = (void (*)(void))sub_1D5C9C;
  if ( v0 )
    v1 = v0;
  v1();
  std::process::abort();
}
