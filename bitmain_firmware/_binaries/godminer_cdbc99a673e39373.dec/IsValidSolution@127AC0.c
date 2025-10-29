int __fastcall IsValidSolution(void *a1, int a2)
{
  char *v4; // r6
  _DWORD *v5; // r5
  unsigned int v6; // t1
  int v7; // r4
  int v8; // r0
  int v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  void *v17; // r0
  int v18; // r8
  size_t v19; // r9
  int v20; // r10
  int v21; // r5
  int v22; // r6
  unsigned int v23; // r7
  unsigned __int8 *v24; // r2
  unsigned __int8 *v25; // r3
  int v26; // r0
  int v27; // t1
  int v28; // t1
  const void *v29; // r11
  int v30; // r12
  _BYTE *v31; // r0
  char *v32; // r3
  char v33; // r2
  char v34; // t1
  char v35; // t1
  int v36; // r4
  char *v37; // r0
  size_t v38; // r4
  _BYTE *v39; // r3
  int v41; // r4
  char *ptr; // [sp+8h] [bp-88Ch]
  char *v44; // [sp+10h] [bp-884h]
  size_t n; // [sp+14h] [bp-880h]
  unsigned int v46; // [sp+1Ch] [bp-878h]
  int v47; // [sp+20h] [bp-874h]
  _BYTE *dest; // [sp+2Ch] [bp-868h]
  size_t v49; // [sp+30h] [bp-864h]
  _DWORD v50[7]; // [sp+3Ch] [bp-858h] BYREF
  __int16 v51; // [sp+58h] [bp-83Ch]
  _WORD v52[24]; // [sp+5Ch] [bp-838h] BYREF
  char v53; // [sp+8Ch] [bp-808h] BYREF
  _BYTE s[2052]; // [sp+90h] [bp-804h] BYREF

  v4 = &v53;
  dest = malloc(0x4400u);
  v5 = dest + 30;
  ptr = (char *)malloc(0x4400u);
  memset(s, 0, 0x800u);
  expandArray(a2, 1344, (int)s, 2048, 0x15u, 1u);
  do
  {
    v6 = *((_DWORD *)v4 + 1);
    v4 += 4;
    v7 = bswap32(v6);
    sub_12704C(a1, v7 / 2, v52, 0x32u);
    v8 = v7 & 1;
    if ( v7 < 0 )
      v8 = -v8;
    expandArray((int)v52 + 25 * v8, 25, (int)v50, 30, 0x14u, 0);
    v9 = *(_DWORD *)v4;
    v10 = v50[1];
    v11 = v50[2];
    v12 = v50[3];
    *(_DWORD *)((char *)v5 - 30) = v50[0];
    *(_DWORD *)((char *)v5 - 26) = v10;
    *(_DWORD *)((char *)v5 - 22) = v11;
    v13 = v50[4];
    v14 = v50[5];
    v15 = v50[6];
    *(_DWORD *)((char *)v5 - 18) = v12;
    LOWORD(v12) = v51;
    *(_DWORD *)((char *)v5 - 14) = v13;
    v16 = (int)v5 - 30;
    *(_DWORD *)((char *)v5 - 10) = v14;
    *((_WORD *)v5 - 1) = v12;
    *(_DWORD *)((char *)v5 - 6) = v15;
    *v5 = v9;
    v5 = (_DWORD *)((char *)v5 + 34);
    v17 = abin2hex(v16, 34);
    free(v17);
  }
  while ( v4 != &s[2044] );
  v18 = 30;
  v19 = 4;
  v20 = 512;
  n = 27;
  while ( 1 )
  {
    v46 = v20;
    if ( v20 )
      break;
    v19 *= 2;
    v49 = n;
LABEL_18:
    v18 -= 3;
    memcpy(dest, ptr, 0x4400u);
    memset(ptr, 0, 0x4400u);
    n -= 3;
    if ( v18 == 3 )
    {
      if ( *dest )
      {
LABEL_25:
        v41 = 2;
      }
      else
      {
        v39 = dest;
        while ( &dest[v49 - 1] != v39 )
        {
          if ( *++v39 )
            goto LABEL_25;
        }
        v41 = 0;
      }
      goto LABEL_26;
    }
  }
  v21 = (int)dest;
  v20 = 0;
  v22 = (int)&dest[v18 + v19];
  v47 = 2 * (v18 + v19);
  v49 = n;
  while ( 1 )
  {
    v23 = 2 * v20;
    v24 = (unsigned __int8 *)v22;
    v25 = (unsigned __int8 *)v21;
    do
    {
      v27 = *v25++;
      v26 = v27;
      v28 = *v24++;
      if ( v26 != v28 )
      {
        puts("Invalid solution: invalid collision length between StepRows");
        goto LABEL_25;
      }
    }
    while ( (unsigned __int8 *)(v21 + 3) != v25 );
    v29 = (const void *)(v18 + v21);
    if ( memcmp((const void *)(v18 + v22), (const void *)(v18 + v21), v19) < 0 )
    {
      puts("Invalid solution: Index tree incorrectly ordered");
      v41 = 2;
      goto LABEL_26;
    }
    if ( !DistinctIndices(v21, v22, v18, v19) )
      break;
    v30 = v21 - 1;
    memset(v52, 0, 30);
    v31 = v52;
    v32 = (char *)v22;
    do
    {
      v34 = *v32++;
      v33 = v34;
      v35 = *(_BYTE *)++v30;
      *v31++ = v33 ^ v35;
    }
    while ( v32 != (char *)(v18 + v22) );
    v44 = v32;
    ++v20;
    v36 = (n + 2 * v19) * (v23 >> 1);
    v21 += v47;
    v22 += v47;
    v37 = &ptr[v36];
    v38 = n + v36;
    memcpy(v37, (char *)&v52[1] + 1, n);
    memcpy(&ptr[v38], v29, v19);
    memcpy(&ptr[v38 + v19], v44, v19);
    if ( v46 <= v23 + 2 )
    {
      v19 *= 2;
      goto LABEL_18;
    }
  }
  puts("Invalid solution: duplicate indices");
  v41 = 1;
LABEL_26:
  free(dest);
  free(ptr);
  return v41;
}
