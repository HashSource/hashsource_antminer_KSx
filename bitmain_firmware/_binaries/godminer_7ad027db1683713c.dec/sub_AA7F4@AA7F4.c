int __fastcall sub_AA7F4(int a1, int *a2, int a3)
{
  size_t *v4; // r1
  size_t v6; // r7
  void *v7; // r6
  int v8; // r6
  int v9; // r6
  _DWORD *v10; // lr
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r7
  char *v18; // r2
  int *v19; // r1
  unsigned int v20; // t1
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r12
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r0
  int v32; // r1
  int v33; // r3
  size_t v35; // r2
  int v36; // [sp+0h] [bp-80h] BYREF
  int v37; // [sp+4h] [bp-7Ch]
  int v38; // [sp+8h] [bp-78h]
  int v39; // [sp+Ch] [bp-74h]
  int v40; // [sp+10h] [bp-70h]
  int v41; // [sp+14h] [bp-6Ch]
  int v42; // [sp+18h] [bp-68h]
  int v43; // [sp+1Ch] [bp-64h]
  char v44[28]; // [sp+20h] [bp-60h] BYREF
  char v45; // [sp+3Ch] [bp-44h] BYREF
  int v46; // [sp+40h] [bp-40h] BYREF
  int v47; // [sp+44h] [bp-3Ch]
  int v48; // [sp+48h] [bp-38h]
  int v49; // [sp+4Ch] [bp-34h]
  int v50; // [sp+50h] [bp-30h]
  int v51; // [sp+54h] [bp-2Ch]
  int v52; // [sp+58h] [bp-28h]
  _DWORD v53[9]; // [sp+5Ch] [bp-24h] BYREF

  v4 = *(size_t **)(a1 + 1132);
  if ( v4 )
  {
    v6 = *v4;
    if ( a3 && *((_BYTE *)a2 + 444) )
      dbl_2D3458 = 0.0;
    v7 = v4 + 1;
    memset(v4 + 1, 0, v6);
    if ( v6 )
    {
      if ( v6 >= 8 )
        v35 = 8;
      else
        v35 = v6;
      memcpy(v7, &dbl_2D3458, v35);
      ++*(_QWORD *)&dbl_2D3458;
    }
    memcpy((void *)(a2[75] + a2[22]), v7, v6);
    sha256((char *)a2[75], a2[74], &v46);
    sha256((char *)&v46, 0x20u, &v36);
    v8 = a2[81];
    v46 = v36;
    v47 = v37;
    v48 = v38;
    v49 = v39;
    v50 = v40;
    v51 = v41;
    v52 = v42;
    v53[0] = v43;
    if ( v8 > 0 )
    {
      v9 = 0;
      do
      {
        v10 = *(_DWORD **)(a2[82] + 4 * v9++);
        v11 = v10[1];
        v12 = v10[2];
        v13 = v10[3];
        v53[1] = *v10;
        v53[2] = v11;
        v53[3] = v12;
        v53[4] = v13;
        v14 = v10[5];
        v15 = v10[6];
        v16 = v10[7];
        v53[5] = v10[4];
        v53[6] = v14;
        v53[7] = v15;
        v53[8] = v16;
        sha256((char *)&v46, 0x40u, v44);
        sha256(v44, 0x20u, &v36);
        v17 = a2[81];
        v46 = v36;
        v47 = v37;
        v48 = v38;
        v49 = v39;
        v50 = v40;
        v51 = v41;
        v52 = v42;
        v53[0] = v43;
      }
      while ( v17 > v9 );
    }
    v18 = &v45;
    v19 = &v36 - 1;
    do
    {
      v20 = *((_DWORD *)v18 + 1);
      v18 += 4;
      v19[1] = bswap32(v20);
      ++v19;
    }
    while ( v53 != (_DWORD *)v18 );
    memcpy((void *)(a1 + 8), a2 + 116, 0x50u);
    v21 = v37;
    v22 = v38;
    v23 = v39;
    *(_DWORD *)(a1 + 44) = v36;
    *(_DWORD *)(a1 + 48) = v21;
    *(_DWORD *)(a1 + 52) = v22;
    *(_DWORD *)(a1 + 56) = v23;
    v24 = v41;
    v25 = v42;
    v26 = v43;
    v27 = 0;
    *(_DWORD *)(a1 + 60) = v40;
    *(_DWORD *)(a1 + 64) = v24;
    *(_DWORD *)(a1 + 68) = v25;
    *(_DWORD *)(a1 + 72) = v26;
    v28 = a2[373];
    v29 = a2[374];
    v30 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v28;
    *(_DWORD *)(a1 + 1040) = v29;
    *(_DWORD *)(a1 + 1044) = v30;
    v31 = a2[376];
    v32 = a2[377];
    v33 = a2[379];
    *(_DWORD *)(a1 + 1056) = a2[378];
    *(_DWORD *)(a1 + 1048) = v31;
    *(_DWORD *)(a1 + 1052) = v32;
    *(_DWORD *)(a1 + 1060) = v33;
    *(_DWORD *)(a1 + 1100) = a2[89];
    *(_QWORD *)a1 = *a2;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
  return v27;
}
