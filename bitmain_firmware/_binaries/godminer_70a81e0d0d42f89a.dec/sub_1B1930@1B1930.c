void __fastcall __noreturn sub_1B1930(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5

  sub_1B8288(*v2, *(_DWORD *)(v2[1] + 4), *(_DWORD *)(v2[1] + 8));
  sub_1B8294(v2);
  sub_1B0818(v1);
  Unwind_Resume(a1);
}
