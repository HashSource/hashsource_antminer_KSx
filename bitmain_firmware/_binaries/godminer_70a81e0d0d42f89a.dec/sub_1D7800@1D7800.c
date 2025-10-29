void __noreturn sub_1D7800(int a1, int a2, int a3, int a4, char a5, ...)
{
  int v5; // r7
  int v6; // r8
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_1B8288(*(void **)v5, *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4));
  sub_1B8294((void *)v5);
  sub_1B0834(v6, a5);
  sub_1AF6CC((unsigned int **)va);
  Unwind_Resume(a1);
}
