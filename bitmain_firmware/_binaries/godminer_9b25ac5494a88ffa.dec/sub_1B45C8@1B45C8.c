unsigned int __fastcall sub_1B45C8(_DWORD *a1)
{
  int v1; // r4
  unsigned int v2; // r5
  int v3; // r10
  unsigned int v4; // r7
  int v5; // r6
  int v6; // r11
  unsigned int v7; // t1
  int *v8; // r0
  int v9; // r3
  int *v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r2
  int v16; // r3
  __int16 v17; // r7
  int v19; // [sp+18h] [bp-3Ch]
  unsigned int v20; // [sp+24h] [bp-30h]
  unsigned int v21; // [sp+28h] [bp-2Ch]
  unsigned int v22; // [sp+30h] [bp-24h]
  unsigned __int16 *v23; // [sp+34h] [bp-20h]
  int v24; // [sp+38h] [bp-1Ch]
  int v25; // [sp+3Ch] [bp-18h]
  int v26; // [sp+40h] [bp-14h]
  int v27; // [sp+48h] [bp-Ch]
  int v28; // [sp+4Ch] [bp-8h]
  int v29; // [sp+50h] [bp-4h]

  v1 = a1[1];
  v23 = (unsigned __int16 *)a1[3];
  v2 = *(unsigned __int16 *)(v1 + 270);
  v3 = v23[135];
  v4 = v2 + 1 + v3;
  if ( v4 >= 0xC )
    core::panicking::panic((int)aAssertionFaile_11, 42, (int)&off_2DD4E8);
  v6 = a1[6];
  v5 = a1[5];
  v22 = a1[4];
  v7 = *(unsigned __int16 *)(v5 + 270);
  *(_WORD *)(v1 + 270) = v4;
  v8 = (int *)(v5 + 4 + 12 * v6);
  v21 = v7;
  v25 = v8[1];
  v19 = 12 * v6 + 12;
  v20 = ~v6 + v7;
  v26 = v8[2];
  v24 = *v8;
  memmove(v8, (const void *)(v5 + 4 + v19), 12 * v20);
  *(_DWORD *)(v1 + 4 + 12 * v2) = v24;
  v9 = v1 + 4 + 12 * v2;
  *(_DWORD *)(v9 + 4) = v25;
  *(_DWORD *)(v9 + 8) = v26;
  memcpy((void *)(v1 + 4 + 12 * (v2 + 1)), v23 + 2, 12 * v3);
  v10 = (int *)(v5 + 136 + 12 * v6);
  v27 = *v10;
  v28 = v10[1];
  v29 = v10[2];
  memmove(v10, (const void *)(v5 + 136 + v19), 12 * v20);
  *(_DWORD *)(v1 + 136 + 12 * v2) = v27;
  v11 = v1 + 136 + 12 * v2;
  *(_DWORD *)(v11 + 4) = v28;
  *(_DWORD *)(v11 + 8) = v29;
  memcpy((void *)(v1 + 136 + 12 * (v2 + 1)), v23 + 68, 12 * v3);
  memmove((void *)(v5 + 272 + 4 * (v6 + 1)), (const void *)(v5 + 272 + 4 * v6 + 8), 4 * v20);
  if ( v6 + 1 < v7 )
  {
    do
    {
      v12 = v5 + 4 * v6++;
      v13 = *(_DWORD *)(v12 + 276);
      *(_DWORD *)v13 = v5;
      *(_WORD *)(v13 + 268) = v6;
    }
    while ( v21 - 1 != v6 );
  }
  --*(_WORD *)(v5 + 270);
  if ( v22 >= 2 )
  {
    memcpy((void *)(v1 + 4 * (v2 + 1) + 272), v23 + 136, 4 * v3 + 4);
    if ( v2 + 1 + v3 > v2 )
    {
      v14 = v2 + 69;
      v15 = v3 + 1;
      do
      {
        v16 = *(_DWORD *)(v1 + 4 * v14);
        v17 = v14++ - 68;
        --v15;
        *(_DWORD *)v16 = v1;
        *(_WORD *)(v16 + 268) = v17;
      }
      while ( v15 );
    }
  }
  _rust_dealloc(v23);
  return v22;
}
