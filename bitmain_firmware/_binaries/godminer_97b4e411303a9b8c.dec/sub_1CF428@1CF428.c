void __noreturn sub_1CF428(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, ...)
{
  va_list va; // [sp+14h] [bp+14h] BYREF

  va_start(va, a9);
  sub_1AEB98((int)va);
  Unwind_Resume(a1);
}
