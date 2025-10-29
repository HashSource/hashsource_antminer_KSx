unsigned int __fastcall sub_1B5C00(_DWORD *a1, int *a2, int a3, unsigned int a4)
{
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r9
  unsigned int v7; // r7
  unsigned int v8; // r10
  unsigned int v9; // r2
  int v10; // r11
  int v11; // r8
  unsigned int v12; // r7
  int *v13; // r0
  int v14; // r3
  int *v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r2
  int v21; // r3
  __int16 v22; // r7
  unsigned int result; // r0
  unsigned int v24; // [sp+1Ch] [bp-48h]
  unsigned int v25; // [sp+28h] [bp-3Ch]
  int v26; // [sp+2Ch] [bp-38h]
  unsigned int v27; // [sp+30h] [bp-34h]
  int v28; // [sp+34h] [bp-30h]
  int v32; // [sp+48h] [bp-1Ch]
  int v33; // [sp+4Ch] [bp-18h]
  int v34; // [sp+50h] [bp-14h]
  int v35; // [sp+58h] [bp-Ch]
  int v36; // [sp+5Ch] [bp-8h]
  int v37; // [sp+60h] [bp-4h]

  v4 = a2[1];
  v5 = *(unsigned __int16 *)(a2[3] + 270);
  v6 = *(unsigned __int16 *)(v4 + 270);
  v7 = v5;
  if ( !a3 )
    v7 = *(unsigned __int16 *)(v4 + 270);
  if ( v7 < a4 )
    core::panicking::panic((int)aAssertionFaile_10, 145, (int)&off_2DF4D8);
  v8 = v6 + 1;
  v9 = v6 + 1 + v5;
  v28 = a2[3];
  if ( v9 >= 0xC )
    core::panicking::panic((int)aAssertionFaile_11, 42, (int)&off_2DF4E8);
  v10 = a2[5];
  v11 = a2[6];
  v26 = *a2;
  v25 = a2[4];
  v12 = *(unsigned __int16 *)(v10 + 270);
  *(_WORD *)(v4 + 270) = v9;
  v13 = (int *)(v10 + 4 + 12 * v11);
  v33 = v13[1];
  v24 = ~v11 + v12;
  v34 = v13[2];
  v32 = *v13;
  memmove(v13, (const void *)(v10 + 4 + 12 * v11 + 12), 12 * v24);
  *(_DWORD *)(v4 + 4 + 12 * v6) = v32;
  v14 = v4 + 4 + 12 * v6;
  *(_DWORD *)(v14 + 4) = v33;
  *(_DWORD *)(v14 + 8) = v34;
  v27 = v6 + 1;
  memcpy((void *)(v4 + 4 + 12 * v8), (const void *)(v28 + 4), 12 * v5);
  v15 = (int *)(v10 + 136 + 12 * v11);
  v35 = *v15;
  v36 = v15[1];
  v37 = v15[2];
  memmove(v15, (const void *)(v10 + 136 + 12 * v11 + 12), 12 * v24);
  *(_DWORD *)(v4 + 136 + 12 * v6) = v35;
  v16 = v4 + 136 + 12 * v6;
  *(_DWORD *)(v16 + 4) = v36;
  *(_DWORD *)(v16 + 8) = v37;
  memcpy((void *)(v4 + 136 + 12 * v8), (const void *)(v28 + 136), 12 * v5);
  memmove((void *)(v10 + 272 + 4 * (v11 + 1)), (const void *)(v10 + 272 + 4 * v11 + 8), 4 * v24);
  if ( v11 + 1 < v12 )
  {
    do
    {
      v17 = v10 + 4 * v11++;
      v18 = *(_DWORD *)(v17 + 276);
      *(_DWORD *)v18 = v10;
      *(_WORD *)(v18 + 268) = v11;
    }
    while ( v12 - 1 != v11 );
  }
  --*(_WORD *)(v10 + 270);
  if ( v25 >= 2 )
  {
    memcpy((void *)(v4 + 4 * v27 + 272), (const void *)(v28 + 272), 4 * v5 + 4);
    if ( v6 + 1 + v5 > v6 )
    {
      v19 = v6 + 69;
      v20 = v5 + 1;
      do
      {
        v21 = *(_DWORD *)(v4 + 4 * v19);
        v22 = v19++ - 68;
        --v20;
        *(_DWORD *)v21 = v4;
        *(_WORD *)(v21 + 268) = v22;
      }
      while ( v20 );
    }
  }
  _rust_dealloc((void *)v28);
  result = a4;
  if ( a3 )
    result = a4 + v27;
  a1[2] = result;
  *a1 = v26;
  a1[1] = v4;
  return result;
}
