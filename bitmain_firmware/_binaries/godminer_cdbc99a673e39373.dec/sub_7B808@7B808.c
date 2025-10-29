void __fastcall __noreturn sub_7B808(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
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
        int a20)
{
  _DWORD *v20; // r5
  int v22; // r1
  int v23; // r2
  int v24; // r3

  v22 = a18;
  v23 = a19;
  v24 = a20;
  v20[13] = a17;
  v20[14] = v22;
  v20[15] = v23;
  v20[16] = v24;
  sub_19C580(v20 + 12);
  sub_19CD20(v20 + 9);
  sub_19DB8C(&a9);
  Unwind_Resume(a1);
}
