void __noreturn sub_7CCB4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        ...)
{
  va_list va; // [sp+2Ch] [bp+2Ch] BYREF

  va_start(va, a15);
  sub_1AECE0((char *)va);
  Unwind_Resume(a1);
}
