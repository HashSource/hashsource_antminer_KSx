void __noreturn sub_1F2188(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  void *v6; // r8
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_1B0F24(2, v6);
  sub_1B08BC((int)va);
  Unwind_Resume(a1);
}
