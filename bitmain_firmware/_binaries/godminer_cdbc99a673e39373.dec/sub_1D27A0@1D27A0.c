void __noreturn sub_1D27A0(
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
  sub_19D328((int)va);
  j_close(fd);
  sub_19D464((int)&a13);
  sub_19D464((int)&a9);
  sub_19D24C(a8);
  Unwind_Resume(a1);
}
