void __noreturn sub_1D92DC(int a1, int a2, int a3, int a4, char a5, ...)
{
  int v5; // r7
  int v6; // r8
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_1B9D64(*(void **)v5, *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4));
  sub_1B9D70((void *)v5);
  sub_1B2310(v6, a5);
  sub_1B11A8((unsigned int **)va);
  Unwind_Resume(a1);
}
