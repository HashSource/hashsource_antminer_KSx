void __noreturn sub_7B368(int a1, int a2, int a3, int a4, ...)
{
  int v5; // [sp+0h] [bp+0h] BYREF
  va_list va; // [sp+0h] [bp+0h]
  int v7; // [sp+4h] [bp+4h]
  int v8; // [sp+8h] [bp+8h]
  int v9; // [sp+Ch] [bp+Ch]
  va_list va1; // [sp+10h] [bp+10h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v5 = va_arg(va1, _DWORD);
  v7 = va_arg(va1, _DWORD);
  v8 = va_arg(va1, _DWORD);
  v9 = va_arg(va1, _DWORD);
  sub_1AE65C((char *)va1);
  if ( v8 )
    sub_1AD548((int *)va);
  Unwind_Resume(a1);
}
