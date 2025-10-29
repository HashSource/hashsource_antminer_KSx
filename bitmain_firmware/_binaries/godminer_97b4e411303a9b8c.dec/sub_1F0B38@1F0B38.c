void __noreturn sub_1F0B38(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_1AF16C((int)va);
  Unwind_Resume(a1);
}
