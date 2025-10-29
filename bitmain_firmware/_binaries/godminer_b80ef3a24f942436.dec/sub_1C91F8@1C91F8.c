unsigned int __fastcall sub_1C91F8(unsigned int result, int a2, unsigned int a3, int a4)
{
  int v4; // r7
  unsigned int v6; // r10
  _DWORD *v7; // r9
  int v8; // r5
  int v9; // r1
  unsigned int v10; // r7
  bool v11; // cc
  int v12; // r12
  int v13; // r6
  unsigned int *v14; // r7
  unsigned int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r4
  unsigned int v19; // r11
  unsigned int v20; // r5
  bool v21; // cf
  unsigned int v22; // r2
  char v23; // r12
  int v24; // r0
  int v25; // r4
  int v26; // r0
  int v27; // r1
  unsigned int *v28; // r7
  int v29; // r9
  __int64 v30; // r0
  unsigned int v31; // r3
  unsigned int v32; // r5
  unsigned int v33; // r6
  unsigned int v34; // r2
  bool v35; // zf
  __int64 v36; // r0
  int v37; // r5
  __int64 v38; // r0
  int v39; // r5
  unsigned int v40; // r0
  unsigned int v41; // r0
  int v42; // lr
  int v43; // r6
  unsigned int v44; // r5
  unsigned int v45; // r11
  int v46; // r9
  int v47; // r1
  int v48; // r2
  int v49; // r3
  unsigned int v50; // r1
  unsigned int v51; // [sp+18h] [bp-6Ch]
  __int64 v52; // [sp+20h] [bp-64h]
  unsigned int v53; // [sp+28h] [bp-5Ch]
  int i; // [sp+28h] [bp-5Ch]
  unsigned int v56; // [sp+30h] [bp-54h]
  int v57; // [sp+34h] [bp-50h] BYREF
  int v58; // [sp+38h] [bp-4Ch]
  int v59; // [sp+3Ch] [bp-48h]
  int v60; // [sp+40h] [bp-44h]
  _DWORD *v61; // [sp+44h] [bp-40h]
  __int64 v62; // [sp+48h] [bp-3Ch] BYREF
  unsigned int v63; // [sp+50h] [bp-34h]
  int v64; // [sp+54h] [bp-30h]
  int v65; // [sp+58h] [bp-2Ch]
  int v66; // [sp+5Ch] [bp-28h]
  unsigned int v67; // [sp+60h] [bp-24h] BYREF
  unsigned int v68; // [sp+64h] [bp-20h]
  unsigned int v69; // [sp+68h] [bp-1Ch]
  unsigned int v70; // [sp+6Ch] [bp-18h]
  unsigned __int64 v71; // [sp+70h] [bp-14h] BYREF
  unsigned int v72; // [sp+78h] [bp-Ch]
  unsigned int v73; // [sp+7Ch] [bp-8h]

  v4 = *(unsigned __int8 *)(a2 + 41);
  v6 = *(_DWORD *)(a2 + 20);
  v7 = (_DWORD *)(a2 + 88);
  v8 = *(_DWORD *)(a2 + 32);
  v9 = 4;
  if ( v4 == 8 )
    v9 = 12;
  v10 = v8 - v6 + v9;
  v11 = a3 > v10;
  if ( a3 >= v10 )
  {
    v10 = a3 - v10;
    v11 = v6 > v10;
  }
  if ( !v11 )
  {
    *(_DWORD *)result = 56;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = a2;
    *(_DWORD *)(result + 12) = v7;
    return result;
  }
  v12 = *(_DWORD *)(a2 + 16);
  v56 = result;
  v61 = v7;
  v60 = a2;
  v59 = 0;
  if ( v6 == v10 )
  {
    v14 = (unsigned int *)(v12 + v10);
    result = 0;
    goto LABEL_20;
  }
  v13 = a3 - v9 - v8;
  v14 = (unsigned int *)(v12 + v6);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    result = *((unsigned __int8 *)v14 + v13);
    if ( v17 == 63 && result >= 2 )
    {
      v58 = ~v13;
      v24 = v12 + v6 + v13;
      v23 = 6;
      v57 = v24 + 1;
      result = 0;
LABEL_22:
      v22 = v56;
      goto LABEL_23;
    }
    v18 = result & 0x7F;
    v19 = v18 << (v17 & 0x3F);
    if ( (int)((v17 & 0x3F) - 32) >= 0 )
      v19 = 0;
    v15 |= v19;
    v20 = v18 >> (32 - (v17 & 0x3F));
    if ( (int)((v17 & 0x3F) - 32) >= 0 )
      v20 = v18 << ((v17 & 0x3F) - 32);
    v16 |= v20;
    if ( (char)result > -1 )
      break;
    v21 = __CFADD__(v13++, 1);
    v17 += 7;
    if ( v21 )
    {
      v57 = v12 + v6;
      v58 = 0;
LABEL_20:
      v22 = v56;
      v23 = 19;
      v17 = 0;
LABEL_23:
      *(_BYTE *)(v22 + 1) = result;
      *(_BYTE *)v22 = v23;
      *(_DWORD *)(v22 + 4) = 0;
      *(_DWORD *)(v22 + 8) = v14;
      *(_DWORD *)(v22 + 12) = v17;
      return result;
    }
  }
  v58 = ~v13;
  v57 = v12 + v6 + v13 + 1;
  if ( !(v15 | v16) )
  {
    *(_BYTE *)v56 = 55;
    return 55;
  }
  if ( !v16 )
  {
    v17 = *(_DWORD *)(a2 + 108);
    if ( v15 - 1 < v17 )
    {
      v25 = *(_DWORD *)(a2 + 104) + 104 * (v15 - 1);
      goto LABEL_28;
    }
  }
  v42 = *(_DWORD *)(a2 + 92);
  result = 0;
  v23 = 18;
  if ( !v42 )
    goto LABEL_22;
  for ( i = *v7; ; --i )
  {
    v25 = v42 - 16;
    v43 = -1;
    v14 = (unsigned int *)v42;
    v17 = 8 * *(unsigned __int16 *)(v42 + 1238);
    do
    {
      if ( !v17 )
      {
        v43 = *(unsigned __int16 *)(v42 + 1238);
        goto LABEL_61;
      }
      v44 = *v14;
      v45 = v14[1];
      ++v43;
      v25 += 104;
      v17 -= 8;
      v46 = *(_QWORD *)v14 != __PAIR64__(v16, v15);
      v14 += 2;
      if ( __PAIR64__(v16, v15) < __PAIR64__(v45, v44) )
        v46 = -1;
    }
    while ( v46 == 1 );
    v17 = (unsigned __int8)v46;
    if ( !(_BYTE)v46 )
      break;
LABEL_61:
    if ( !i )
      goto LABEL_22;
    v42 = *(_DWORD *)(v42 + 4 * v43 + 1240);
  }
