int __fastcall sub_C7FA0(int a1, __int16 a2, int a3)
{
  int (__fastcall *v3)(int, _DWORD *); // r3
  _DWORD v5[2]; // [sp+0h] [bp-14h] BYREF
  __int64 v6; // [sp+8h] [bp-Ch]

  v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 268);
  v5[1] = 0;
  v5[0] = a3;
  v6 = 0xFF00000001LL;
  WORD1(v6) = a2;
  return v3(a1, v5);
}
