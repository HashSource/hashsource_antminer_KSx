void __noreturn sub_1D0A24(
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
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int fd,
        int a31,
        int a32,
        ...)
{
  int v32; // r8
  va_list va; // [sp+70h] [bp+70h] BYREF

  va_start(va, a32);
  sub_19C1B8((int)va);
  j_close(fd);
  sub_19C2F4((int)&a15);
  sub_19C2F4((int)&a27);
  sub_19CDE4(&a23);
  sub_19CB28(v32);
  Unwind_Resume(a1);
}
