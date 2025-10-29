void __noreturn sub_1F1BD4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  int v8; // r11
  int v10; // [sp+10h] [bp+10h] BYREF
  va_list va; // [sp+10h] [bp+10h]
  int v12; // [sp+14h] [bp+14h]
  int v13; // [sp+18h] [bp+18h] BYREF
  va_list va1; // [sp+18h] [bp+18h]
  int v15; // [sp+1Ch] [bp+1Ch]
  int v16; // [sp+20h] [bp+20h] BYREF
  va_list va2; // [sp+20h] [bp+20h]
  int v18; // [sp+24h] [bp+24h]
  va_list va3; // [sp+28h] [bp+28h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v10 = va_arg(va1, _DWORD);
  v12 = va_arg(va1, _DWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _DWORD);
  v15 = va_arg(va2, _DWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _DWORD);
  v18 = va_arg(va3, _DWORD);
  sub_1AF8FC(v8);
  sub_1AFBA4((int *)va3);
  sub_1AF8FC(a6);
  sub_1AFBA4((int *)va2);
  sub_1AF8A8((int *)va1);
  sub_1AF8A8((int *)va);
  Unwind_Resume(a1);
}
