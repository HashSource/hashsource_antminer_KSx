void __noreturn sub_205B9C(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  sub_20307C((int)va);
  Unwind_Resume(a1);
}
