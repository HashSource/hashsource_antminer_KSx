unsigned int __fastcall sub_1B31F8(unsigned int result, int a2, unsigned int a3, int *a4, int a5)
{
  int v5; // r7
  unsigned int v7; // r10
  _DWORD *v8; // r9
  int v9; // r5
  int v10; // r1
  unsigned int v11; // r7
  bool v12; // cc
  int v13; // r12
  int v14; // r6
  unsigned int *v15; // r7
  unsigned int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // r4
  unsigned int v20; // r11
  unsigned int v21; // r5
  bool v22; // cf
  unsigned int v23; // r2
  char v24; // r12
  int v25; // r0
  int v26; // r4
  int v27; // r0
  int v28; // r1
  unsigned int *v29; // r7
  int v30; // r9
  __int64 v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r5
  unsigned int v34; // r6
  unsigned int v35; // r2
  bool v36; // zf
  __int64 v37; // r0
  int v38; // r5
  __int64 v39; // r0
  int v40; // r5
  unsigned int v41; // r0
  unsigned int v42; // r0
  int v43; // lr
  int v44; // r6
  unsigned int v45; // r5
  unsigned int v46; // r11
  int v47; // r9
  int v48; // r1
  int v49; // r2
  int v50; // r3
  unsigned int v51; // r1
  unsigned int v52; // [sp+14h] [bp-70h]
  unsigned int v53; // [sp+18h] [bp-6Ch]
  __int64 v54; // [sp+20h] [bp-64h]
  unsigned int v55; // [sp+28h] [bp-5Ch]
  int i; // [sp+28h] [bp-5Ch]
  unsigned int v58; // [sp+30h] [bp-54h]
  int v59; // [sp+34h] [bp-50h] BYREF
  int v60; // [sp+38h] [bp-4Ch]
  int v61; // [sp+3Ch] [bp-48h]
  int v62; // [sp+40h] [bp-44h]
  _DWORD *v63; // [sp+44h] [bp-40h]
  __int64 v64; // [sp+48h] [bp-3Ch] BYREF
  unsigned int v65; // [sp+50h] [bp-34h]
  int v66; // [sp+54h] [bp-30h]
  int v67; // [sp+58h] [bp-2Ch]
  int v68; // [sp+5Ch] [bp-28h]
  unsigned int v69; // [sp+60h] [bp-24h] BYREF
  unsigned int v70; // [sp+64h] [bp-20h]
  unsigned int v71; // [sp+68h] [bp-1Ch]
  unsigned int v72; // [sp+6Ch] [bp-18h]
  unsigned __int64 v73; // [sp+70h] [bp-14h] BYREF
  unsigned int v74; // [sp+78h] [bp-Ch]
  unsigned int v75; // [sp+7Ch] [bp-8h]

  v5 = *(unsigned __int8 *)(a2 + 41);
  v7 = *(_DWORD *)(a2 + 20);
  v8 = (_DWORD *)(a2 + 88);
  v9 = *(_DWORD *)(a2 + 32);
  v10 = 4;
  if ( v5 == 8 )
    v10 = 12;
  v11 = v9 - v7 + v10;
  v12 = a3 > v11;
  if ( a3 >= v11 )
  {
    v11 = a3 - v11;
    v12 = v7 > v11;
  }
  if ( !v12 )
  {
    *(_DWORD *)result = 56;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = a2;
    *(_DWORD *)(result + 12) = v8;
    return result;
  }
  v13 = *(_DWORD *)(a2 + 16);
  v58 = result;
  v63 = v8;
  v62 = a2;
  v61 = 0;
  if ( v7 == v11 )
  {
    v15 = (unsigned int *)(v13 + v11);
    result = 0;
    goto LABEL_20;
  }
  v14 = a3 - v10 - v9;
  v15 = (unsigned int *)(v13 + v7);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    result = *((unsigned __int8 *)v15 + v14);
    if ( v18 == 63 && result >= 2 )
    {
      v60 = ~v14;
      v25 = v13 + v7 + v14;
      v24 = 6;
      v59 = v25 + 1;
      result = 0;
LABEL_22:
      v23 = v58;
      goto LABEL_23;
    }
    v19 = result & 0x7F;
    v20 = v19 << (v18 & 0x3F);
    if ( (int)((v18 & 0x3F) - 32) >= 0 )
      v20 = 0;
    v16 |= v20;
    v21 = v19 >> (32 - (v18 & 0x3F));
    if ( (int)((v18 & 0x3F) - 32) >= 0 )
      v21 = v19 << ((v18 & 0x3F) - 32);
    v17 |= v21;
    if ( (char)result > -1 )
      break;
    v22 = __CFADD__(v14++, 1);
    v18 += 7;
    if ( v22 )
    {
      v59 = v13 + v7;
      v60 = 0;
LABEL_20:
      v23 = v58;
      v24 = 19;
      v18 = 0;
LABEL_23:
      *(_BYTE *)(v23 + 1) = result;
      *(_BYTE *)v23 = v24;
      *(_DWORD *)(v23 + 4) = 0;
      *(_DWORD *)(v23 + 8) = v15;
      *(_DWORD *)(v23 + 12) = v18;
      return result;
    }
  }
  v60 = ~v14;
  v59 = v13 + v7 + v14 + 1;
  if ( !(v16 | v17) )
  {
    *(_BYTE *)v58 = 55;
    return 55;
  }
  if ( !v17 )
  {
    v18 = *(_DWORD *)(a2 + 108);
    if ( v16 - 1 < v18 )
    {
      v26 = *(_DWORD *)(a2 + 104) + 104 * (v16 - 1);
      goto LABEL_28;
    }
  }
  v43 = *(_DWORD *)(a2 + 92);
  result = 0;
  v24 = 18;
  if ( !v43 )
    goto LABEL_22;
  for ( i = *v8; ; --i )
  {
    v26 = v43 - 16;
    v44 = -1;
    v15 = (unsigned int *)v43;
    v18 = 8 * *(unsigned __int16 *)(v43 + 1238);
    do
    {
      if ( !v18 )
      {
        v44 = *(unsigned __int16 *)(v43 + 1238);
        goto LABEL_61;
      }
      v45 = *v15;
      v46 = v15[1];
      ++v44;
      v26 += 104;
      v18 -= 8;
      v47 = *(_QWORD *)v15 != __PAIR64__(v17, v16);
      v15 += 2;
      if ( __PAIR64__(v17, v16) < __PAIR64__(v46, v45) )
        v47 = -1;
    }
    while ( v47 == 1 );
    v18 = (unsigned __int8)v47;
    if ( !(_BYTE)v47 )
      break;
LABEL_61:
    if ( !i )
      goto LABEL_22;
    v43 = *(_DWORD *)(v43 + 4 * v44 + 1240);
  }
