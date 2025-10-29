int __fastcall sub_B2480(int a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  void (__fastcall *v13)(int, __int64 *); // r3
  __int64 v15; // [sp+0h] [bp-D8h] BYREF
  char dest[32]; // [sp+8h] [bp-D0h] BYREF
  _BYTE v17[140]; // [sp+28h] [bp-B0h] BYREF
  int v18; // [sp+B4h] [bp-24h]
  _DWORD v19[8]; // [sp+B8h] [bp-20h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v15 = v2;
  strcpy(dest, v5);
  memcpy(v17, a2 + 1, sizeof(v17));
  v6 = *((_DWORD *)a2 + 259);
  v7 = *((_DWORD *)a2 + 260);
  v8 = *((_DWORD *)a2 + 261);
  v19[0] = *((_DWORD *)a2 + 258);
  v19[1] = v6;
  v19[2] = v7;
  v19[3] = v8;
  v9 = *((_DWORD *)a2 + 263);
  v10 = *((_DWORD *)a2 + 264);
  v11 = *((_DWORD *)a2 + 265);
  v19[4] = *((_DWORD *)a2 + 262);
  v19[5] = v9;
  v19[6] = v10;
  v19[7] = v11;
  v12 = target_to_diff_zec(v19);
  v13 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v18 = v12;
  v13(a1, &v15);
  return 0;
}
