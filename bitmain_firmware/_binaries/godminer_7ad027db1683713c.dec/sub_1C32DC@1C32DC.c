void __noreturn sub_1C32DC(int a1, int a2, int a3, int a4, char a5, ...)
{
  int v5; // r7
  int v6; // r8
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  sub_1A3D64(*(void **)v5, *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4));
  sub_1A3D70((void *)v5);
  sub_19C310(v6, a5);
  sub_19B1A8((unsigned int **)va);
  Unwind_Resume(a1);
}
