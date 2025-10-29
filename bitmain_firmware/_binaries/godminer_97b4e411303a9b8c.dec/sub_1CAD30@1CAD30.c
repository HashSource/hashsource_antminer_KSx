int __fastcall sub_1CAD30(unsigned int **a1, int *a2)
{
  int v2; // r9
  int v3; // r11
  unsigned int *v6; // r4
  int v7; // r10
  unsigned int v8; // r0
  unsigned int v9; // r2
  int v10; // r5
  unsigned int v11; // r6
  int v12; // r1
  unsigned int **v13; // r10
  int *v14; // r2
  unsigned int v15; // r5
  int v16; // r6
  int v17; // r5
  int v18; // r6
  int v19; // r7
  unsigned int *v20; // r0
  unsigned int v21; // r1
  int v23; // [sp+8h] [bp-1Ch] BYREF
  unsigned int v24; // [sp+Ch] [bp-18h]
  int v25; // [sp+10h] [bp-14h]
  unsigned int v26; // [sp+14h] [bp-10h]
  int v27; // [sp+18h] [bp-Ch]
  int v28; // [sp+1Ch] [bp-8h]
  int v29; // [sp+20h] [bp-4h]

  v2 = *a2;
  v3 = a2[1];
  v6 = *a1;
  if ( *a2 )
  {
    v7 = a2[2];
    v8 = a2[1];
    v9 = a2[3];
  }
  else
  {
    v23 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v23);
    v10 = v23;
    v23 = 0;
    Unwind_VRS_Get(v3, 0, 13, 0, &v23);
    v7 = v23;
    v23 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v23);
    v8 = v10 & 0xFFFFFFFE;
    v9 = v23 & 0xFFFFFFFE;
  }
  v11 = *v6;
  v12 = v6[2];
  v24 = v8;
  v29 = 0;
  v26 = v9;
  v27 = 0;
  v28 = 4;
  v25 = v7;
  v23 = 1;
  if ( v12 == v11 )
  {
    sub_1B6D48(v6, v12);
    v12 = v6[2];
  }
  v13 = a1;
  v14 = (int *)(v6[1] + 28 * v12);
  v15 = v24;
  v16 = v25;
  *v14 = v23;
  v14[1] = v15;
  v14[2] = v16;
  v14 += 3;
  v17 = v27;
  v18 = v28;
  v19 = v29;
  *v14 = v26;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v6[2] = v12 + 1;
  if ( v2 )
  {
    if ( *v13[1] != a2[3] )
      return 1;
  }
  else
  {
    v23 = 0;
    Unwind_VRS_Get(v3, 0, 15, 0, &v23);
    if ( *v13[1] != (v23 & 0xFFFFFFFE) )
      return 1;
  }
  v20 = v13[2];
  if ( *v20 != 1 )
  {
    v21 = v6[2];
    *v20 = 1;
    v20[1] = v21;
  }
  return 1;
}
