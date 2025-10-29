void __fastcall __noreturn sub_1F99B4(int a1)
{
  int v1; // r5

  sub_1B68D8(*(void **)v1, *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4));
  sub_1B68E4((void *)v1);
  Unwind_Resume(a1);
}
