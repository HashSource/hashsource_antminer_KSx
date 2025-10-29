void __noreturn sub_1CB9F4(int a1, int a2, int a3, int a4, int a5, ...)
{
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_1B2EEC((int)va);
  Unwind_Resume(a1);
}
