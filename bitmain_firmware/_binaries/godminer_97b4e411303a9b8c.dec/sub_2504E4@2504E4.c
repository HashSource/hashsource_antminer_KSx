int __fastcall sub_2504E4(
        int *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        char *a7,
        unsigned int a8)
{
  int v10; // r11
  unsigned int v11; // r5
  char *v12; // r6
  int v13; // r12
  unsigned int v14; // r10
  int v15; // r9
  int v16; // r0
  unsigned int v17; // r7
  unsigned int v18; // r11
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r1
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r0
  unsigned int v29; // r4
  char v30; // r7
  bool v31; // cf
  int v32; // r1
  _BOOL4 v33; // r7
  int v34; // r3
  int v35; // r0
  unsigned int v36; // r4
  int v37; // r0
  int v38; // t1
  int v39; // r11
  int v40; // r0
  unsigned __int64 v41; // kr10_8
  __int64 v42; // r0
  unsigned int v43; // r5
  unsigned int v44; // r4
  int v45; // r9
  unsigned int v46; // r0
  unsigned int v47; // r1
  unsigned int v48; // r0
  unsigned int v49; // r0
  unsigned int v50; // r0
  unsigned int v51; // r1
  unsigned int v52; // r1
  int v53; // r2
  unsigned int v54; // r0
  unsigned int v55; // r1
  unsigned int v56; // r9
  int v58; // r6
  unsigned int v59; // r4
  int v60; // r5
  int v61; // r7
  int v62; // r4
  unsigned int v63; // r1
  int v64; // r1
  unsigned __int64 v65; // [sp+4h] [bp-58h]
  unsigned int v66; // [sp+4h] [bp-58h]
  int v67; // [sp+Ch] [bp-50h]
  int v68; // [sp+Ch] [bp-50h]
  _DWORD v69[2]; // [sp+10h] [bp-4Ch] BYREF
  _DWORD v70[2]; // [sp+18h] [bp-44h] BYREF
  _DWORD v71[3]; // [sp+20h] [bp-3Ch] BYREF
  int v72; // [sp+2Ch] [bp-30h] BYREF
  int v73; // [sp+30h] [bp-2Ch] BYREF
  int v74; // [sp+34h] [bp-28h]
  unsigned __int64 v75; // [sp+38h] [bp-24h]
  int v76; // [sp+40h] [bp-1Ch] BYREF
  _DWORD v77[6]; // [sp+44h] [bp-18h] BYREF

  v10 = a6;
  v11 = a8;
  v12 = a7;
  v69[0] = a5;
  v13 = a1[4];
  v14 = a1[5];
  v69[1] = a6;
  v70[1] = a8;
  v70[0] = a7;
  memset(v71, 48, 9);
  if ( !a3 )
  {
    v27 = 0;
LABEL_54:
    v72 = v27;
    goto LABEL_55;
  }
  v15 = v14;
  if ( !v13 )
    v15 = 9;
  if ( !v15 )
  {
    v10 = a6;
    v27 = 0;
    v72 = 0;
    if ( 5 * a4 > a3 )
      goto LABEL_55;
    goto LABEL_43;
  }
  v65 = a2;
  v67 = v13;
  if ( !a4 )
LABEL_114:
    core::panicking::panic((int)aAttemptToDivid, 25, (int)&off_2E5558);
  v16 = sub_26D980(a3, a4);
  v17 = a3 - v16 * a4;
  LOBYTE(v71[0]) = v16 + 48;
  if ( !v17 )
  {
    v27 = 1;
LABEL_52:
    a2 = v65;
    v13 = v67;
LABEL_53:
    v10 = a6;
    goto LABEL_54;
  }
  v18 = a4 / 0xA;
  if ( v15 == 1 )
  {
LABEL_29:
    a2 = v65;
    v13 = v67;
    goto LABEL_30;
  }
  if ( a4 < 0xA )
    goto LABEL_114;
  v19 = sub_26D980(v17, v18);
  v17 -= v19 * v18;
  BYTE1(v71[0]) = v19 + 48;
  if ( !v17 )
  {
    v27 = 2;
    goto LABEL_52;
  }
  v18 = a4 / 0x64;
  if ( v15 == 2 )
    goto LABEL_29;
  if ( a4 < 0x64 )
    goto LABEL_114;
  v20 = sub_26D980(v17, v18);
  v17 -= v20 * v18;
  BYTE2(v71[0]) = v20 + 48;
  if ( !v17 )
  {
    v27 = 3;
    goto LABEL_52;
  }
  v18 = a4 / 0x3E8;
  if ( v15 == 3 )
    goto LABEL_29;
  if ( a4 < 0x3E8 )
    goto LABEL_114;
  v21 = sub_26D980(v17, v18);
  v17 -= v21 * v18;
  HIBYTE(v71[0]) = v21 + 48;
  if ( !v17 )
  {
    v27 = 4;
    goto LABEL_52;
  }
  v18 = a4 / 0x2710;
  if ( v15 == 4 )
    goto LABEL_29;
  if ( a4 < 0x2710 )
    goto LABEL_114;
  v22 = sub_26D980(v17, v18);
  v17 -= v22 * v18;
  LOBYTE(v71[1]) = v22 + 48;
  if ( !v17 )
  {
    v27 = 5;
    goto LABEL_52;
  }
  v18 = a4 / 0x186A0;
  if ( v15 == 5 )
    goto LABEL_29;
  if ( a4 < (unsigned int)&elf_hash_chain[4398] )
    goto LABEL_114;
  v23 = sub_26D980(v17, a4 / 0x186A0);
  v17 -= v23 * v18;
  BYTE1(v71[1]) = v23 + 48;
  if ( !v17 )
  {
    v27 = 6;
    goto LABEL_52;
  }
  v18 = a4 / 0xF4240;
  if ( v15 == 6 )
    goto LABEL_29;
  if ( a4 < 0xF4240 )
    goto LABEL_114;
  BYTE2(v71[1]) = sub_26D724((unsigned __int16)v17, v18) + 48;
  if ( !v24 )
  {
    v27 = 7;
    goto LABEL_52;
  }
  v17 = (unsigned __int16)v24;
  v18 = a4 / 0x989680;
  if ( v15 == 7 )
    goto LABEL_29;
  if ( a4 < 0x989680 )
    goto LABEL_114;
  HIBYTE(v71[1]) = sub_26D724((unsigned __int16)v24, a4 / 0x989680) + 48;
  if ( !v25 )
  {
    v27 = 8;
    goto LABEL_52;
  }
  v17 = (unsigned __int16)v25;
  v18 = a4 / 0x5F5E100;
  if ( v15 == 8 )
    goto LABEL_29;
  if ( a4 < 0x5F5E100 )
    goto LABEL_114;
  LOBYTE(v71[2]) = sub_26D724((unsigned __int16)v25, a4 / 0x5F5E100) + 48;
  if ( !v64 )
  {
    a2 = v65;
    v13 = v67;
    v27 = 9;
    goto LABEL_53;
  }
  if ( v15 != 9 )
  {
    if ( a4 >= 0x3B9ACA00 )
      core::panicking::panic_bounds_check(9, 9, (int)&off_2E5568);
    goto LABEL_114;
  }
  a2 = v65;
  v13 = v67;
  v17 = (unsigned __int16)v64;
  v18 = (unsigned int)(((a4 >> 9) * (unsigned __int64)(unsigned int)"terator$GT$9size_hint17h4a4548e06983d6d7E") >> 32) >> 7;
LABEL_30:
  v26 = 5 * v18;
  v10 = a6;
  v72 = v15;
  if ( v17 >= v26 )
  {
    v28 = v15 - 1;
    do
    {
      v29 = *((unsigned __int8 *)v71 + v28);
      v30 = 48;
      if ( v29 < 0x39 )
        v30 = v29 + 1;
      *((_BYTE *)v71 + v28) = v30;
      v31 = v28-- != 0;
    }
    while ( v29 >= 0x39 && v31 );
    if ( v29 < 0x39 )
    {
      v32 = 0;
      v33 = 1;
      v74 = 0;
      v73 = 1;
      v75 = a2;
LABEL_44:
      v27 = v15;
      goto LABEL_56;
    }
LABEL_43:
    v75 = a2 + 1;
    v32 = 0;
    v33 = !__CFADD__(__CFADD__((_DWORD)a2, 1), HIDWORD(a2));
    v74 = 0;
    v73 = v33;
    goto LABEL_44;
  }
  v27 = v15;
LABEL_55:
  v32 = 0;
  v33 = 1;
  v74 = 0;
  v73 = 1;
  v75 = a2;
LABEL_56:
  v34 = v14;
  if ( v14 >= 9 )
    v34 = 9;
  if ( !v13 )
    v34 = v27;
  v35 = a1[2];
  v76 = v34;
  v77[5] = v70;
  v77[4] = &v72;
  v36 = a1[3];
  v77[3] = v71;
  v77[2] = &v76;
  v77[1] = v69;
  v77[0] = &v73;
  if ( v35 != 1 )
    return sub_250C28(v77, a1);
  v68 = v13;
  if ( a8 >= 0x10 )
  {
    v37 = core::str::count::do_count_chars(a7, a8);
    v33 = v73;
    v32 = v74;
  }
  else
  {
    v37 = 0;
    if ( a8 )
    {
      do
      {
        v38 = *v12++;
        if ( v38 > -65 )
          ++v37;
        --v11;
      }
      while ( v11 );
    }
  }
  v39 = v37 + v10;
  v40 = 20;
  if ( !(!v33 | v32) )
  {
    v41 = v75;
    if ( v75 )
    {
      v42 = sub_26D2D0(v75, HIDWORD(v75), 1410065408, 2);
      v43 = v42;
      v66 = v36;
      v44 = HIDWORD(v42);
      v45 = v41 > 0x2540BE3FFLL;
      if ( v41 <= 0x2540BE3FFLL )
      {
        v44 = HIDWORD(v41);
        v43 = v41;
      }
      v46 = sub_26D2D0(v43, v44, &elf_hash_chain[4398], 0);
      if ( (unsigned int)&elf_hash_chain[4397] + 3 >= __PAIR64__(v44, v43) )
        v46 = v43;
      v47 = ((unsigned int)&loc_DFC18 + v46) & (v46 + 514288);
      v48 = (unsigned int)&aSphGroestl384I[v46] & (v46 + 524188);
      if ( v41 > 0x2540BE3FFLL )
        v45 = 10;
      v49 = v48 ^ v47;
      if ( (unsigned int)&elf_hash_chain[4397] + 3 < __PAIR64__(v44, v43) )
        v45 |= 5u;
      v36 = v66;
      v40 = v45 + (v49 >> 17) + 1;
    }
    else
    {
      v40 = 1;
    }
  }
  v50 = v39 + v40;
  v51 = v72;
  if ( v68 )
    v51 = v14;
  v52 = v50 + v51;
  if ( v76 )
    v50 = v52 + 1;
  if ( v36 <= v50 )
    return sub_250C28(v77, a1);
  v53 = *((unsigned __int8 *)a1 + 32);
  v54 = v36 - v50;
  v55 = v53 - 3;
  if ( v53 != 3 )
    v55 = *((unsigned __int8 *)a1 + 32);
  if ( (v55 & 3) != 0 )
  {
    if ( v55 == 1 )
    {
      v56 = 0;
      goto LABEL_94;
    }
    v55 = v54 >> 1;
    v56 = (v54 + 1) >> 1;
  }
  else
  {
    v56 = v54;
  }
  v54 = v55;
LABEL_94:
  v58 = a1[7];
  v59 = v54 + 1;
  v60 = *a1;
  v61 = a1[1];
  while ( --v59 )
  {
    if ( (*(int (__fastcall **)(int, int))(v61 + 16))(v60, v58) )
      return 1;
  }
  if ( v58 == 1114112 || sub_250C28(v77, a1) )
    return 1;
  v62 = 0;
  while ( v56 != v62 )
  {
    ++v62;
    if ( (*(int (__fastcall **)(int, int))(v61 + 16))(v60, v58) )
    {
      v63 = v62 - 1;
      return v63 < v56;
    }
  }
  v63 = v56;
  return v63 < v56;
}
