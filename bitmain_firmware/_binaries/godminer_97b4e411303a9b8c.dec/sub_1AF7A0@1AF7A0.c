void __fastcall __noreturn sub_1AF7A0(int a1)
{
  int v1; // r4

  sub_1AF908(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_1AFA20(v1 + 120);
  Unwind_Resume(a1);
}
