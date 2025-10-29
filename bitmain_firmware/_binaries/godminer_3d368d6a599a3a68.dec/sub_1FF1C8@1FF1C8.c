int __fastcall sub_1FF1C8(int *a1, unsigned int *a2, char *a3, size_t a4)
{
  int v4; // r7
  int v5; // r6
  int v6; // r11
  unsigned int v7; // r10
  int v8; // r4
  int v9; // r5
  _DWORD *v10; // r9
  int v11; // r0
  unsigned __int64 v12; // kr00_8
  const void *v13; // r0
  int v14; // r1
  unsigned int v15; // r5
  __int64 v16; // r0
  int v17; // r6
  int v18; // r0
  int v20; // r11
  int v21; // r1
  int v22; // r9
  unsigned int v23; // r7
  _DWORD *v24; // r4
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
  int v35; // r4
  char *v36; // r7
  int v37; // r9
  __int64 v38; // kr10_8
  __int64 bytes_at; // r0
  int v40; // r4
  int v41; // r6
  __int64 v42; // kr18_8
  void *v43; // [sp+14h] [bp-2B18h]
  int *v45; // [sp+1Ch] [bp-2B10h]
  int v46; // [sp+1Ch] [bp-2B10h]
  int v47; // [sp+20h] [bp-2B0Ch]
  int v49; // [sp+28h] [bp-2B04h]
  void *s2a; // [sp+2Ch] [bp-2B00h]
  int v52; // [sp+30h] [bp-2AFCh]
  int v53; // [sp+30h] [bp-2AFCh]
  int v55; // [sp+38h] [bp-2AF4h] BYREF
  char v56; // [sp+3Ch] [bp-2AF0h]
  int v57; // [sp+40h] [bp-2AECh]
  _BYTE s[10984]; // [sp+44h] [bp-2AE8h] BYREF

  v47 = a1[6];
  v45 = a1 + 2;
  v49 = a1[7];
  if ( !v49 )
    goto LABEL_14;
  v4 = *a1;
  if ( !*a1 )
  {
    v18 = 40 * v49;
    do
      v18 -= 40;
    while ( v18 );
LABEL_14:
    v17 = 0;
    if ( a4 >= 7 && !bcmp(&unk_2A7C59, a3, 7u) )
    {
      if ( a4 >= 8 && a3[7] <= -65 )
        core::str::slice_error_fail((int)a3);
      if ( v49 )
      {
        if ( *a1 )
        {
          v20 = *a1;
          v43 = a3 + 7;
          v21 = v45[2];
          v22 = *v45;
          v23 = v45[1];
          s2a = (void *)v45[3];
          v46 = a1[1];
          v53 = v21;
          v24 = (_DWORD *)(v47 + 16);
          v25 = 40 * v49;
          while ( 1 )
          {
            v26 = *(v24 - 4);
            v27 = __CFADD__(v22, v26) + (unsigned __int64)v23;
            if ( !HIDWORD(v27) )
            {
              bytes_at_until = (char *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
                                         v20,
                                         v46,
                                         v22 + v26,
                                         v27,
                                         v53,
                                         s2a,
                                         0);
              if ( bytes_at_until )
              {
                v30 = v29;
                if ( v29 >= 8 )
                {
                  v31 = bytes_at_until;
                  v32 = bcmp(&unk_2A5908, bytes_at_until, 8u);
                  v33 = v32 == 0;
                  if ( !v32 )
                    v33 = v30 - 1 == a4;
                  if ( v33 && !bcmp(v31 + 8, v43, v30 - 8) )
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
          if ( (_DWORD)bytes_at
            && HIDWORD(bytes_at) >= 8
            && *(_QWORD *)bytes_at == 1112099930
            && (HIDWORD(bytes_at) & 0xFFFFFFFC) != 8 )
          {
            v40 = bytes_at + 12;
            LODWORD(bytes_at) = *(_DWORD *)(bytes_at + 8);
            v41 = HIDWORD(bytes_at) - 12;
            if ( HIDWORD(bytes_at) < 0xC )
              v41 = 0;
            v42 = sub_1F8A6C(a2, bswap32(bytes_at));
            v17 = sub_1FF950(v40, v41, v42, HIDWORD(v42));
            if ( v17 )
              return v42;
          }
        }
        else
        {
          v34 = 40 * v49;
          do
            v34 -= 40;
          while ( v34 );
        }
      }
    }
    return v17;
  }
  v5 = a1[1];
  v6 = *v45;
  v7 = a1[3];
  v8 = a1[5];
  v9 = 40 * v49;
  v52 = a1[4];
  v10 = (_DWORD *)(v47 + 16);
  while ( 1 )
  {
    v11 = *(v10 - 4);
    v12 = __CFADD__(v6, v11) + (unsigned __int64)v7;
    if ( !HIDWORD(v12) )
    {
      v13 = (const void *)<&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until(
                            v4,
                            v5,
                            v6 + v11,
                            v12,
                            v52,
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
    LODWORD(v16) = aRustc9eb3afe9e;
    if ( (*((_BYTE *)v10 - 7) & 8) == 0 )
      return v16;
  }
  else
  {
    v17 = 0;
    v16 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a1[14], a1[15], *v10, 0, v10[1], 0);
    if ( !(_DWORD)v16 )
      return v17;
    v15 = HIDWORD(v16);
    if ( (*((_BYTE *)v10 - 7) & 8) == 0 )
      return v16;
  }
  v35 = v15 - 12;
  v17 = 0;
  v36 = aRustc9eb3afe9e;
  if ( v15 >= 0xC )
    v36 = (char *)(v16 + 12);
  else
    v35 = 0;
  if ( v15 >= 0xC && *(_DWORD *)v16 == 1 )
  {
    v38 = sub_1F8A6C(a2, *(_DWORD *)(v16 + 4));
    v37 = v38;
    miniz_oxide::inflate::core::DecompressorOxide::new(s);
    v17 = 0;
    miniz_oxide::inflate::core::decompress((int)&v55, (int)s, v36, v35, v38, SHIDWORD(v38), 0, 5);
    if ( !v56 && v55 == v35 )
    {
      if ( v57 != HIDWORD(v38) )
        return 0;
      return v37;
    }
  }
  return v17;
}
