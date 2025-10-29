void __fastcall __noreturn sub_20002C(int a1)
{
  _DWORD *v1; // r4
  int v2; // r6

  sub_200060(*(_DWORD *)(v2 + 100), *(_DWORD *)(*(_DWORD *)(v2 + 104) + 4), *(_DWORD *)(*(_DWORD *)(v2 + 104) + 8));
  sub_200054(*v1);
  Unwind_Resume(a1);
}