LABEL_28:
  if ( *(_BYTE *)(v26 + 98) == 1 )
    v61 = 1;
  v27 = <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref(v26 + 8);
  if ( !v28 )
    goto LABEL_68;
  v29 = (unsigned int *)v27;
  v54 = 46;
  v30 = 16 * v28;
  v55 = 0;
  while ( 2 )
  {
    v32 = v29[1];
    v33 = v29[2];
    v34 = v29[3];
    v35 = *(_DWORD *)(v62 + 40);
    v69 = *v29;
    v70 = v32;
    v71 = v33;
    v72 = v34;
    v73 = __PAIR64__(v32, v69);
    v74 = v33;
    v75 = v34;
    sub_1A5D9C((int)&v64, (unsigned int *)&v59, v35, (int)&v73);
    if ( v64 == 46 )
    {
      result = v65;
      v48 = v66;
      v49 = v67;
      v50 = v68;
      *(_DWORD *)v58 = v65;
      *(_DWORD *)(v58 + 4) = v48;
      *(_DWORD *)(v58 + 8) = v49;
      *(_DWORD *)(v58 + 12) = v50;
      return result;
    }
    if ( (unsigned __int16)v67 <= 0x46u )
    {
      if ( (unsigned __int16)v67 == 3 )
      {
        HIDWORD(v39) = &v64;
        v40 = a4[7];
        LODWORD(v39) = &v73;
        sub_1A7DDC(v39);
        sub_1A8898((int)&v69, (_DWORD *)(v40 + 8), *(unsigned __int8 *)(a2 + 41), *(_DWORD *)(a2 + 264), &v73);
        v41 = v55;
        if ( (unsigned __int8)v69 == 75 )
          v41 = v70;
        v55 = v41;
        v42 = v53;
        if ( (unsigned __int8)v69 == 75 )
          v42 = v71;
        v53 = v42;
        goto LABEL_33;
      }
      if ( (unsigned __int16)v67 != 49 )
        goto LABEL_33;
LABEL_32:
      LODWORD(v31) = &v73;
      HIDWORD(v31) = &v64;
      sub_1A7DDC(v31);
      v54 = v73;
      v52 = v74;
      goto LABEL_33;
    }
    if ( (unsigned __int16)v67 == 71 )
      goto LABEL_32;
    v36 = (unsigned __int16)v67 == 110;
    if ( (unsigned __int16)v67 != 110 )
      v36 = (unsigned __int16)v67 == 8199;
    if ( v36 )
    {
      HIDWORD(v37) = &v64;
      v38 = a4[7];
      LODWORD(v37) = &v73;
      sub_1A7DDC(v37);
      sub_1A8898((int)&v69, (_DWORD *)(v38 + 8), *(unsigned __int8 *)(a2 + 41), *(_DWORD *)(a2 + 264), &v73);
      if ( (unsigned __int8)v69 == 75 )
      {
        v51 = v71;
        *(_DWORD *)(v58 + 4) = v70;
        *(_DWORD *)(v58 + 8) = v51;
        *(_BYTE *)v58 = 75;
        return 75;
      }
    }
LABEL_33:
    v29 += 4;
    v30 -= 16;
    if ( v30 )
      continue;
    break;
  }
  if ( v55 )
  {
    *(_DWORD *)(v58 + 4) = v55;
    *(_DWORD *)(v58 + 8) = v53;
    *(_BYTE *)v58 = 75;
    return 75;
  }
  if ( v54 != 46 )
    return sub_1B4520(v58, (int)a4, v54, SHIDWORD(v54), v52, a2, a4, a5 - 1);
LABEL_68:
  *(_BYTE *)v58 = 75;
  *(_DWORD *)(v58 + 4) = 0;
  return 0;
}
