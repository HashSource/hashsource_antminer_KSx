const char *__fastcall sub_202654(int *a1, unsigned int *a2, char *a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r6
  int v6; // r11
  int v7; // r10
  int v8; // r4
  int v9; // r5
  unsigned int *v10; // r9
  int v11; // r0
  unsigned __int64 v12; // kr00_8
  const void *v13; // r0
  int v14; // r1
  unsigned int v15; // r5
  const char *v16; // r0
  int v17; // r6
  int v18; // r0
  int v20; // r11
  unsigned int v21; // r1
  int v22; // r9
  unsigned int v23; // r7
  unsigned int *v24; // r4
  int v25; // r8
  int v26; // r0
  unsigned __int64 v27; // kr08_8
  char *bytes_at_until; // r0
  unsigned int v29; // r1
  unsigned int v30; // r6
  char *v31; // r10
  int v32; // r0
  bool v33; // zf
  int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r4
  unsigned __int8 *v37; // r7
  int v38; // r9
  __int64 v39; // kr10_8
  int bytes_at; // r0
  unsigned int v41; // r1
  unsigned int v42; // r0
  int v43; // r4
  unsigned int v44; // r6
  __int64 v45; // kr18_8
  void *v46; // [sp+14h] [bp-2B18h]
  int *v48; // [sp+1Ch] [bp-2B10h]
  unsigned int v49; // [sp+1Ch] [bp-2B10h]
  int v50; // [sp+20h] [bp-2B0Ch]
  int v52; // [sp+28h] [bp-2B04h]
  void *s2a; // [sp+2Ch] [bp-2B00h]
  unsigned int v55; // [sp+30h] [bp-2AFCh]
  unsigned int v56; // [sp+30h] [bp-2AFCh]
  int v58; // [sp+38h] [bp-2AF4h] BYREF
  char v59; // [sp+3Ch] [bp-2AF0h]
  int v60; // [sp+40h] [bp-2AECh]
  _DWORD s[2746]; // [sp+44h] [bp-2AE8h] BYREF

  v50 = a1[6];
  v48 = a1 + 2;
  v52 = a1[7];
  if ( !v52 )
    goto LABEL_14;
  v4 = *a1;
  if ( !*a1 )
  {
    v18 = 40 * v52;
    do
      v18 -= 40;
    while ( v18 );
LABEL_14:
    v17 = 0;
    if ( a4 >= 7 && !bcmp(&unk_2B2AB9, a3, 7u) )
    {
      if ( a4 >= 8 && a3[7] <= -65 )
        core::str::slice_error_fail(a3, a4, 7u, a4, (int)&off_2EAEC4);
      if ( v52 )
      {
        if ( *a1 )
        {
          v20 = *a1;
          v46 = a3 + 7;
          v21 = v48[2];
          v22 = *v48;
          v23 = v48[1];
          s2a = (void *)v48[3];
          v49 = a1[1];
          v56 = v21;
          v24 = (unsigned int *)(v50 + 16);
          v25 = 40 * v52;
          while ( 1 )
          {
            v26 = *(v24 - 4);
            v27 = __CFADD__(v22, v26) + (unsigned __int64)v23;
            if ( !HIDWORD(v27) )
            {
              bytes_at_until = (char *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
                                         v20,
                                         v49,
                                         v22 + v26,
                                         v27,
                                         v56,
                                         (int)s2a,
                                         0);
              if ( bytes_at_until )
              {
                v30 = v29;
                if ( v29 >= 8 )
                {
                  v31 = bytes_at_until;
                  v32 = bcmp(&unk_2B0768, bytes_at_until, 8u);
                  v33 = v32 == 0;
                  if ( !v32 )
                    v33 = v30 - 1 == a4;
                  if ( v33 && !bcmp(v31 + 8, v46, v30 - 8) )
                    break;
                }
              }
            }
            v25 -= 40;
            v24 += 10;
            if ( !v25 )
              return 0;
          }
          if ( *(v24 - 3) == 8 )
            return 0;
          v17 = 0;
          bytes_at = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a1[14], a1[15], *v24, 0, v24[1], 0);
          if ( bytes_at && v41 >= 8 && *(_QWORD *)bytes_at == 1112099930 && (v41 & 0xFFFFFFFC) != 8 )
          {
            v43 = bytes_at + 12;
            v42 = *(_DWORD *)(bytes_at + 8);
            v44 = v41 - 12;
            if ( v41 < 0xC )
              v44 = 0;
            v45 = sub_1FBEF8(a2, bswap32(v42));
            v17 = sub_202DDC(v43, v44, v45, HIDWORD(v45));
            if ( v17 )
              return (const char *)v45;
          }
        }
        else
        {
          v34 = 40 * v52;
          do
            v34 -= 40;
          while ( v34 );
        }
      }
    }
    return (const char *)v17;
  }
  v5 = a1[1];
  v6 = *v48;
  v7 = a1[3];
  v8 = a1[5];
  v9 = 40 * v52;
  v55 = a1[4];
  v10 = (unsigned int *)(v50 + 16);
  while ( 1 )
  {
    v11 = *(v10 - 4);
    v12 = __CFADD__(v6, v11) + (unsigned __int64)(unsigned int)v7;
    if ( !HIDWORD(v12) )
    {
      v13 = (const void *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
                            v4,
                            v5,
                            v6 + v11,
                            v12,
                            v55,
                            v8,
                            0);
      if ( v13 )
      {
        if ( v14 == a4 && !bcmp(v13, a3, a4) )
          break;
      }
    }
    v9 -= 40;
    v10 += 10;
    if ( !v9 )
      goto LABEL_14;
  }
  if ( *(v10 - 3) == 8 )
  {
    v15 = 0;
    v16 = aRustc9eb3afe9e;
    if ( (*((_BYTE *)v10 - 7) & 8) == 0 )
      return v16;
  }
  else
  {
    v17 = 0;
    v16 = (const char *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a1[14], a1[15], *v10, 0, v10[1], 0);
    if ( !v16 )
      return (const char *)v17;
    v15 = v35;
    if ( (*((_BYTE *)v10 - 7) & 8) == 0 )
      return v16;
  }
  v36 = v15 - 12;
  v17 = 0;
  v37 = aRustc9eb3afe9e;
  if ( v15 >= 0xC )
    v37 = (unsigned __int8 *)(v16 + 12);
  else
    v36 = 0;
  if ( v15 >= 0xC && *(_DWORD *)v16 == 1 )
  {
    v39 = sub_1FBEF8(a2, *((_DWORD *)v16 + 1));
    v38 = v39;
    miniz_oxide::inflate::core::DecompressorOxide::new(s);
    v17 = 0;
    miniz_oxide::inflate::core::decompress((int)&v58, (int)s, v37, v36, v39, HIDWORD(v39), 0, 5);
    if ( !v59 && v58 == v36 )
    {
      if ( v60 != HIDWORD(v39) )
        return 0;
      return (const char *)v38;
    }
  }
  return (const char *)v17;
}
