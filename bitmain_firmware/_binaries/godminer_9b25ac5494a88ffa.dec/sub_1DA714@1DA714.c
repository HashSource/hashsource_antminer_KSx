void __noreturn sub_1DA714(
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
        ...)
{
  int v12; // r10
  va_list va; // [sp+20h] [bp+20h] BYREF

  va_start(va, a12);
  sub_1AEE00((int)va);
  j_close(v12);
  Unwind_Resume(a1);
}
