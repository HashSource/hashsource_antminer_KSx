void __fastcall __noreturn sub_1B01E0(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5

  sub_1B6B38(*v2, *(_DWORD *)(v2[1] + 4), *(_DWORD *)(v2[1] + 8));
  sub_1B6B44(v2);
  sub_1AF0C8(v1);
  Unwind_Resume(a1);
}
