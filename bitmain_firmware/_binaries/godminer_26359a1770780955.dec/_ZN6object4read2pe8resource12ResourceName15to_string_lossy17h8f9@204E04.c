const char *__fastcall object::read::pe::resource::ResourceName::to_string_lossy(
        _DWORD *a1,
        unsigned int *a2,
        int a3,
        unsigned int a4)
{
  unsigned int v4; // r8
  unsigned int v5; // r1
  bool v7; // cf
  const char *result; // r0
  unsigned int v9; // r7
  unsigned int v10; // r3
  unsigned int v11; // r4
  unsigned __int16 *v12; // r5
  int v13; // r2
  unsigned __int16 *v14; // r4
  unsigned int v15; // r6
  unsigned int v16; // r0
  int v17; // r10
  size_t v18; // r7
  unsigned int v19; // t1
  unsigned int v20; // r0
  unsigned int v21; // t1
  int v22; // r1
  unsigned int v23; // r0
  int v24; // r6
  int v25; // r1
  int v26; // r1
  int v27; // r2
  const char *v28; // [sp+0h] [bp-14h] BYREF
  int v29; // [sp+4h] [bp-10h]
  int v30; // [sp+8h] [bp-Ch]
  int src; // [sp+10h] [bp-4h] BYREF

  v5 = *a2;
  v7 = a4 >= v5;
  result = (const char *)&unk_2A7B61;
  if ( a4 >= v5 )
    v7 = a4 - v5 >= 2;
  if ( v7
    && (result = aInvalidResourc_2, v5 <= 0xFFFFFFFD)
    && (v9 = v5 + 2, v7 = a4 >= v5 + 2, v10 = a4 - (v5 + 2), v7)
    && (v11 = *(unsigned __int16 *)(a3 + v5), v10 >= 2 * v11)
    && (v12 = (unsigned __int16 *)(a3 + v9), ((a3 + v9) & 1) == 0) )
  {
    v29 = 1;
    v13 = (v11 & 1) + (v11 >> 1);
    v30 = 0;
    v28 = 0;
    if ( v13 )
      sub_7D1C0((size_t *)&v28, 0, v13);
    v14 = &v12[v11];
LABEL_18:
    while ( v12 != v14 )
    {
      v19 = *v12++;
      v15 = v19;
      if ( (v19 & 0xF800) == 0xD800 )
      {
LABEL_20:
        v17 = 0;
        if ( (unsigned __int16)v15 >> 10 <= 0x36u )
        {
          if ( v12 == v14 )
          {
            v12 = v14;
          }
          else
          {
            v21 = *v12++;
            v20 = v21;
            v17 = 1;
            if ( (unsigned __int16)(v21 + 0x2000) >= 0xFC00u )
            {
              v22 = v20 & 0x3C0;
              HIBYTE(src) = v20 & 0x3F | 0x80;
              v23 = ((v15 & 0x3FF) << 10) + 0x10000;
              v18 = 4;
              LOBYTE(src) = (v23 >> 18) | 0xF0;
              BYTE1(src) = (v23 >> 12) & 0x3F | 0x80;
              BYTE2(src) = ((v23 | v22) >> 6) & 0x3F | 0x80;
              goto LABEL_28;
            }
            v4 = v20;
          }
        }
        src = 0;
        v16 = 65533;
LABEL_26:
        BYTE2(src) = v16 & 0x3F | 0x80;
        v18 = 3;
        LOBYTE(src) = (v16 >> 12) | 0xE0;
        BYTE1(src) = (v16 >> 6) & 0x3F | 0x80;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v16 = (unsigned __int16)v15;
        if ( (unsigned __int16)v15 < 0x80u )
          break;
        v17 = 0;
        src = 0;
        if ( (unsigned __int16)v15 >= 0x800u )
          goto LABEL_26;
        v18 = 2;
        BYTE1(src) = v15 & 0x3F | 0x80;
        LOBYTE(src) = (v15 >> 6) | 0xC0;
LABEL_28:
        v17 = 0;
LABEL_29:
        v24 = v30;
        if ( (unsigned int)&v28[-v30] < v18 )
        {
          sub_7D1C0((size_t *)&v28, v30, v18);
          v24 = v30;
        }
        memcpy((void *)(v29 + v24), &src, v18);
        v30 = v24 + v18;
        if ( !v17 )
          goto LABEL_18;
        v15 = v4;
        if ( (v4 & 0xF800) == 0xD800 )
          goto LABEL_20;
      }
      v25 = v30;
      if ( (const char *)v30 == v28 )
      {
        sub_202690((unsigned int *)&v28, v30);
        v25 = v30;
      }
      *(_BYTE *)(v29 + v25) = v15;
      v30 = v25 + 1;
    }
    result = v28;
    v26 = v29;
    v27 = v30;
    *a1 = 0;
    a1[1] = result;
    a1[2] = v26;
    a1[3] = v27;
  }
  else
  {
    *a1 = 1;
    a1[1] = result;
    a1[2] = 28;
  }
  return result;
}
