void __noreturn sub_1D57BC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, ...)
{
  va_list va; // [sp+18h] [bp+18h] BYREF

  va_start(va, a10);
  sub_19CAE8((unsigned int **)va);
  Unwind_Resume(a1);
}