LABEL_28:
  if ( *(_BYTE *)(v25 + 98) == 1 )
    v59 = 1;
  v26 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v25 + 8);
  if ( !v27 )
    goto LABEL_68;
  v28 = (unsigned int *)v26;
  v52 = 46;
  v29 = 16 * v27;
  v53 = 0;
  while ( 2 )
  {
    v31 = v28[1];
    v32 = v28[2];
    v33 = v28[3];
    v34 = *(_DWORD *)(v60 + 40);
    v67 = *v28;
    v68 = v31;
    v69 = v32;
    v70 = v33;
    v71 = __PAIR64__(v31, v67);
    v72 = v32;
    v73 = v33;
    sub_1BBD9C((int)&v62, (unsigned int *)&v57, v34, (int)&v71);
    if ( v62 == 46 )
    {
      result = v63;
      v47 = v64;
      v48 = v65;
      v49 = v66;
      *(_DWORD *)v56 = v63;
      *(_DWORD *)(v56 + 4) = v47;
      *(_DWORD *)(v56 + 8) = v48;
      *(_DWORD *)(v56 + 12) = v49;
      return result;
    }
    if ( (unsigned __int16)v65 <= 0x46u )
    {
      if ( (unsigned __int16)v65 == 3 )
      {
        HIDWORD(v38) = &v62;
        v39 = *(_DWORD *)(a4 + 28);
        LODWORD(v38) = &v71;
        sub_1BDDDC(v38);
        sub_1BE898((int)&v67, (_DWORD *)(v39 + 8), *(unsigned __int8 *)(a2 + 41), *(_DWORD *)(a2 + 264), &v71);
        v40 = v53;
        if ( (unsigned __int8)v67 == 75 )
          v40 = v68;
        v53 = v40;
        v41 = v51;
        if ( (unsigned __int8)v67 == 75 )
          v41 = v69;
        v51 = v41;
        goto LABEL_33;
      }
      if ( (unsigned __int16)v65 != 49 )
        goto LABEL_33;
LABEL_32:
      LODWORD(v30) = &v71;
      HIDWORD(v30) = &v62;
      sub_1BDDDC(v30);
      v52 = v71;
      goto LABEL_33;
    }
    if ( (unsigned __int16)v65 == 71 )
      goto LABEL_32;
    v35 = (unsigned __int16)v65 == 110;
    if ( (unsigned __int16)v65 != 110 )
      v35 = (unsigned __int16)v65 == 8199;
    if ( v35 )
    {
      HIDWORD(v36) = &v62;
      v37 = *(_DWORD *)(a4 + 28);
      LODWORD(v36) = &v71;
      sub_1BDDDC(v36);
      sub_1BE898((int)&v67, (_DWORD *)(v37 + 8), *(unsigned __int8 *)(a2 + 41), *(_DWORD *)(a2 + 264), &v71);
      if ( (unsigned __int8)v67 == 75 )
      {
        v50 = v69;
        *(_DWORD *)(v56 + 4) = v68;
        *(_DWORD *)(v56 + 8) = v50;
        *(_BYTE *)v56 = 75;
        return 75;
      }
    }
LABEL_33:
    v28 += 4;
    v29 -= 16;
    if ( v29 )
      continue;
    break;
  }
  if ( v53 )
  {
    *(_DWORD *)(v56 + 4) = v53;
    *(_DWORD *)(v56 + 8) = v51;
    *(_BYTE *)v56 = 75;
    return 75;
  }
  if ( v52 != 46 )
    return sub_1CA520(v56);
LABEL_68:
  *(_BYTE *)v56 = 75;
  *(_DWORD *)(v56 + 4) = 0;
  return 0;
}
