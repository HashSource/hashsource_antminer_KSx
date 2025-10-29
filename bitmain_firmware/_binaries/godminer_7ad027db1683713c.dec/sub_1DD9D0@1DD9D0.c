void __noreturn sub_1DD9D0(int a1, int a2, int a3, int a4, ...)
{
  int v5; // [sp+0h] [bp+0h] BYREF
  va_list va; // [sp+0h] [bp+0h]
  va_list va1; // [sp+4h] [bp+4h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v5 = va_arg(va1, _DWORD);
  sub_19C494((int *)va1);
  sub_19C494((int *)va);
  Unwind_Resume(a1);
}
