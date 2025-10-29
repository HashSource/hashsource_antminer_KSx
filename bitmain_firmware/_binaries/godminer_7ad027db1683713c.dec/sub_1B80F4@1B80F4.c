void __noreturn sub_1B80F4(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_19C544((int)va);
  Unwind_Resume(a1);
}
