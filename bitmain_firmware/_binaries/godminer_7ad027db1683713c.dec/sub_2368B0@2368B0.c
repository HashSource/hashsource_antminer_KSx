unsigned int __fastcall sub_2368B0(unsigned __int64 a1, int a2, _DWORD *a3)
{
  int v3; // r10
  unsigned __int64 v4; // r6
  _DWORD *v6; // r8
  unsigned __int64 v8; // r2
  __int64 v9; // r0
  unsigned int v10; // r9
  __int64 v11; // kr00_8
  unsigned int v12; // r4
  unsigned int v13; // r1
  int v14; // r2
  int v15; // r8
  unsigned int v16; // r0
  unsigned int v17; // r1
  int v18; // r2
  unsigned int v19; // r0
  unsigned int v20; // r1
  int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r4
  unsigned int v24; // r0
  unsigned int v25; // r6
  unsigned int v26; // r0
  int v27; // r2
  __int16 v28; // r1
  unsigned int v29; // r0
  unsigned int v30; // r2
  int v31; // r1
  __int16 v32; // r12
  __int16 v33; // r3
  int v34; // r6
  unsigned int v35; // r0
  int v36; // r1
  int v37; // r2
  unsigned int result; // r0
  unsigned __int16 v39; // r0
  unsigned int v40; // r2
  unsigned __int16 v41; // r0
  _WORD *v42; // r7
  _DWORD *v43; // [sp+4h] [bp-8h]

  v3 = *a3;
  if ( *a3 < 0x14u )
    core::panicking::panic((int)aAssertionFaile_48, 28, (int)&off_2CF20C);
  LODWORD(v4) = 1874919423;
  HIDWORD(v4) = (char *)&loc_2386F0 + 2;
  v6 = a3;
  if ( v4 >= a1 )
  {
    if ( a1 <= 0x5F5E0FF )
    {
      v31 = *a3;
      v29 = a1;
      if ( (unsigned int)a1 <= 0x270F )
      {
LABEL_7:
        v27 = v31;
        v10 = v29;
        v29 = (unsigned __int16)v29;
        if ( (unsigned __int16)v29 > 0x63u )
          goto LABEL_12;
        goto LABEL_8;
      }
    }
    else
    {
      v29 = sub_25A4F8(a1, HIDWORD(a1), 0x5F5E100u);
      v30 = a1 - 100000000 * v29;
      v31 = v3 - 8;
      *v6 = v3 - 8;
      v32 = word_29F267[(unsigned __int8)(v30 / 0xF4240) % 0x64u];
      v33 = word_29F267[(unsigned __int16)(v30 / 0x2710
                                         - 100 * ((unsigned __int16)((5243 * ((v30 / 0x9C40) & 0x3FFF)) >> 16) >> 1))];
      v34 = v3 + a2;
      *(_WORD *)(v34 - 2) = word_29F267[v30 % 0x64];
      *(_WORD *)(v34 - 6) = v33;
      *(_WORD *)(v34 - 4) = word_29F267[v30 / 0x64 % 0x64];
      *(_WORD *)(a2 + v3 - 8) = v32;
      if ( v29 <= 0x270F )
        goto LABEL_7;
    }
    v10 = v29 / 0x2710;
    v39 = v29 % 0x2710;
    v40 = (unsigned int)(5243 * (v39 >> 2)) >> 17;
    v41 = v39 - 100 * v40;
    v42 = &word_29F267[v40];
    v27 = v31 - 4;
    *(_WORD *)(a2 + v31 - 4) = *v42;
    *(_WORD *)(v31 + a2 - 2) = word_29F267[v41];
    v29 = (unsigned __int16)v10;
    if ( (unsigned __int16)v10 > 0x63u )
      goto LABEL_12;
    goto LABEL_8;
  }
  LODWORD(v8) = 1874919424;
  HIDWORD(v8) = (char *)&loc_2386F0 + 2;
  LODWORD(v9) = sub_25A4F8(a1, HIDWORD(a1), v8);
  v10 = v9;
  v11 = a1 - v9 * __PAIR64__((_UNKNOWN *)((char *)&loc_2386F0 + 2), 1874919424);
  v12 = sub_25A4F8(a1 - 1874919424 * v9, HIDWORD(v11), 0x64u);
  sub_25A4F8(v12, v13, 0x64u);
  v43 = v6;
  v15 = v3 + a2;
  *(_WORD *)(v3 + a2 - 4) = word_29F267[v14];
  v16 = sub_25A4F8(v11, HIDWORD(v11), 0x2710u);
  sub_25A4F8(v16, v17, 0x64u);
  *(_WORD *)(v15 - 6) = word_29F267[v18];
  v19 = sub_25A4F8(v11, HIDWORD(v11), 0xF4240u);
  sub_25A4F8(v19, v20, 0x64u);
  *(_WORD *)(v15 - 8) = word_29F267[v21];
  *(_WORD *)(v15 - 2) = word_29F267[(_DWORD)v11 - 100 * v12];
  *(_WORD *)(v15 - 10) = word_29F267[sub_25A4F8(v11, HIDWORD(v11), 0x5F5E100u) % 0x64];
  v22 = sub_25A4F8(v11, HIDWORD(v11), 0x5AF3107A4000uLL);
  v23 = v22 - 100 * ((unsigned __int8)v22 / 0x64u);
  v24 = sub_25A4F8(v11, HIDWORD(v11), 0xE8D4A51000uLL);
  v25 = v24 - 100 * ((unsigned int)(5243 * ((unsigned __int16)v24 >> 2)) >> 17);
  v26 = sub_25A4F8(v11, HIDWORD(v11), 0x2540BE400uLL);
  v27 = v3 - 16;
  v28 = word_29F267[(unsigned __int8)v23];
  *(_WORD *)(v15 - 12) = word_29F267[v26 % 0x64];
  *(_WORD *)(v15 - 14) = word_29F267[(unsigned __int16)v25];
  v6 = v43;
  *(_WORD *)(a2 + v3 - 16) = v28;
  v29 = (unsigned __int16)v10;
  if ( (unsigned __int16)v10 > 0x63u )
  {
LABEL_12:
    v27 -= 2;
    v35 = (unsigned int)(5243 * (__int16)(v29 >> 2)) >> 17;
    *(_WORD *)(a2 + v27) = word_29F267[(unsigned __int16)(v10 - 100 * v35)];
    v36 = (unsigned __int16)v35;
    if ( (unsigned __int16)v35 < 0xAu )
      goto LABEL_13;
LABEL_9:
    v37 = v27 - 2;
    *v6 = v37;
    result = (unsigned __int16)word_29F267[v36];
    *(_WORD *)(a2 + v37) = result;
    return result;
  }
LABEL_8:
  v35 = v10;
  v36 = (unsigned __int16)v10;
  if ( (unsigned __int16)v10 >= 0xAu )
    goto LABEL_9;
LABEL_13:
  result = v35 + 48;
  *v6 = v27 - 1;
  *(_BYTE *)(a2 + v27 - 1) = result;
  return result;
}
