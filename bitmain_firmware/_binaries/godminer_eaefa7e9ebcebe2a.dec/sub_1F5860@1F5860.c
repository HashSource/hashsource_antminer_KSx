void __fastcall __noreturn sub_1F5860(
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
        int fd,
        int a12,
        int a13,
        int a14,
        char a15,
        int a16,
        char a17,
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
        int a30,
        int a31,
        int a32,
        char a33,
        int a34,
        int a35,
        int a36,
        char a37,
        int a38,
        int a39,
        int a40,
        posix_spawnattr_t attr,
        int a42,
        posix_spawn_file_actions_t file_actions,
        int a44,
        int a45,
        int a46,
        int a47)
{
  j_posix_spawn_file_actions_destroy((posix_spawn_file_actions_t *)&STACK[0x1E4]);
  j_posix_spawnattr_destroy(&attr);
  if ( !a14 )
    sub_1AEEEC(a40);
  sub_1AF14C(&a27);
  sub_1AF1A8(&a23);
  sub_1AD5A8((int)&a17);
  Unwind_Resume(a1);
}
