void __fastcall __noreturn sub_19DB3C(int a1)
{
  int v1; // r4

  sub_19DCA4(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_19DDBC(v1 + 120);
  Unwind_Resume(a1);
}
