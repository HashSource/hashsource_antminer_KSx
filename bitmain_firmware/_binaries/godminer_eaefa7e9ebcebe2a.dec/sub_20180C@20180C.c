void __noreturn sub_20180C(
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
  va_list va; // [sp+20h] [bp+20h] BYREF

  va_start(va, a12);
  sub_202688((char *)va);
  Unwind_Resume(a1);
}
