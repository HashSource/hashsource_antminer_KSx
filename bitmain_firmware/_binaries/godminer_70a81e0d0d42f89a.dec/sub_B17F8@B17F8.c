int __fastcall sub_B17F8(int a1, __int64 *a2)
{
  int *v4; // r2
  unsigned __int8 *v5; // r7
  int *v6; // lr
  int *v7; // r8
  char *v8; // r5
  int v9; // r1
  int v10; // r0
  int v11; // r1
  char *v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r3
  int v19; // r1
  int v20; // r2
  __int64 *v21; // r4
  unsigned int v22; // r0
  void (__fastcall *v23)(int, __int64 *); // r3
  __int64 v25; // [sp+0h] [bp-C8h] BYREF
  int v26; // [sp+8h] [bp-C0h]
  int v27; // [sp+Ch] [bp-BCh]
  char v28; // [sp+10h] [bp-B8h] BYREF
  int v29; // [sp+40h] [bp-88h]
  int v30; // [sp+44h] [bp-84h]
  int v31; // [sp+48h] [bp-80h]
  int v32; // [sp+4Ch] [bp-7Ch]
  int v33; // [sp+50h] [bp-78h]
  int v34; // [sp+54h] [bp-74h]
  int v35; // [sp+58h] [bp-70h]
  int v36; // [sp+5Ch] [bp-6Ch]
  double v37; // [sp+C0h] [bp-8h]

  v4 = (int *)*((_DWORD *)a2 + 281);
  v5 = (unsigned __int8 *)*((_DWORD *)a2 + 283);
  v6 = (int *)(a2 + 1);
  v7 = (int *)(a2 + 7);
  v8 = &v28;
  v25 = *a2;
  v9 = v4[1];
  v26 = *v4;
  v27 = v9;
  do
  {
    v10 = *v6;
    v6 += 4;
    v11 = *(v6 - 3);
    v12 = v8;
    v13 = *(v6 - 2);
    v8 += 16;
    v14 = *(v6 - 1);
    *(_DWORD *)v12 = v10;
    *((_DWORD *)v12 + 1) = v11;
    *((_DWORD *)v12 + 2) = v13;
    *((_DWORD *)v12 + 3) = v14;
  }
  while ( v6 != v7 );
  v15 = *((_DWORD *)a2 + 259);
  v16 = *((_DWORD *)a2 + 260);
  v17 = *((_DWORD *)a2 + 261);
  v29 = *((_DWORD *)a2 + 258);
  v30 = v15;
  v31 = v16;
  v32 = v17;
  v18 = *((_DWORD *)a2 + 265);
  v19 = *((_DWORD *)a2 + 263);
  v20 = *((_DWORD *)a2 + 264);
  v21 = a2 + 129;
  v33 = *((_DWORD *)a2 + 262);
  v34 = v19;
  v35 = v20;
  v36 = v18;
  memcpy((char *)&v25 + 64 - *v5, v5 + 9, *v5 - 5);
  v22 = target_to_diff_ks5(v21);
  *(_DWORD *)(a1 + 492) = 0;
  v23 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v37 = (double)v22;
  v23(a1, &v25);
  return 0;
}
