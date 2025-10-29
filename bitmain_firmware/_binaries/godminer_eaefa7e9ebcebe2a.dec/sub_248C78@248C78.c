unsigned int __fastcall sub_248C78(unsigned __int64 a1, int a2, _DWORD *a3)
{
  int v3; // r10
  unsigned __int64 v4; // r6
  _DWORD *v6; // r8
  __int64 v8; // r0
  unsigned int v9; // r9
  unsigned __int64 v10; // kr00_8
  __int64 v11; // r0
  int v12; // r4
  int v13; // r2
  int v14; // r8
  __int64 v15; // r0
  int v16; // r2
  __int64 v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r6
  unsigned int v23; // r0
  int v24; // r2
  unsigned __int16 v25; // r1
  unsigned int v26; // r0
  unsigned int v27; // r2
  int v28; // r1
  unsigned __int16 v29; // r12
  unsigned __int16 v30; // r3
  int v31; // r6
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r2
  unsigned int result; // r0
  unsigned __int16 v36; // r0
  unsigned int v37; // r2
  unsigned __int16 v38; // r0
  unsigned __int16 *v39; // r7
  _DWORD *v40; // [sp+4h] [bp-8h]

  v3 = *a3;
  if ( *a3 < 0x14u )
    core::panicking::panic((int)aAssertionFaile_48, 28, (int)&off_2E420C);
  LODWORD(v4) = 1874919423;
  HIDWORD(v4) = (char *)&loc_2386F0 + 2;
  v6 = a3;
  if ( v4 >= a1 )
  {
    if ( a1 <= 0x5F5E0FF )
    {
      v28 = *a3;
      v26 = a1;
      if ( (unsigned int)a1 <= 0x270F )
      {
LABEL_7:
        v24 = v28;
        v9 = v26;
        v26 = (unsigned __int16)v26;
        if ( (unsigned __int16)v26 > 0x63u )
          goto LABEL_12;
        goto LABEL_8;
      }
    }
    else
    {
      v26 = sub_26C8C0(a1, HIDWORD(a1), 100000000, 0);
      v27 = a1 - 100000000 * v26;
      v28 = v3 - 8;
      *v6 = v3 - 8;
      v29 = word_2B4047[(unsigned __int8)(v27 / 0xF4240) % 0x64u];
      v30 = word_2B4047[(unsigned __int16)(v27 / 0x2710
                                         - 100 * ((unsigned __int16)((5243 * ((v27 / 0x9C40) & 0x3FFF)) >> 16) >> 1))];
      v31 = v3 + a2;
      *(_WORD *)(v31 - 2) = word_2B4047[v27 % 0x64];
      *(_WORD *)(v31 - 6) = v30;
      *(_WORD *)(v31 - 4) = word_2B4047[v27 / 0x64 % 0x64];
      *(_WORD *)(a2 + v3 - 8) = v29;
      if ( v26 <= 0x270F )
        goto LABEL_7;
    }
    v9 = v26 / 0x2710;
    v36 = v26 % 0x2710;
    v37 = (unsigned int)(5243 * (v36 >> 2)) >> 17;
    v38 = v36 - 100 * v37;
    v39 = &word_2B4047[v37];
    v24 = v28 - 4;
    *(_WORD *)(a2 + v28 - 4) = *v39;
    *(_WORD *)(v28 + a2 - 2) = word_2B4047[v38];
    v26 = (unsigned __int16)v9;
    if ( (unsigned __int16)v9 > 0x63u )
      goto LABEL_12;
    goto LABEL_8;
  }
  v8 = sub_26C8C0(a1, HIDWORD(a1), 1874919424, (char *)&loc_2386F0 + 2);
  v9 = v8;
  v10 = a1 - v8 * __PAIR64__((_UNKNOWN *)((char *)&loc_2386F0 + 2), 1874919424);
  v11 = sub_26C8C0((int)a1 - 1874919424 * (int)v8, HIDWORD(v10), 100, 0);
  v12 = v11;
  sub_26C8C0(v11, HIDWORD(v11), 100, 0);
  v40 = v6;
  v14 = v3 + a2;
  *(_WORD *)(v3 + a2 - 4) = word_2B4047[v13];
  v15 = sub_26C8C0(v10, HIDWORD(v10), 10000, 0);
  sub_26C8C0(v15, HIDWORD(v15), 100, 0);
  *(_WORD *)(v14 - 6) = word_2B4047[v16];
  v17 = sub_26C8C0(v10, HIDWORD(v10), 1000000, 0);
  sub_26C8C0(v17, HIDWORD(v17), 100, 0);
  *(_WORD *)(v14 - 8) = word_2B4047[v18];
  *(_WORD *)(v14 - 2) = word_2B4047[(_DWORD)v10 - 100 * v12];
  *(_WORD *)(v14 - 10) = word_2B4047[(unsigned int)sub_26C8C0(v10, HIDWORD(v10), 100000000, 0) % 0x64];
  v19 = sub_26C8C0(v10, HIDWORD(v10), 276447232, 23283);
  v20 = v19 - 100 * ((unsigned __int8)v19 / 0x64u);
  v21 = sub_26C8C0(v10, HIDWORD(v10), -727379968, 232);
  v22 = v21 - 100 * ((unsigned int)(5243 * ((unsigned __int16)v21 >> 2)) >> 17);
  v23 = sub_26C8C0(v10, HIDWORD(v10), 1410065408, 2);
  v24 = v3 - 16;
  v25 = word_2B4047[(unsigned __int8)v20];
  *(_WORD *)(v14 - 12) = word_2B4047[v23 % 0x64];
  *(_WORD *)(v14 - 14) = word_2B4047[(unsigned __int16)v22];
  v6 = v40;
  *(_WORD *)(a2 + v3 - 16) = v25;
  v26 = (unsigned __int16)v9;
  if ( (unsigned __int16)v9 > 0x63u )
  {
LABEL_12:
    v24 -= 2;
    v32 = (unsigned int)(5243 * (__int16)(v26 >> 2)) >> 17;
    *(_WORD *)(a2 + v24) = word_2B4047[(unsigned __int16)(v9 - 100 * v32)];
    v33 = (unsigned __int16)v32;
    if ( (unsigned __int16)v32 < 0xAu )
      goto LABEL_13;
LABEL_9:
    v34 = v24 - 2;
    *v6 = v34;
    result = word_2B4047[v33];
    *(_WORD *)(a2 + v34) = result;
    return result;
  }
LABEL_8:
  v32 = v9;
  v33 = (unsigned __int16)v9;
  if ( (unsigned __int16)v9 >= 0xAu )
    goto LABEL_9;
LABEL_13:
  result = v32 + 48;
  *v6 = v24 - 1;
  *(_BYTE *)(a2 + v24 - 1) = result;
  return result;
}
