void __noreturn sub_791B8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, ...)
{
  va_list va; // [sp+18h] [bp+18h] BYREF

  va_start(va, a10);
  sub_19D508((char *)va);
  Unwind_Resume(a1);
}
