int __fastcall set_misc_ctrl_dash(int a1, int a2)
{
  int (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+0h] [bp-14h] BYREF
  __int64 v5; // [sp+8h] [bp-Ch]

  v2 = *(int (__fastcall **)(int, _DWORD *))(a1 + 248);
  v4[1] = 0;
  v4[0] = a2;
  v5 = 1835009;
  return v2(a1, v4);
}
