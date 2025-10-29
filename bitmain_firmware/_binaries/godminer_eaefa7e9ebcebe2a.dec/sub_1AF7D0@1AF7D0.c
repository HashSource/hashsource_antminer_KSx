void __fastcall __noreturn sub_1AF7D0(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5

  sub_1B6128(*v2, *(_DWORD *)(v2[1] + 4), *(_DWORD *)(v2[1] + 8));
  sub_1B6134(v2);
  sub_1AE6B8(v1);
  Unwind_Resume(a1);
}
