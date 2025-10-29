void __fastcall __noreturn sub_1AFF80(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5

  sub_1B68D8(*v2, *(_DWORD *)(v2[1] + 4), *(_DWORD *)(v2[1] + 8));
  sub_1B68E4(v2);
  sub_1AEE68(v1);
  Unwind_Resume(a1);
}
