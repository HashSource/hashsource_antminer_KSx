int __fastcall sub_249954(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r9
  __int64 v6; // r6
  unsigned int v7; // r8
  unsigned int v8; // r7
  unsigned __int64 v9; // kr18_8
  unsigned int v10; // kr20_4
  unsigned int v11; // r8
  unsigned int v12; // r11
  int v13; // r7
  unsigned __int64 v14; // kr50_8
  unsigned __int64 v15; // kr58_8
  __int64 v16; // kr60_8
  int v17; // r4
  int v18; // r6
  unsigned int v19; // r0
  unsigned int v20; // r7
  __int64 v21; // kr98_8
  __int64 v22; // r0
  unsigned __int64 v23; // krA0_8
  bool v24; // cf
  __int64 v25; // r0
  int v26; // r11
  __int64 v27; // r0
  char v28; // r5
  int v30; // [sp+8h] [bp-34h]
  int v31; // [sp+Ch] [bp-30h]
  _BYTE v32[39]; // [sp+11h] [bp-2Bh] BYREF
  int v33; // [sp+38h] [bp-4h] BYREF

  v4 = a1;
  v33 = 39;
  v5 = HIDWORD(a1);
  if ( a2 >= 0x80000 )
  {
    v8 = (3679105234LL * HIDWORD(a1) + ((3679105234u * (unsigned __int64)(unsigned int)a1) >> 32)) >> 32;
    LODWORD(a1) = (unsigned __int64)(3679105234LL * a1) >> 32;
    v9 = __PAIR64__(v8, 1980704062 * v4) + (unsigned int)a1;
    v10 = 1980704062 * HIDWORD(a1) + ((1980704062 * (unsigned __int64)v4) >> 32) + HIDWORD(v9);
    LODWORD(a1) = (1980704062LL * HIDWORD(a1)
                 + __PAIR64__(
                     __CFADD__(__CFADD__(1980704062 * v4, (_DWORD)a1), v8)
                   | (unsigned __int8)__CFADD__((1980704062 * (unsigned __int64)v4) >> 32, HIDWORD(v9)),
                     ((1980704062 * (unsigned __int64)v4) >> 32) + HIDWORD(v9))) >> 32;
    v11 = (3895859571LL * HIDWORD(a1) + ((3895859571u * (unsigned __int64)v4) >> 32)) >> 32;
    v12 = (3895859571u * __PAIR64__(HIDWORD(a1), v4)) >> 32;
    HIDWORD(a1) = (2509829361LL * v4 + __PAIR64__(v11, v12)) >> 32;
    v13 = (2509829361LL * v5
         + __PAIR64__(
             __CFADD__(__CFADD__(-1785137935 * v4, v12), v11)
           | (unsigned __int8)__CFADD__(
                                (2509829361u * (unsigned __int64)v4) >> 32,
                                __CFADD__(-1785137935 * v4, v12) + v11),
             HIDWORD(a1))) >> 32;
    HIDWORD(a1) += -1785137935 * v5;
    v31 = HIDWORD(a1) - 615862062 * v4;
    v30 = v9 + __CFADD__(HIDWORD(a1), -615862062 * v4) + v13;
    v14 = __PAIR64__(
            a1,
            __CFADD__(__CFADD__(HIDWORD(a1), -615862062 * v4), v13)
          | (unsigned __int8)__CFADD__((_DWORD)v9, __CFADD__(HIDWORD(a1), -615862062 * v4) + v13))
        + v10;
    v15 = 3679105234LL * HIDWORD(a2) + ((3679105234u * (unsigned __int64)(unsigned int)a2) >> 32);
    v16 = 1980704062LL * (unsigned int)a2;
    v17 = (v14 + __PAIR64__((int)v16 + (int)v15, -615862062 * (int)a2)) >> 32;
    v18 = v14 - 615862062 * a2;
    v19 = (3895859571LL * HIDWORD(a2) + ((3895859571u * (unsigned __int64)(unsigned int)a2) >> 32)) >> 32;
    v20 = (3895859571u * a2) >> 32;
    v21 = 2509829361LL * (unsigned int)a2;
    v24 = __CFADD__(__CFADD__((_DWORD)v21, v20), v19);
    v23 = v21 + __PAIR64__(v19, v20);
    LODWORD(v22) = (v21 + __PAIR64__(v19, v20)) >> 32;
    HIDWORD(v22) = v24 | __CFADD__(HIDWORD(v21), (_DWORD)v22);
    v25 = 2509829361LL * HIDWORD(a2)
        + v22
        + (__CFADD__(__CFADD__(v31, -399107725 * a2), v30)
         | (unsigned __int8)__CFADD__((_DWORD)v23, __CFADD__(v31, -399107725 * a2) + v30));
    v24 = __CFADD__(__CFADD__(v18, (_DWORD)v25), v17);
    LODWORD(v25) = __CFADD__(v18, (_DWORD)v25) + v17;
    LODWORD(v6) = ((unsigned int)(HIDWORD(v25) + v25) >> 30)
                | (4
                 * ((v24 | __CFADD__(HIDWORD(v25), (_DWORD)v25))
                  + 1980704062 * HIDWORD(a2)
                  + ((v16 + v15) >> 32)
                  + (__CFADD__(__CFADD__((_DWORD)v14, -615862062 * a2), HIDWORD(v14)) | __CFADD__(v16 + v15, v17))));
    HIDWORD(v6) = (__int64)(1980704062LL * HIDWORD(a2)
                          + __PAIR64__(
                              __CFADD__(__CFADD__((_DWORD)v16, (_DWORD)v15), HIDWORD(v15))
                            | (unsigned __int8)__CFADD__(HIDWORD(v16), (v16 + v15) >> 32),
                              (v16 + v15) >> 32)
                          + (__CFADD__(__CFADD__((_DWORD)v14, -615862062 * a2), HIDWORD(v14))
                           | (unsigned __int8)__CFADD__(v16 + v15, v17))
                          + (v24 | (unsigned __int8)__CFADD__(HIDWORD(v25), (_DWORD)v25))) >> 30;
    v7 = (unsigned int)((1980704062LL * HIDWORD(a2)
                       + __PAIR64__(
                           __CFADD__(__CFADD__((_DWORD)v16, (_DWORD)v15), HIDWORD(v15))
                         | (unsigned __int8)__CFADD__(HIDWORD(v16), (v16 + v15) >> 32),
                           (v16 + v15) >> 32)
                       + (__CFADD__(__CFADD__((_DWORD)v14, -615862062 * a2), HIDWORD(v14))
                        | (unsigned __int8)__CFADD__(v16 + v15, v17))
                       + (v24 | (unsigned __int8)__CFADD__(HIDWORD(v25), (_DWORD)v25))) >> 32) >> 30;
  }
  else
  {
    v6 = sub_26D070(a1 >> 19, (HIDWORD(a1) >> 19) | ((_DWORD)a2 << 13), -463433411, 4440);
    v7 = 0;
  }
  v26 = a3;
  sub_249428(0x7538DCFB76180000LL * v6 + __PAIR64__(v5, v4), (int)v32, &v33);
  if ( (unsigned int)v6 | v7 | HIDWORD(v6) )
  {
    memset(&v32[20], 48, v33 - 20);
    v33 = 20;
    v27 = sub_26D070(v6 >> 19, (HIDWORD(v6) >> 19) | (v7 << 13), -463433411, 4440);
    v28 = v27;
    sub_249428(0x7538DCFB76180000LL * v27 + v6, (int)v32, &v33);
    v26 = a3;
    if ( __PAIR64__((HIDWORD(v6) >> 19) | (v7 << 13), v6 >> 19) >= 0x1158E460913DLL )
    {
      memset(&v32[1], 48, v33 - 1);
      v33 = 0;
      v32[0] = v28 | 0x30;
    }
  }
  return core::fmt::Formatter::pad_integral(a4, v26, aLibraryCoreSrc, 0, &v32[v33], 39 - v33);
}
