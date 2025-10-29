void __noreturn sub_1E1B20(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_19C1B8((int)va);
  Unwind_Resume(a1);
}
