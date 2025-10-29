void __fastcall __noreturn sub_1AEC90(int a1)
{
  int v1; // r4

  sub_1AEDF8(v1 + 32);
  j_munmap(*(void **)(v1 + 112), *(_DWORD *)(v1 + 116));
  sub_1AEF10(v1 + 120);
  Unwind_Resume(a1);
}
