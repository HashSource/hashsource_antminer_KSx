void __fastcall __noreturn sub_1FF77C(int a1)
{
  _DWORD *v1; // r4
  int v2; // r6

  sub_1FF7B0(*(_DWORD *)(v2 + 100), *(_DWORD *)(*(_DWORD *)(v2 + 104) + 4), *(_DWORD *)(*(_DWORD *)(v2 + 104) + 8));
  sub_1FF7A4(*v1);
  Unwind_Resume(a1);
}
