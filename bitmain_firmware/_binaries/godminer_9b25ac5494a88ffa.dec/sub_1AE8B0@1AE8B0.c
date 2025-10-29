void __fastcall __noreturn sub_1AE8B0(int a1)
{
  int v1; // r4

  sub_1AEA18(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_1AEB30(v1 + 120);
  Unwind_Resume(a1);
}
