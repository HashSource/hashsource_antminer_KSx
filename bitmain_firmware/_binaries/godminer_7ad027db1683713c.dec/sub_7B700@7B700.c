void __fastcall __noreturn sub_7B700(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        unsigned int a17,
        unsigned int a18,
        unsigned int a19,
        unsigned int a20)
{
  unsigned int *v20; // r5
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r3

  v22 = a18;
  v23 = a19;
  v24 = a20;
  v20[13] = a17;
  v20[14] = v22;
  v20[15] = v23;
  v20[16] = v24;
  sub_19B410(v20 + 12);
  sub_19BBB0(v20 + 9);
  sub_19CA1C(&a9);
  Unwind_Resume(a1);
}
