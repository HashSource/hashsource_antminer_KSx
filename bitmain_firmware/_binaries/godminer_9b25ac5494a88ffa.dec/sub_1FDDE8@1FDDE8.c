unsigned int __fastcall sub_1FDDE8(_DWORD *a1, int a2, int a3)
{
  __int64 bytes_at; // r0
  int v7; // r7
  unsigned int result; // r0
  bool v9; // zf
  int v10; // r9
  int v11; // r6
  const char *v12; // r12
  unsigned int v13; // r10
  unsigned int v14; // r8
  __int64 v15; // r0
  unsigned int v16; // r0
  int v17; // r2
  const char *v18; // r6
  __int64 v19; // r0
  const char *v20; // r0
  int v21; // r1
  int v22; // r0
  __int64 v23; // r0
  int v24; // r3
  const char *v25; // r0
  int v26; // r6
  int v27; // r10
  int v28; // r1
  const char *v29; // r7
  __int64 v30; // r0
  __int64 v31; // r8
  unsigned int v32; // r0
  _DWORD *v33; // r7
  int v34; // r0
  bool v35; // zf
  int v36; // r0
  const char *v37; // r7
  int v38; // r0
  int v39; // r6
  const char *v40; // r1
  int v41; // r2
  int v42; // r10
  const char *v43; // r9
  __int64 v44; // r0
  unsigned int v45; // r0
  _DWORD *v46; // r7
  int v47; // r10
  int v48; // r0
  bool v49; // zf
  int v50; // r0
  int v51; // r0
  unsigned int v52; // r10
  int v53; // r0
  char v54; // r2
  int v55; // r1
  int v56; // r10
  int v57; // r6
  int v58; // r7
  _DWORD *v59; // r0
  unsigned int *v60; // r3
  int v61; // r6
  char v62; // r2
  int v63; // r1
  int v64; // r7
  unsigned int *v65; // r10
  int v66; // r1
  _DWORD *v67; // r2
  unsigned int v68; // r1
  int v69; // r0
  int v70; // [sp+Ch] [bp-60h]
  int v71; // [sp+10h] [bp-5Ch]
  int v72; // [sp+10h] [bp-5Ch]
  int v73; // [sp+18h] [bp-54h]
  int v74; // [sp+18h] [bp-54h]
  _BOOL4 v75; // [sp+1Ch] [bp-50h]
  int v76; // [sp+20h] [bp-4Ch]
  int v77; // [sp+24h] [bp-48h]
  int v78; // [sp+2Ch] [bp-40h]
  int v79; // [sp+34h] [bp-38h]
  _BOOL4 v80; // [sp+38h] [bp-34h]
  int v81; // [sp+3Ch] [bp-30h]
  const char *v82; // [sp+40h] [bp-2Ch]
  const char *v83; // [sp+40h] [bp-2Ch]
  unsigned int v84; // [sp+44h] [bp-28h]
  int v85; // [sp+48h] [bp-24h]
  int v86; // [sp+4Ch] [bp-20h]
  int v87; // [sp+50h] [bp-1Ch]
  int v88; // [sp+58h] [bp-14h] BYREF
  _DWORD *v89; // [sp+5Ch] [bp-10h]
  int v90; // [sp+60h] [bp-Ch]
  char v91; // [sp+68h] [bp-4h] BYREF

  bytes_at = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, 0, 0, 52, 0);
  v7 = bytes_at;
  result = (_DWORD)bytes_at == 0 || HIDWORD(bytes_at) < 0x34;
  if ( result )
    goto LABEL_5;
  result = *(_DWORD *)v7;
  v9 = *(_DWORD *)v7 == 1179403647;
  if ( *(_DWORD *)v7 == 1179403647 )
  {
    result = *(unsigned __int8 *)(v7 + 4);
    v9 = result == 1;
  }
  if ( !v9
    || (result = *(unsigned __int8 *)(v7 + 5) - 1, result > 1)
    || (result = *(unsigned __int8 *)(v7 + 6), result != 1) )
  {
LABEL_5:
    a1[6] = 0;
    return result;
  }
  if ( *(_BYTE *)(v7 + 5) == 2 )
    goto LABEL_9;
  v10 = 0;
  v11 = *(_DWORD *)(v7 + 32);
  v12 = aRustc9eb3afe9e;
  if ( !v11 )
    goto LABEL_31;
  v13 = *(unsigned __int16 *)(v7 + 48);
  if ( !*(_WORD *)(v7 + 48) )
  {
    if ( *(_WORD *)(v7 + 46) != 40 )
      goto LABEL_9;
    v23 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, v11, 0, 40, 0);
    if ( !(_DWORD)v23 || HIDWORD(v23) < 0x28 )
      goto LABEL_9;
    v13 = *(_DWORD *)(v23 + 20);
    if ( v13 )
      goto LABEL_13;
    v12 = aRustc9eb3afe9e;
