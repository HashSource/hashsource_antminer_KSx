void __noreturn sub_23A38C(int a1, int a2, int a3, int a4, int a5, int a6, ...)
{
  int v6; // r11
  va_list va; // [sp+8h] [bp+8h] BYREF

  va_start(va, a6);
  sub_239934((int)va);
  sub_239964(v6);
  Unwind_Resume(a1);
}
