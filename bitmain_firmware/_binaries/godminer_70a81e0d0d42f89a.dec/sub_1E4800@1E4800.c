void __fastcall __noreturn sub_1E4800(int a1)
{
  int v1; // r4

  sub_1B8288(*(void **)v1, *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4));
  sub_1B8294((void *)v1);
  Unwind_Resume(a1);
}
