void __noreturn sub_1F0D74(
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
        int a16,
        int a17,
        int a18,
        ...)
{
  va_list va; // [sp+38h] [bp+38h] BYREF

  va_start(va, a18);
  sub_1AF118((int)va);
  Unwind_Resume(a1);
}
