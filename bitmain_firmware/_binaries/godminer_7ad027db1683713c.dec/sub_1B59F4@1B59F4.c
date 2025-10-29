void __noreturn sub_1B59F4(int a1, int a2, int a3, int a4, int a5, ...)
{
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_19CEEC((int)va);
  Unwind_Resume(a1);
}
