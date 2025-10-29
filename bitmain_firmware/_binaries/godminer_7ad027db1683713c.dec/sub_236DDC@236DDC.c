int __fastcall sub_236DDC(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r9
  int v6; // r1
  __int64 v7; // r6
  unsigned int v8; // r8
  unsigned int v9; // r7
  unsigned __int64 v10; // kr18_8
  unsigned int v11; // kr20_4
  unsigned int v12; // r8
  unsigned int v13; // r11
  int v14; // r7
  unsigned __int64 v15; // kr50_8
  unsigned __int64 v16; // kr58_8
  __int64 v17; // kr60_8
  int v18; // r4
  int v19; // r6
  unsigned int v20; // r0
  unsigned int v21; // r7
  __int64 v22; // kr98_8
  __int64 v23; // r0
  unsigned __int64 v24; // krA0_8
  bool v25; // cf
  __int64 v26; // r0
  int v27; // r11
  __int64 v28; // r0
  char v29; // r5
  int v31; // [sp+8h] [bp-34h]
  int v32; // [sp+Ch] [bp-30h]
  _BYTE v33[39]; // [sp+11h] [bp-2Bh] BYREF
  int v34; // [sp+38h] [bp-4h] BYREF

  v4 = a1;
  v34 = 39;
  v5 = HIDWORD(a1);
  if ( a2 >= 0x80000 )
  {
    v9 = (3679105234LL * HIDWORD(a1) + ((3679105234u * (unsigned __int64)(unsigned int)a1) >> 32)) >> 32;
    LODWORD(a1) = (unsigned __int64)(3679105234LL * a1) >> 32;
    v10 = __PAIR64__(v9, 1980704062 * v4) + (unsigned int)a1;
    v11 = 1980704062 * HIDWORD(a1) + ((1980704062 * (unsigned __int64)v4) >> 32) + HIDWORD(v10);
    LODWORD(a1) = (1980704062LL * HIDWORD(a1)
                 + __PAIR64__(
                     __CFADD__(__CFADD__(1980704062 * v4, (_DWORD)a1), v9)
                   | (unsigned __int8)__CFADD__((1980704062 * (unsigned __int64)v4) >> 32, HIDWORD(v10)),
                     ((1980704062 * (unsigned __int64)v4) >> 32) + HIDWORD(v10))) >> 32;
    v12 = (3895859571LL * HIDWORD(a1) + ((3895859571u * (unsigned __int64)v4) >> 32)) >> 32;
    v13 = (3895859571u * __PAIR64__(HIDWORD(a1), v4)) >> 32;
    HIDWORD(a1) = (2509829361LL * v4 + __PAIR64__(v12, v13)) >> 32;
    v14 = (2509829361LL * v5
         + __PAIR64__(
             __CFADD__(__CFADD__(-1785137935 * v4, v13), v12)
           | (unsigned __int8)__CFADD__(
                                (2509829361u * (unsigned __int64)v4) >> 32,
                                __CFADD__(-1785137935 * v4, v13) + v12),
             HIDWORD(a1))) >> 32;
    HIDWORD(a1) += -1785137935 * v5;
    v32 = HIDWORD(a1) - 615862062 * v4;
    v31 = v10 + __CFADD__(HIDWORD(a1), -615862062 * v4) + v14;
    v15 = __PAIR64__(
            a1,
            __CFADD__(__CFADD__(HIDWORD(a1), -615862062 * v4), v14)
          | (unsigned __int8)__CFADD__((_DWORD)v10, __CFADD__(HIDWORD(a1), -615862062 * v4) + v14))
        + v11;
    v16 = 3679105234LL * HIDWORD(a2) + ((3679105234u * (unsigned __int64)(unsigned int)a2) >> 32);
    v17 = 1980704062LL * (unsigned int)a2;
    v18 = (v15 + __PAIR64__((int)v17 + (int)v16, -615862062 * (int)a2)) >> 32;
    v19 = v15 - 615862062 * a2;
    v20 = (3895859571LL * HIDWORD(a2) + ((3895859571u * (unsigned __int64)(unsigned int)a2) >> 32)) >> 32;
    v21 = (3895859571u * a2) >> 32;
    v22 = 2509829361LL * (unsigned int)a2;
    v25 = __CFADD__(__CFADD__((_DWORD)v22, v21), v20);
    v24 = v22 + __PAIR64__(v20, v21);
    LODWORD(v23) = (v22 + __PAIR64__(v20, v21)) >> 32;
    HIDWORD(v23) = v25 | __CFADD__(HIDWORD(v22), (_DWORD)v23);
    v26 = 2509829361LL * HIDWORD(a2)
        + v23
        + (__CFADD__(__CFADD__(v32, -399107725 * a2), v31)
         | (unsigned __int8)__CFADD__((_DWORD)v24, __CFADD__(v32, -399107725 * a2) + v31));
    v25 = __CFADD__(__CFADD__(v19, (_DWORD)v26), v18);
    LODWORD(v26) = __CFADD__(v19, (_DWORD)v26) + v18;
    LODWORD(v7) = ((unsigned int)(HIDWORD(v26) + v26) >> 30)
                | (4
                 * ((v25 | __CFADD__(HIDWORD(v26), (_DWORD)v26))
                  + 1980704062 * HIDWORD(a2)
                  + ((v17 + v16) >> 32)
                  + (__CFADD__(__CFADD__((_DWORD)v15, -615862062 * a2), HIDWORD(v15)) | __CFADD__(v17 + v16, v18))));
    HIDWORD(v7) = (__int64)(1980704062LL * HIDWORD(a2)
                          + __PAIR64__(
                              __CFADD__(__CFADD__((_DWORD)v17, (_DWORD)v16), HIDWORD(v16))
                            | (unsigned __int8)__CFADD__(HIDWORD(v17), (v17 + v16) >> 32),
                              (v17 + v16) >> 32)
                          + (__CFADD__(__CFADD__((_DWORD)v15, -615862062 * a2), HIDWORD(v15))
                           | (unsigned __int8)__CFADD__(v17 + v16, v18))
                          + (v25 | (unsigned __int8)__CFADD__(HIDWORD(v26), (_DWORD)v26))) >> 30;
    v8 = (unsigned int)((1980704062LL * HIDWORD(a2)
                       + __PAIR64__(
                           __CFADD__(__CFADD__((_DWORD)v17, (_DWORD)v16), HIDWORD(v16))
                         | (unsigned __int8)__CFADD__(HIDWORD(v17), (v17 + v16) >> 32),
                           (v17 + v16) >> 32)
                       + (__CFADD__(__CFADD__((_DWORD)v15, -615862062 * a2), HIDWORD(v15))
                        | (unsigned __int8)__CFADD__(v17 + v16, v18))
                       + (v25 | (unsigned __int8)__CFADD__(HIDWORD(v26), (_DWORD)v26))) >> 32) >> 30;
  }
  else
  {
    LODWORD(v7) = sub_25A4F8(a1 >> 19, (HIDWORD(a1) >> 19) | ((_DWORD)a2 << 13), 0x1158E460913DuLL);
    HIDWORD(v7) = v6;
    v8 = 0;
  }
  v27 = a3;
  sub_2368B0(0x7538DCFB76180000LL * v7 + __PAIR64__(v5, v4), (int)v33, &v34);
  if ( (unsigned int)v7 | v8 | HIDWORD(v7) )
  {
    memset(&v33[20], 48, v34 - 20);
    v34 = 20;
    LODWORD(v28) = sub_25A4F8(v7 >> 19, (HIDWORD(v7) >> 19) | (v8 << 13), 0x1158E460913DuLL);
    v29 = v28;
    sub_2368B0(0x7538DCFB76180000LL * v28 + v7, (int)v33, &v34);
    v27 = a3;
    if ( __PAIR64__((HIDWORD(v7) >> 19) | (v8 << 13), v7 >> 19) >= 0x1158E460913DLL )
    {
      memset(&v33[1], 48, v34 - 1);
      v34 = 0;
      v33[0] = v29 | 0x30;
    }
  }
  return core::fmt::Formatter::pad_integral(a4, v27, aLibraryCoreSrc, 0, (int)&v33[v34], 39 - v34);
}
