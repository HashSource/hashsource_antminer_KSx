void __fastcall __noreturn sub_1B29CC(int a1)
{
  int v1; // r4

  sub_1B2B34(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_1B2C4C(v1 + 120);
  Unwind_Resume(a1);
}
