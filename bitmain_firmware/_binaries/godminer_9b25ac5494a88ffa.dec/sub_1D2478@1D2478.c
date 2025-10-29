void __noreturn sub_1D2478(int a1, int a2, int a3, int a4, ...)
{
  int v4; // r10
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  sub_1AEE00((int)va);
  sub_1ADF08(0, v4);
  Unwind_Resume(a1);
}
