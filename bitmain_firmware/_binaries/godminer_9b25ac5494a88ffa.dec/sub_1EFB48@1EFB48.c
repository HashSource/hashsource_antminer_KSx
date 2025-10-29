void __noreturn sub_1EFB48(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  void *v6; // r8
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_1AE8E4(2, v6);
  sub_1AE27C((int)va);
  Unwind_Resume(a1);
}
