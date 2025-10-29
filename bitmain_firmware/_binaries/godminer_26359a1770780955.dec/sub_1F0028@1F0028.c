void __noreturn sub_1F0028(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_1AE65C((int)va);
  Unwind_Resume(a1);
}
