void __noreturn sub_1FE0E4(
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
        void *addr,
        size_t len,
        int a16,
        ...)
{
  va_list va; // [sp+30h] [bp+30h] BYREF

  va_start(va, a16);
  sub_1AE088((int)&STACK[0x108]);
  sub_1AEF10((int)va);
  j_munmap(addr, len);
  sub_1AE088(a13);
  Unwind_Resume(a1);
}
