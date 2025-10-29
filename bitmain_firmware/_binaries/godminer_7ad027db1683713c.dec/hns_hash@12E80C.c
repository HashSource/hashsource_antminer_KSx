int __fastcall hns_hash(int a1, void *a2)
{
  int v4; // r2
  _BYTE *v5; // r3
  unsigned int v6; // r1
  char v7; // t1
  int v8; // r2
  _BYTE *v9; // r3
  char v10; // t1
  char *v11; // r3
  int v12; // r2
  char v13; // t1
  int v14; // r8
  int v15; // r1
  int v16; // r2
  _BYTE *v17; // lr
  __int16 v18; // r9
  int v19; // r3
  _DWORD *v20; // r12
  char v21; // r10
  char v22; // t1
  int v23; // r2
  _BYTE *v24; // r3
  char v25; // t1
  int v26; // r2
  _BYTE *v27; // r3
  char v28; // t1
  int v29; // r2
  _BYTE *v30; // r3
  char v31; // t1
  int v32; // r2
  _BYTE *v33; // r3
  char v34; // t1
  unsigned int v35; // r3
  _DWORD v37[4]; // [sp+0h] [bp-120h] BYREF
  char v38; // [sp+10h] [bp-110h]
  char v39; // [sp+11h] [bp-10Fh]
  int v40; // [sp+12h] [bp-10Eh]
  __int16 v41; // [sp+16h] [bp-10Ah]
  _DWORD v42[3]; // [sp+18h] [bp-108h] BYREF
  int v43; // [sp+24h] [bp-FCh] BYREF
  _BYTE v44[32]; // [sp+3Bh] [bp-E5h] BYREF
  _BYTE v45[32]; // [sp+5Bh] [bp-C5h] BYREF
  _BYTE v46[32]; // [sp+7Bh] [bp-A5h] BYREF
  _BYTE v47[24]; // [sp+9Bh] [bp-85h] BYREF
  char v48; // [sp+B3h] [bp-6Dh] BYREF
  _BYTE v49[32]; // [sp+D3h] [bp-4Dh] BYREF
  _BYTE v50[29]; // [sp+F3h] [bp-2Dh] BYREF
  _BYTE v51[5]; // [sp+113h] [bp-Dh] BYREF
  unsigned int v52; // [sp+118h] [bp-8h]

  hs_header_init((int)v42);
  v4 = a1 + 40;
  v5 = v50;
  v6 = bswap32(*(_DWORD *)(a1 + 4));
  v52 = bswap32(*(_DWORD *)a1);
  *(_DWORD *)&v51[1] = v6;
  do
  {
    v7 = *(_BYTE *)--v4;
    *++v5 = v7;
  }
  while ( v51 != v5 );
  v8 = a1 + 72;
  v9 = v49;
  do
  {
    v10 = *(_BYTE *)--v8;
    *++v9 = v10;
  }
  while ( v9 != v50 );
  v11 = &v48;
  v12 = a1 + 104;
  do
  {
    v13 = *(_BYTE *)--v12;
    *++v11 = v13;
  }
  while ( v49 != v11 );
  v14 = *(_DWORD *)(a1 + 120);
  v15 = *(_DWORD *)(a1 + 108);
  v16 = *(_DWORD *)(a1 + 112);
  v17 = v47;
  v18 = *(_WORD *)(a1 + 124);
  v19 = *(_DWORD *)(a1 + 116);
  v20 = v42;
  v21 = *(_BYTE *)(a1 + 250);
  v37[0] = *(_DWORD *)(a1 + 104);
  v37[1] = v15;
  v37[2] = v16;
  v37[3] = v19;
  LOBYTE(v19) = *(_BYTE *)(a1 + 251);
  v41 = v18;
  v40 = v14;
  v38 = v21;
  v39 = v19;
  do
  {
    v22 = *((_BYTE *)v20 - 1);
    v20 = (_DWORD *)((char *)v20 - 1);
    *++v17 = v22;
  }
  while ( v37 != v20 );
  v23 = a1 + 158;
  v24 = v46;
  do
  {
    v25 = *(_BYTE *)--v23;
    *++v24 = v25;
  }
  while ( v47 != v24 );
  v26 = a1 + 190;
  v27 = v45;
  do
  {
    v28 = *(_BYTE *)--v26;
    *++v27 = v28;
  }
  while ( v27 != v46 );
  v29 = a1 + 222;
  v30 = v44;
  do
  {
    v31 = *(_BYTE *)--v29;
    *++v30 = v31;
  }
  while ( v30 != v45 );
  v32 = a1 + 242;
  v33 = (char *)&v43 + 3;
  do
  {
    v34 = *(_BYTE *)--v32;
    *++v33 = v34;
  }
  while ( v44 != v33 );
  v35 = bswap32(*(_DWORD *)(a1 + 252));
  v42[2] = bswap32(*(_DWORD *)(a1 + 246));
  v43 = 0;
  v42[0] = v35;
  return hs_header_pow(v42, a2);
}
