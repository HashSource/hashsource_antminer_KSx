int __fastcall sub_B02C4(int a1, __int64 *a2)
{
  int *v4; // r2
  int v5; // r8
  int *v6; // lr
  int *v7; // r7
  _BYTE *v8; // r5
  int v9; // r1
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  _DWORD *v17; // r12
  int v18; // r2
  int v19; // r3
  int v20; // r2
  int v21; // r1
  int v22; // r3
  unsigned int v23; // r0
  void (__fastcall *v24)(int, __int64 *); // r3
  __int64 v26; // [sp+0h] [bp-C8h] BYREF
  int v27; // [sp+8h] [bp-C0h]
  int v28; // [sp+Ch] [bp-BCh]
  _BYTE v29[48]; // [sp+10h] [bp-B8h] BYREF
  int v30; // [sp+40h] [bp-88h]
  int v31; // [sp+44h] [bp-84h]
  int v32; // [sp+48h] [bp-80h]
  int v33; // [sp+4Ch] [bp-7Ch]
  int v34; // [sp+50h] [bp-78h]
  int v35; // [sp+54h] [bp-74h]
  int v36; // [sp+58h] [bp-70h]
  int v37; // [sp+5Ch] [bp-6Ch]
  double v38; // [sp+C0h] [bp-8h]

  v4 = (int *)*((_DWORD *)a2 + 281);
  v5 = *((_DWORD *)a2 + 283);
  v6 = (int *)(a2 + 1);
  v7 = (int *)(a2 + 7);
  v8 = v29;
  v26 = *a2;
  v9 = v4[1];
  v27 = *v4;
  v28 = v9;
  do
  {
    v10 = *v6;
    v6 += 4;
    v11 = *(v6 - 3);
    v12 = v8;
    v13 = *(v6 - 2);
    v8 += 16;
    v14 = *(v6 - 1);
    *v12 = v10;
    v12[1] = v11;
    v12[2] = v13;
    v12[3] = v14;
  }
  while ( v6 != v7 );
  v15 = *((_DWORD *)a2 + 258);
  v16 = *((_DWORD *)a2 + 259);
  v17 = a2 + 128;
  v18 = v17[4];
  v19 = v17[5];
  v30 = v15;
  v31 = v16;
  v32 = v18;
  v33 = v19;
  v20 = v17[8];
  v21 = v17[7];
  v22 = v17[9];
  v34 = v17[6];
  v35 = v21;
  v36 = v20;
  v37 = v22;
  v29[42] = *(_BYTE *)(v5 + 9);
  v23 = target_to_diff_kas(v17 + 2);
  *(_DWORD *)(a1 + 492) = 0;
  v24 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v38 = (double)v23;
  v24(a1, &v26);
  return 0;
}
