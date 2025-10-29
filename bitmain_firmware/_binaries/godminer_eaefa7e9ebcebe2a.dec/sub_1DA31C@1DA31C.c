void __fastcall __noreturn sub_1DA31C(
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
        struct addrinfo *ai,
        int a12,
        int a13,
        void *ptr)
{
  j_freeaddrinfo(ai);
  sub_1AF36C(a13, ptr);
  Unwind_Resume(a1);
}
