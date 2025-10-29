void __noreturn sub_1B60E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  va_list va; // [sp+10h] [bp+10h] BYREF

  va_start(va, a8);
  sub_1AFC34((int)va);
  Unwind_Resume(a1);
}
