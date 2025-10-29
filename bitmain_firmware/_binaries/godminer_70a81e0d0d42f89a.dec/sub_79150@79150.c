int __fastcall sub_79150(int a1, unsigned int a2)
{
  char v3; // r2
  unsigned int v5; // r0
  int v6; // r6
  unsigned int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r9
  int *v11; // lr
  _DWORD *v12; // r6
  unsigned int v13; // r12
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  int v18; // r9
  int *v19; // r12
  _DWORD *v20; // r6
  unsigned int v21; // r0
  unsigned int v22; // r1
  int *v23; // r12
  _DWORD *v24; // r4
  unsigned int v26; // [sp+4h] [bp-28h]
  int v27; // [sp+8h] [bp-24h]
  unsigned int v28; // [sp+8h] [bp-24h]
  int v29; // [sp+10h] [bp-1Ch]
  int v30; // [sp+10h] [bp-1Ch]
  int v31; // [sp+10h] [bp-1Ch]
  int v32; // [sp+14h] [bp-18h]
  int v33; // [sp+14h] [bp-18h]
  int v34; // [sp+14h] [bp-18h]
  int v35; // [sp+18h] [bp-14h]
  int v36; // [sp+18h] [bp-14h]
  int v37; // [sp+18h] [bp-14h]
  int v38; // [sp+1Ch] [bp-10h]
  int v39; // [sp+1Ch] [bp-10h]
  int v40; // [sp+1Ch] [bp-10h]
  int v41; // [sp+20h] [bp-Ch]
  int v42; // [sp+20h] [bp-Ch]
  int v43; // [sp+20h] [bp-Ch]
  int v44; // [sp+24h] [bp-8h]
  int v45; // [sp+24h] [bp-8h]
  int v46; // [sp+24h] [bp-8h]

  v3 = __clz(a2 - 1);
  v5 = a2 ^ (a2 << 13) ^ ((a2 ^ (a2 << 13)) >> 17);
  v6 = v5 ^ (32 * v5);
  v7 = v6 & (0xFFFFFFFF >> v3);
  v8 = v7 - a2;
  if ( v7 < a2 )
    v8 = v6 & (0xFFFFFFFF >> v3);
  v9 = ((a2 >> 1) & 0xFFFFFFFE) - 1;
  if ( v9 >= a2 )
    goto LABEL_16;
  if ( v8 >= a2 )
    goto LABEL_17;
  v27 = v6;
  v10 = 0xFFFFFFFF >> v3;
  v11 = (int *)(a1 + 24 * v9);
  v29 = *v11;
  v32 = v11[1];
  v35 = v11[2];
  v38 = v11[3];
  v41 = v11[4];
  v44 = v11[5];
  v12 = (_DWORD *)(a1 + 24 * v8);
  memmove(v11, v12, 0x18u);
  v13 = (a2 >> 1) & 0xFFFFFFFE;
  *v12 = v29;
  v12[1] = v32;
  v12[2] = v35;
  v12[3] = v38;
  v12[4] = v41;
  v12[5] = v44;
  v14 = v27;
  v28 = v10;
  v15 = v14 ^ (v14 << 13) ^ ((v14 ^ (unsigned int)(v14 << 13)) >> 17);
  v16 = v15 ^ (32 * v15);
  v17 = v16 & v10;
  v18 = v16;
  v8 = v17 - a2;
  if ( v17 < a2 )
    v8 = v17;
  if ( v13 >= a2 )
  {
    v9 = (a2 >> 1) & 0xFFFFFFFE;
    goto LABEL_16;
  }
  if ( v8 >= a2 )
    goto LABEL_17;
  v26 = a2 >> 1;
  v19 = (int *)(a1 + 24 * v13);
  v30 = *v19;
  v33 = v19[1];
  v36 = v19[2];
  v39 = v19[3];
  v42 = v19[4];
  v45 = v19[5];
  v20 = (_DWORD *)(a1 + 24 * v8);
  memmove(v19, v20, 0x18u);
  v21 = v18 ^ (v18 << 13) ^ ((v18 ^ (unsigned int)(v18 << 13)) >> 17);
  *v20 = v30;
  v20[1] = v33;
  v20[2] = v36;
  v20[3] = v39;
  v20[4] = v42;
  v20[5] = v45;
  v22 = (v21 ^ (32 * v21)) & v28;
  v8 = v22 - a2;
  if ( v22 < a2 )
    v8 = v22;
  v9 = v26 | 1;
  if ( (v26 | 1) >= a2 )
  {
LABEL_16:
    v8 = v9;
    goto LABEL_17;
  }
  if ( v8 >= a2 )
LABEL_17:
    core::panicking::panic_bounds_check(v8, a2, &off_2E0238);
  v23 = (int *)(a1 + 24 * v9);
  v31 = *v23;
  v34 = v23[1];
  v37 = v23[2];
  v40 = v23[3];
  v43 = v23[4];
  v46 = v23[5];
  v24 = (_DWORD *)(a1 + 24 * v8);
  memmove(v23, v24, 0x18u);
  *v24 = v31;
  v24[1] = v34;
  v24[2] = v37;
  v24[3] = v40;
  v24[4] = v43;
  v24[5] = v46;
  return v31;
}
