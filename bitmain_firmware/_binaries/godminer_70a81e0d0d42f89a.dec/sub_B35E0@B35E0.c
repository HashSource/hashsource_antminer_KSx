int __fastcall sub_B35E0(int a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  char *v6; // r5
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  char *v10; // lr
  int v11; // r2
  int v12; // r3
  int *v13; // r4
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  void (__fastcall *v18)(int, __int64 *); // r5
  int v19; // r1
  int v20; // r2
  int v21; // r3
  __int64 v23; // [sp+0h] [bp-84h] BYREF
  char dest[32]; // [sp+8h] [bp-7Ch] BYREF
  char v25; // [sp+28h] [bp-5Ch] BYREF
  int v26; // [sp+58h] [bp-2Ch]
  int v27; // [sp+5Ch] [bp-28h]
  int v28; // [sp+60h] [bp-24h]
  int v29; // [sp+64h] [bp-20h]
  int v30; // [sp+68h] [bp-1Ch]
  int v31; // [sp+6Ch] [bp-18h]
  int v32; // [sp+70h] [bp-14h]
  int v33; // [sp+74h] [bp-10h]
  int v34; // [sp+78h] [bp-Ch]

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v23 = v2;
  strcpy(dest, v5);
  v6 = &v25;
  v7 = (int *)(a2 + 1);
  do
  {
    v8 = *v7;
    v7 += 4;
    v9 = *(v7 - 3);
    v10 = v6;
    v11 = *(v7 - 2);
    v6 += 16;
    v12 = *(v7 - 1);
    *(_DWORD *)v10 = v8;
    *((_DWORD *)v10 + 1) = v9;
    *((_DWORD *)v10 + 2) = v11;
    *((_DWORD *)v10 + 3) = v12;
  }
  while ( v7 != (int *)(a2 + 7) );
  v13 = (int *)(a2 + 129);
  v14 = target_to_diff_ckb((int)v13);
  v15 = v13[1];
  v16 = v13[2];
  v17 = v13[3];
  v18 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v26 = v14;
  v27 = *v13;
  v28 = v15;
  v29 = v16;
  v30 = v17;
  v19 = v13[5];
  v20 = v13[6];
  v21 = v13[7];
  v31 = v13[4];
  v32 = v19;
  v33 = v20;
  v34 = v21;
  v18(a1, &v23);
  return 0;
}
