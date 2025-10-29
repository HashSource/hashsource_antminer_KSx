void __noreturn sub_1C7CB8(int a1, int a2, int a3, int a4, int a5, ...)
{
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_1AF1B0((int)va);
  Unwind_Resume(a1);
}
