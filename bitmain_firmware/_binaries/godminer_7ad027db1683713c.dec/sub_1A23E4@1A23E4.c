unsigned int __fastcall sub_1A23E4(_DWORD *a1, unsigned int a2)
{
  int v2; // r5
  unsigned int v3; // r4
  unsigned int v4; // r10
  unsigned __int16 *v5; // r7
  unsigned int v6; // r1
  unsigned int v7; // r1
  int v8; // r3
  _DWORD *v9; // r2
  int v10; // r1
  unsigned __int16 *v11; // r3
  int v12; // r11
  unsigned __int16 *v13; // r6
  int v14; // r8
  int v15; // r0
  int v16; // r6
  int v17; // r12
  int v18; // lr
  int v19; // r9
  int v20; // r3
  int v21; // r3
  unsigned int v22; // r1
  int v23; // r6
  unsigned int result; // r0
  int v25; // r1
  __int16 v26; // r2
  int v27; // r1
  int v28; // r2
  const char *v29; // r0
  char **v30; // r2
  char *src; // [sp+8h] [bp-4Ch]
  char *v32; // [sp+Ch] [bp-48h]
  unsigned int v34; // [sp+14h] [bp-40h]
  unsigned int v35; // [sp+1Ch] [bp-38h]
  int v36; // [sp+3Ch] [bp-18h]
  int v37; // [sp+40h] [bp-14h]
  int v38; // [sp+44h] [bp-10h]
  int v39; // [sp+50h] [bp-4h]

  v2 = a1[1];
  v3 = a2;
  v4 = *(unsigned __int16 *)(v2 + 270) + a2;
  if ( v4 > 0xB )
    core::panicking::panic((int)aAssertionFaile_9, 50, (int)&off_2C94A8);
  v5 = (unsigned __int16 *)a1[3];
  v35 = *(unsigned __int16 *)(v2 + 270);
  v6 = v5[135];
  if ( v6 < v3 )
  {
    v29 = (const char *)&unk_28FA75;
    v30 = &off_2C94B8;
    goto LABEL_19;
  }
  *(_WORD *)(v2 + 270) = v4;
  v7 = v6 - v3;
  v8 = a1[6];
  v5[135] = v7;
  v34 = v7;
  v9 = (_DWORD *)(a1[5] + 12 * v8);
  v32 = (char *)(v5 + 68);
  v11 = &v5[6 * v3 + 62];
  v10 = *(_DWORD *)v11;
  src = (char *)(v5 + 2);
  v12 = *((_DWORD *)v11 + 1);
  v13 = &v5[6 * v3 - 4];
  v14 = *(_DWORD *)v13;
  v39 = *((_DWORD *)v11 + 2);
  v15 = *((_DWORD *)v13 + 1);
  v16 = *((_DWORD *)v13 + 2);
  v17 = v9[2];
  v9[2] = v15;
  v36 = v9[34];
  v37 = v9[35];
  v38 = v9[36];
  v18 = v9[1];
  v19 = v9[3];
  v9[1] = v14;
  v9[3] = v16;
  v9 += 34;
  *v9 = v10;
  v9[1] = v12;
  v9[2] = v39;
  *(_DWORD *)(v2 + 4 + 12 * v35) = v18;
  v20 = v2 + 4 + 12 * v35;
  *(_DWORD *)(v20 + 4) = v17;
  *(_DWORD *)(v20 + 8) = v19;
  *(_DWORD *)(v2 + 136 + 12 * v35) = v36;
  v21 = v2 + 136 + 12 * v35;
  v22 = v35 + 1;
  *(_DWORD *)(v21 + 4) = v37;
  *(_DWORD *)(v21 + 8) = v38;
  if ( v3 - 1 != v4 - (v35 + 1) )
  {
    v29 = aAssertionFaile_6;
    v30 = &off_2C9448;
    goto LABEL_19;
  }
  v23 = 3 * v22;
  memcpy((void *)(v2 + 4 + 12 * v22), src, 12 * (v3 - 1));
  memcpy((void *)(v2 + 136 + 4 * v23), v32, 12 * (v3 - 1));
  memmove(src, &src[12 * v3], 12 * v34);
  memmove(v32, &v32[12 * v3], 12 * v34);
  result = a1[2];
  if ( !*a1 )
  {
    if ( !result )
      return result;
    goto LABEL_18;
  }
  if ( !result )
  {
LABEL_18:
    v29 = aInternalErrorE_0;
    v30 = &off_2C94C8;
LABEL_19:
    core::panicking::panic((int)v29, 40, (int)v30);
  }
  memcpy((void *)(v2 + 4 * (v35 + 1) + 272), v5 + 136, 4 * v3);
  memmove(v5 + 136, &v5[2 * v3 + 136], 4 * v34 + 4);
  result = v35;
  if ( v4 > v35 )
  {
    result = v35 + 69;
    do
    {
      v25 = *(_DWORD *)(v2 + 4 * result);
      v26 = result++ - 68;
      --v3;
      *(_DWORD *)v25 = v2;
      *(_WORD *)(v25 + 268) = v26;
    }
    while ( v3 );
  }
  if ( v34 != -1 )
  {
    result = v34 + 1;
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)&v5[2 * v27 + 136];
      *(_DWORD *)v28 = v5;
      *(_WORD *)(v28 + 268) = v27++;
    }
    while ( result != v27 );
  }
  return result;
}
