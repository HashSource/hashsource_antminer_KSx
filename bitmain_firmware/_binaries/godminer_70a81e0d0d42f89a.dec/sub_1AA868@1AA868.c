void __fastcall __noreturn sub_1AA868(int a1)
{
  int v1; // r4
  _DWORD *v2; // r6

  sub_1AA8B8(*v2, *(_DWORD *)(v2[1] + 4), *(_DWORD *)(v2[1] + 8));
  sub_1AA8C4(*(_DWORD *)(v1 + 4));
  Unwind_Resume(a1);
}
