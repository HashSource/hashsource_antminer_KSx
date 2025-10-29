void __fastcall __noreturn sub_1D0BA8(int a1)
{
  int v1; // r5
  int v2; // r6

  sub_1B9D64(*(void **)v2, *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4));
  sub_1B9D70((void *)v2);
  j_close(v1);
  Unwind_Resume(a1);
}
