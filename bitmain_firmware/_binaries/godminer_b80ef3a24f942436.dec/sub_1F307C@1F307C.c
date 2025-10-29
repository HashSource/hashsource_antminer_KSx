void __noreturn sub_1F307C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  va_list va; // [sp+10h] [bp+10h] BYREF

  va_start(va, a8);
  sub_1B22F4((int)va);
  Unwind_Resume(a1);
}
