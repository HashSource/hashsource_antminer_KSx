void __noreturn sub_1E4404(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        char a9,
        int a10,
        int a11,
        int a12,
        char a13,
        int a14,
        int a15,
        int fd,
        int a17,
        int a18,
        ...)
{
  va_list va; // [sp+38h] [bp+38h] BYREF

  va_start(va, a18);
  sub_1AEF8C((int)va);
  j_close(fd);
  sub_1AF0C8((int)&a13);
  sub_1AF0C8((int)&a9);
  sub_1AEEB0(a8);
  Unwind_Resume(a1);
}
