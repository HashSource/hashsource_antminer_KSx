void __noreturn sub_1CAC60(int a1, int a2, int a3, int a4, int a5, int a6, int a7, ...)
{
  int v8; // [sp+Ch] [bp+Ch] BYREF
  va_list va; // [sp+Ch] [bp+Ch]
  int v10; // [sp+10h] [bp+10h]
  int v11; // [sp+14h] [bp+14h]
  va_list va1; // [sp+18h] [bp+18h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v8 = va_arg(va1, _DWORD);
  v10 = va_arg(va1, _DWORD);
  v11 = va_arg(va1, _DWORD);
  sub_1AEFA4((int)va1);
  sub_1AD1FC((int)va);
  sub_1AEC40((unsigned int *)&dword_30ACC4);
  Unwind_Resume(a1);
}
