void __noreturn sub_1C1704(int a1, int a2, int a3, int a4, ...)
{
  int v4; // r10
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  sub_19E08C((int)va);
  sub_19D194(0, v4);
  Unwind_Resume(a1);
}
