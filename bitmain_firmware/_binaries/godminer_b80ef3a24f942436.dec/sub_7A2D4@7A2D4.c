void __noreturn sub_7A2D4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, ...)
{
  va_list va; // [sp+18h] [bp+18h] BYREF

  va_start(va, a10);
  sub_1B2398((char *)va);
  Unwind_Resume(a1);
}
