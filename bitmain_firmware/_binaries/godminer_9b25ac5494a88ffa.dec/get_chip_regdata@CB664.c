void __fastcall get_chip_regdata(int a1, __int16 a2)
{
  int v3; // r6
  void *v4; // r5
  int v5; // [sp+14h] [bp-18h] BYREF
  _BYTE v6[10]; // [sp+18h] [bp-14h] BYREF
  __int16 v7; // [sp+22h] [bp-Ah]

  v3 = *(_DWORD *)(a1 + 328);
  v7 = a2;
  v6[8] = 1;
  v5 = 0;
  v6[9] = 0;
  v4 = calloc(12 * v3, 1u);
  (*(void (__fastcall **)(int, _BYTE *, int, void *, int *))(a1 + 280))(a1, v6, v3, v4, &v5);
  free(v4);
}
