void __noreturn sub_2280C4(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  int v6; // r11
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_22766C((int)va);
  sub_22769C(v6);
  Unwind_Resume(a1);
}
