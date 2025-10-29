void __fastcall __noreturn sub_1B340C(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5

  sub_1B9D64(*v2, *(_DWORD *)(v2[1] + 4), *(_DWORD *)(v2[1] + 8));
  sub_1B9D70(v2);
  sub_1B22F4(v1);
  Unwind_Resume(a1);
}
