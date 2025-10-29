void __fastcall get_core_regdata_ckb_2042(int a1, __int16 a2)
{
  int v3; // r6
  void *v4; // r5
  int v5; // [sp+14h] [bp-18h] BYREF
  _BYTE v6[10]; // [sp+18h] [bp-14h] BYREF
  __int16 v7; // [sp+22h] [bp-Ah]
  char v8; // [sp+24h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 312);
  v7 = a2;
  v6[8] = 1;
  v5 = 0;
  v6[9] = 0;
  v8 = 0;
  v4 = calloc(12 * v3, 1u);
  (*(void (__fastcall **)(int, _BYTE *, int, void *, int *))(a1 + 276))(a1, v6, v3, v4, &v5);
  free(v4);
}
