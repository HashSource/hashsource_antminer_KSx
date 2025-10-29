void __noreturn sub_1C9F18(int a1, int a2, int a3, int a4, int a5, ...)
{
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_1B1410((int)va);
  Unwind_Resume(a1);
}
