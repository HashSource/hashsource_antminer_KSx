void __fastcall __noreturn sub_1F6D00(int a1)
{
  int v1; // r5

  sub_1B9D64(*(void **)v1, *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4));
  sub_1B9D70((void *)v1);
  j_close(STACK[0x1A0]);
  Unwind_Resume(a1);
}
