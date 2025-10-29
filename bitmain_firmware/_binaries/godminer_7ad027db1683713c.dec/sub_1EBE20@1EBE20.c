void __noreturn sub_1EBE20(
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
  char v17[136]; // [sp+30h] [bp+30h] BYREF

  sub_19BDC4((int)&STACK[0x108]);
  sub_19CC4C((int)v17);
  j_munmap(addr, len);
  sub_19BDC4(a13);
  Unwind_Resume(a1);
}
