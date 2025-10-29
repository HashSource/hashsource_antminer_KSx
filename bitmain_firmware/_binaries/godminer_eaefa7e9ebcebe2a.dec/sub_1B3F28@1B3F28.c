int __fastcall sub_1B3F28(_DWORD *a1, unsigned int a2)
{
  unsigned __int16 *v2; // r5
  int v4; // r7
  unsigned int v5; // r10
  unsigned int v6; // r11
  int v7; // r2
  int v8; // r10
  int v9; // r11
  int *v10; // r7
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r7
  int v16; // r6
  int v17; // r8
  int v18; // r9
  int result; // r0
  bool v20; // zf
  int v21; // r1
  int v22; // r2
  int v23; // [sp+0h] [bp-54h]
  int v24; // [sp+4h] [bp-50h]
  unsigned int v25; // [sp+8h] [bp-4Ch]
  int v26; // [sp+Ch] [bp-48h]
  int v27; // [sp+10h] [bp-44h]
  int v28; // [sp+14h] [bp-40h]
  int v30; // [sp+1Ch] [bp-38h]
  int v31; // [sp+30h] [bp-24h]
  int v32; // [sp+34h] [bp-20h]
  int v33; // [sp+38h] [bp-1Ch]
  int v34; // [sp+4Ch] [bp-8h]

  v2 = (unsigned __int16 *)a1[3];
  v4 = v2[135];
  if ( v4 + a2 > 0xB )
    core::panicking::panic((int)aAssertionFaile_7, 51, (int)&off_2DE478);
  v30 = a1[1];
  v5 = *(unsigned __int16 *)(v30 + 270);
  if ( v5 < a2 )
    core::panicking::panic((int)aAssertionFaile_8, 39, (int)&off_2DE488);
  v24 = v2[135];
  v6 = v5 - a2;
  *(_WORD *)(v30 + 270) = v5 - a2;
  v2[135] = v4 + a2;
  v26 = v4 + a2;
  memmove(&v2[6 * a2 + 2], v2 + 2, 12 * v4);
  memmove(&v2[6 * a2 + 68], v2 + 68, 12 * v4);
  v25 = a2;
  v23 = v5 - a2 + 1;
  v28 = 3 * (a2 - 1);
  memcpy(v2 + 2, (const void *)(v30 + 4 + 12 * v23), 12 * (a2 - 1));
  memcpy(v2 + 68, (const void *)(v30 + 136 + 12 * v23), 12 * (a2 - 1));
  v7 = 3 * (v5 - a2);
  v8 = v30 + 4 + 12 * (v5 - a2);
  v9 = *(_DWORD *)(v30 + 4 + 12 * v6);
  v10 = (int *)(v30 + 136 + 4 * v7);
  v27 = *v10;
  v11 = (_DWORD *)(a1[5] + 12 * a1[6]);
  v34 = v10[1];
  v33 = v11[3];
  v31 = v11[1];
  v32 = v11[2];
  v12 = v11[34];
  v13 = v11[35];
  v14 = v11[36];
  v15 = v10[2];
  v16 = *(_DWORD *)(v8 + 4);
  v11[3] = *(_DWORD *)(v8 + 8);
  v11[2] = v16;
  v11[1] = v9;
  v11 += 34;
  *v11 = v27;
  v11[1] = v34;
  v11[2] = v15;
  *(_DWORD *)&v2[2 * v28 + 2] = v31;
  v17 = (int)&v2[2 * v28 + 2];
  *(_DWORD *)(v17 + 4) = v32;
  *(_DWORD *)(v17 + 8) = v33;
  *(_DWORD *)&v2[2 * v28 + 68] = v12;
  v18 = (int)&v2[2 * v28 + 68];
  result = a1[2];
  v20 = *a1 == 0;
  *(_DWORD *)(v18 + 4) = v13;
  *(_DWORD *)(v18 + 8) = v14;
  if ( v20 )
  {
    if ( !result )
      return result;
LABEL_12:
    core::panicking::panic((int)aInternalErrorE_0, 40, (int)&off_2DE498);
  }
  if ( !result )
    goto LABEL_12;
  memmove(&v2[2 * v25 + 136], v2 + 136, 4 * v24 + 4);
  memcpy(v2 + 136, (const void *)(v30 + 4 * v23 + 272), 4 * v25);
  v21 = 0;
  result = v26 + 1;
  do
  {
    v22 = *(_DWORD *)&v2[2 * v21 + 136];
    *(_DWORD *)v22 = v2;
    *(_WORD *)(v22 + 268) = v21++;
  }
  while ( result != v21 );
  return result;
}
