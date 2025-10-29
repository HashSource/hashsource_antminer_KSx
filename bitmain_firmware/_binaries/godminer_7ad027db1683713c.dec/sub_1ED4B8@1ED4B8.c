void __fastcall __noreturn sub_1ED4B8(int a1)
{
  void **v1; // r4
  int v2; // r6

  sub_1ED4EC(*(void **)(v2 + 100), *(_DWORD *)(*(_DWORD *)(v2 + 104) + 4));
  sub_1ED4E0(*v1);
  Unwind_Resume(a1);
}
