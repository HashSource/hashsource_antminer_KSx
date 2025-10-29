void __fastcall __noreturn sub_19C9CC(int a1)
{
  int v1; // r4

  sub_19CB34(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_19CC4C(v1 + 120);
  Unwind_Resume(a1);
}
