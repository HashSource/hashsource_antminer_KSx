void __fastcall __noreturn sub_1AF004(int a1)
{
  _DWORD *v1; // r4

  sub_1B6028(*v1, *(_DWORD *)(v1[1] + 4), *(_DWORD *)(v1[1] + 8));
  Unwind_Resume(a1);
}
