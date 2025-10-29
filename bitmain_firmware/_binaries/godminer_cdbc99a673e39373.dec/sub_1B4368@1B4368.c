unsigned int __fastcall sub_1B4368(unsigned int result, int a2, unsigned int a3, int a4)
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
  __int64 v26; // r0
  unsigned int *v27; // r7
  int v28; // r9
  __int64 v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r5
  unsigned int v32; // r6
  unsigned int v33; // r2
  bool v34; // zf
  __int64 v35; // r0
  int v36; // r5
  __int64 v37; // r0
  int v38; // r5
  unsigned int v39; // r0
  unsigned int v40; // r0
  int v41; // lr
  int v42; // r6
  unsigned int v43; // r5
  unsigned int v44; // r11
  int v45; // r9
  int v46; // r1
  int v47; // r2
  int v48; // r3
  unsigned int v49; // r1
  unsigned int v50; // [sp+18h] [bp-6Ch]
  __int64 v51; // [sp+20h] [bp-64h]
  unsigned int v52; // [sp+28h] [bp-5Ch]
  int i; // [sp+28h] [bp-5Ch]
  unsigned int v55; // [sp+30h] [bp-54h]
  int v56; // [sp+34h] [bp-50h] BYREF
  int v57; // [sp+38h] [bp-4Ch]
  int v58; // [sp+3Ch] [bp-48h]
  int v59; // [sp+40h] [bp-44h]
  _DWORD *v60; // [sp+44h] [bp-40h]
  __int64 v61; // [sp+48h] [bp-3Ch] BYREF
  unsigned int v62; // [sp+50h] [bp-34h]
  int v63; // [sp+54h] [bp-30h]
  int v64; // [sp+58h] [bp-2Ch]
  int v65; // [sp+5Ch] [bp-28h]
  unsigned int v66; // [sp+60h] [bp-24h] BYREF
  unsigned int v67; // [sp+64h] [bp-20h]
  unsigned int v68; // [sp+68h] [bp-1Ch]
  unsigned int v69; // [sp+6Ch] [bp-18h]
  unsigned __int64 v70; // [sp+70h] [bp-14h] BYREF
  unsigned int v71; // [sp+78h] [bp-Ch]
  unsigned int v72; // [sp+7Ch] [bp-8h]

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
  v55 = result;
  v60 = v7;
  v59 = a2;
  v58 = 0;
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
      v57 = ~v13;
      v24 = v12 + v6 + v13;
      v23 = 6;
      v56 = v24 + 1;
      result = 0;
LABEL_22:
      v22 = v55;
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
      v56 = v12 + v6;
      v57 = 0;
LABEL_20:
      v22 = v55;
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
  v57 = ~v13;
  v56 = v12 + v6 + v13 + 1;
  if ( !(v15 | v16) )
  {
    *(_BYTE *)v55 = 55;
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
  v41 = *(_DWORD *)(a2 + 92);
  result = 0;
  v23 = 18;
  if ( !v41 )
    goto LABEL_22;
  for ( i = *v7; ; --i )
  {
    v25 = v41 - 16;
    v42 = -1;
    v14 = (unsigned int *)v41;
    v17 = 8 * *(unsigned __int16 *)(v41 + 1238);
    do
    {
      if ( !v17 )
      {
        v42 = *(unsigned __int16 *)(v41 + 1238);
        goto LABEL_61;
      }
      v43 = *v14;
      v44 = v14[1];
      ++v42;
      v25 += 104;
      v17 -= 8;
      v45 = *(_QWORD *)v14 != __PAIR64__(v16, v15);
      v14 += 2;
      if ( __PAIR64__(v16, v15) < __PAIR64__(v44, v43) )
        v45 = -1;
    }
    while ( v45 == 1 );
    v17 = (unsigned __int8)v45;
    if ( !(_BYTE)v45 )
      break;
LABEL_61:
    if ( !i )
      goto LABEL_22;
    v41 = *(_DWORD *)(v41 + 4 * v42 + 1240);
  }
LABEL_28:
  if ( *(_BYTE *)(v25 + 98) == 1 )
    v58 = 1;
  v26 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v25 + 8);
  if ( !HIDWORD(v26) )
    goto LABEL_68;
  v27 = (unsigned int *)v26;
  v51 = 46;
  v28 = 16 * HIDWORD(v26);
  v52 = 0;
  while ( 2 )
  {
    v30 = v27[1];
    v31 = v27[2];
    v32 = v27[3];
    v33 = *(_DWORD *)(v59 + 40);
    v66 = *v27;
    v67 = v30;
    v68 = v31;
    v69 = v32;
    v70 = __PAIR64__(v30, v66);
    v71 = v31;
    v72 = v32;
    sub_1A6F0C((int)&v61, (unsigned int *)&v56, v33, (int)&v70);
    if ( v61 == 46 )
    {
      result = v62;
      v46 = v63;
      v47 = v64;
      v48 = v65;
      *(_DWORD *)v55 = v62;
      *(_DWORD *)(v55 + 4) = v46;
      *(_DWORD *)(v55 + 8) = v47;
      *(_DWORD *)(v55 + 12) = v48;
      return result;
    }
    if ( (unsigned __int16)v64 <= 0x46u )
    {
      if ( (unsigned __int16)v64 == 3 )
      {
        HIDWORD(v37) = &v61;
        v38 = *(_DWORD *)(a4 + 28);
        LODWORD(v37) = &v70;
        sub_1A8F4C(v37);
        sub_1A9A08((int)&v66, (_DWORD *)(v38 + 8), *(unsigned __int8 *)(a2 + 41), *(_DWORD *)(a2 + 264), &v70);
        v39 = v52;
        if ( (unsigned __int8)v66 == 75 )
          v39 = v67;
        v52 = v39;
        v40 = v50;
        if ( (unsigned __int8)v66 == 75 )
          v40 = v68;
        v50 = v40;
        goto LABEL_33;
      }
      if ( (unsigned __int16)v64 != 49 )
        goto LABEL_33;
LABEL_32:
      LODWORD(v29) = &v70;
      HIDWORD(v29) = &v61;
      sub_1A8F4C(v29);
      v51 = v70;
      goto LABEL_33;
    }
    if ( (unsigned __int16)v64 == 71 )
      goto LABEL_32;
    v34 = (unsigned __int16)v64 == 110;
    if ( (unsigned __int16)v64 != 110 )
      v34 = (unsigned __int16)v64 == 8199;
    if ( v34 )
    {
      HIDWORD(v35) = &v61;
      v36 = *(_DWORD *)(a4 + 28);
      LODWORD(v35) = &v70;
      sub_1A8F4C(v35);
      sub_1A9A08((int)&v66, (_DWORD *)(v36 + 8), *(unsigned __int8 *)(a2 + 41), *(_DWORD *)(a2 + 264), &v70);
      if ( (unsigned __int8)v66 == 75 )
      {
        v49 = v68;
        *(_DWORD *)(v55 + 4) = v67;
        *(_DWORD *)(v55 + 8) = v49;
        *(_BYTE *)v55 = 75;
        return 75;
      }
    }
LABEL_33:
    v27 += 4;
    v28 -= 16;
    if ( v28 )
      continue;
    break;
  }
  if ( v52 )
  {
    *(_DWORD *)(v55 + 4) = v52;
    *(_DWORD *)(v55 + 8) = v50;
    *(_BYTE *)v55 = 75;
    return 75;
  }
  if ( v51 != 46 )
    return sub_1B5690(v55);
LABEL_68:
  *(_BYTE *)v55 = 75;
  *(_DWORD *)(v55 + 4) = 0;
  return 0;
}
