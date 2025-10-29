void __fastcall __noreturn sub_1B0EF0(int a1)
{
  int v1; // r4

  sub_1B1058(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_1B1170(v1 + 120);
  Unwind_Resume(a1);
}