LABEL_31:
    v13 = 0;
    goto LABEL_32;
  }
  if ( *(_WORD *)(v7 + 46) != 40 )
    goto LABEL_9;
LABEL_13:
  v14 = 40 * v13;
  if ( !is_mul_ok(0x28u, v13) )
    goto LABEL_9;
  v15 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, v11, 0, v14, 0);
  if ( !(_DWORD)v15 || v14 > HIDWORD(v15) )
    goto LABEL_9;
  v12 = (const char *)v15;
  v16 = *(unsigned __int16 *)(v7 + 50);
  if ( v16 == 0xFFFF )
  {
    v17 = v11;
    v18 = v12;
    v19 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, v17, 0, 40, 0);
    if ( !(_DWORD)v19 || HIDWORD(v19) < 0x28 )
      goto LABEL_9;
    v16 = *(_DWORD *)(v19 + 24);
    v12 = v18;
  }
  if ( v16 && v16 < v13 )
  {
    v20 = &v12[40 * v16];
    if ( *((_DWORD *)v20 + 1) != 8 )
    {
      v21 = *((_DWORD *)v20 + 4);
      v22 = *((_DWORD *)v20 + 5);
      v79 = v21;
      v81 = v22 + v21;
      v78 = a2;
      v80 = __CFADD__(v22, v21);
      goto LABEL_33;
    }
LABEL_32:
    v81 = 0;
    v80 = 0;
    v79 = 0;
    v78 = 0;
LABEL_33:
    v24 = 5 * v13;
    v25 = v12;
    v84 = v13;
    v26 = 40 * v13;
    v27 = -1;
    do
    {
      if ( v26 == v10 )
      {
LABEL_49:
        v37 = v12 - 24;
        v38 = 8 * v24;
        v39 = -1;
        LODWORD(v31) = aRustc9eb3afe9e;
        v40 = v12;
        do
        {
          if ( !v38 )
          {
            v74 = 0;
            v77 = 0;
            v76 = 0;
            v75 = 0;
            v51 = 0;
            goto LABEL_65;
          }
          v41 = *((_DWORD *)v40 + 1);
          v38 -= 40;
          v37 += 40;
          ++v39;
          v40 += 40;
        }
        while ( v41 != 11 );
        v42 = v24;
        v43 = v12;
        v44 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(
                a2,
                a3,
                *(_DWORD *)v37,
                0,
                *((_DWORD *)v37 + 1),
                0);
        if ( (_DWORD)v44 )
        {
          LODWORD(v31) = v44;
          v45 = *((_DWORD *)v37 + 2);
          if ( v45 < v84 )
          {
            v12 = v43;
            LODWORD(v44) = &v43[40 * v45];
            if ( *(_DWORD *)(v44 + 4) == 3 )
            {
              v46 = v43 + 16;
              v71 = HIDWORD(v44) >> 4;
              v47 = 8 * v42;
              HIDWORD(v44) = *(_DWORD *)(v44 + 16);
              LODWORD(v44) = *(_DWORD *)(v44 + 20);
              v77 = HIDWORD(v44);
              v76 = v44 + HIDWORD(v44);
              v75 = __CFADD__((_DWORD)v44, HIDWORD(v44));
              while ( 1 )
              {
                v48 = *(v46 - 3);
                v49 = v48 == 18;
                if ( v48 == 18 )
                  v49 = v46[2] == v39;
                if ( v49 )
                {
                  v50 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, *v46, 0, v46[1], 0);
                  if ( !v50 )
                    break;
                  v12 = v43;
                  if ( (v50 & 3) != 0 )
                    break;
                }
                v47 -= 40;
                v46 += 10;
                if ( !v47 )
                  goto LABEL_81;
              }
            }
          }
        }
        goto LABEL_9;
      }
      v28 = *((_DWORD *)v25 + 1);
      v10 += 40;
      ++v27;
      v25 += 40;
    }
    while ( v28 != 2 );
    v29 = &v12[v10];
    v73 = v24;
    v82 = v12;
    v30 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(
            a2,
            a3,
            *(_DWORD *)&v12[v10 - 24],
            0,
            *(_DWORD *)&v12[v10 - 20],
            0);
    if ( (_DWORD)v30 )
    {
      v31 = v30;
      v32 = *((_DWORD *)v29 - 4);
      if ( v32 < v84 )
      {
        LODWORD(v30) = &v82[40 * v32];
        if ( *(_DWORD *)(v30 + 4) == 3 )
        {
          v71 = HIDWORD(v30) >> 4;
          HIDWORD(v30) = *(_DWORD *)(v30 + 16);
          LODWORD(v30) = *(_DWORD *)(v30 + 20);
          v77 = HIDWORD(v30);
          v76 = v30 + HIDWORD(v30);
          v75 = __CFADD__((_DWORD)v30, HIDWORD(v30));
          v33 = v82 + 16;
          while ( 1 )
          {
            v34 = *(v33 - 3);
            v35 = v34 == 18;
            if ( v34 == 18 )
              v35 = v33[2] == v27;
            if ( v35 )
            {
              v36 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, *v33, 0, v33[1], 0);
              if ( !v36 || (v36 & 3) != 0 )
                break;
            }
            v26 -= 40;
            v33 += 10;
            if ( !v26 )
            {
              v12 = v82;
              v24 = v73;
              if ( HIDWORD(v31) <= 0xF )
                goto LABEL_49;
LABEL_81:
              v74 = a2;
              v51 = v71;
LABEL_65:
              v52 = v84;
              HIDWORD(v31) = v31 + 16 * v51;
              v53 = 16 * v51;
              v83 = v12;
              do
              {
                if ( !v53 )
                {
                  v68 = 0;
                  v69 = 8;
                  v87 = 0;
                  v86 = 8;
                  v85 = 0;
                  goto LABEL_80;
                }
                v54 = *(_BYTE *)(v31 + 12);
                v55 = v31;
                v53 -= 16;
                LODWORD(v31) = v31 + 16;
              }
              while ( (v54 & 0xFu) - 3 < 0xFFFFFFFE || !*(_WORD *)(v55 + 14) );
              v56 = *(_DWORD *)(v31 - 16);
              v57 = *(_DWORD *)(v31 - 12);
              v58 = *(_DWORD *)(v31 - 8);
              v59 = (_DWORD *)_rust_alloc(0x60u);
              if ( !v59 )
                alloc::alloc::handle_alloc_error();
              v60 = (unsigned int *)&v88;
              *v59 = v57;
              v61 = 1;
              v59[1] = 0;
              v59[2] = v58;
              v59[3] = 0;
              v59[4] = v56;
              v90 = 1;
              v89 = v59;
              v88 = 4;
LABEL_71:
              v52 = v84;
              while ( (_DWORD)v31 != HIDWORD(v31) )
              {
                v62 = *(_BYTE *)(v31 + 12);
                v63 = v31;
                LODWORD(v31) = v31 + 16;
                if ( (v62 & 0xFu) - 3 >= 0xFFFFFFFE && *(_WORD *)(v63 + 14) )
                {
                  v64 = *(_DWORD *)(v31 - 12);
                  v72 = *(_DWORD *)(v31 - 16);
                  v70 = *(_DWORD *)(v31 - 8);
                  if ( v88 == v61 )
                  {
                    v65 = v60;
                    sub_797E4(v60, v61, 1);
                    v59 = v89;
                    v60 = v65;
                  }
                  v66 = 3 * v61++;
                  v59[2 * v66] = v64;
                  v67 = &v59[2 * v66];
                  v67[1] = 0;
                  v67[3] = 0;
                  v67[2] = v70;
                  v67[4] = v72;
                  v90 = v61;
                  goto LABEL_71;
                }
              }
              v69 = (int)v89;
              v68 = v90;
              v87 = v90;
              v86 = (int)v89;
              v85 = v88;
LABEL_80:
              v88 = (int)&v91;
              sub_1AFB5C(v69, v68, (int)&v88, 0, 32 - __clz(v68));
              a1[4] = v81;
              a1[5] = v80;
              a1[10] = v77;
              a1[11] = 0;
              a1[12] = v76;
              a1[13] = v75;
              a1[2] = v79;
              *a1 = v78;
              a1[1] = a3;
              a1[6] = v83;
              a1[8] = v74;
              a1[3] = 0;
              a1[7] = v52;
              a1[9] = a3;
              a1[14] = a2;
              a1[15] = a3;
              a1[16] = v85;
              a1[17] = v86;
              a1[18] = v87;
              return v85;
            }
          }
        }
      }
    }
  }
LABEL_9:
  a1[6] = 0;
  return 0;
}
