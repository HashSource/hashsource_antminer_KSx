unsigned int __fastcall sub_1EBF04(int *a1, int a2, unsigned int a3)
{
  int bytes_at; // r7
  unsigned int v7; // r1
  unsigned int result; // r0
  bool v9; // zf
  int v10; // r9
  unsigned int v11; // r6
  const char *v12; // r12
  unsigned int v13; // r10
  unsigned int v14; // r8
  int v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r0
  unsigned int v18; // r2
  const char *v19; // r6
  int v20; // r0
  unsigned int v21; // r1
  const char *v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r1
  int v27; // r3
  const char *v28; // r0
  int v29; // r6
  int v30; // r10
  int v31; // r1
  const char *v32; // r7
  int v33; // r0
  unsigned int v34; // r1
  const char *v35; // r8
  unsigned int v36; // r9
  unsigned int v37; // r0
  const char *v38; // r0
  int v39; // r1
  int v40; // r0
  unsigned int *v41; // r7
  int v42; // r0
  bool v43; // zf
  int v44; // r0
  unsigned int *v45; // r7
  int v46; // r0
  int v47; // r6
  const char *v48; // r1
  int v49; // r2
  int v50; // r10
  const char *v51; // r9
  int v52; // r0
  unsigned int v53; // r1
  unsigned int v54; // r0
  const char *v55; // r0
  unsigned int *v56; // r7
  int v57; // r10
  int v58; // r1
  int v59; // r0
  int v60; // r0
  bool v61; // zf
  int v62; // r0
  unsigned int v63; // r0
  int v64; // r10
  const char *v65; // r9
  int v66; // r0
  char v67; // r2
  const char *v68; // r1
  int v69; // r10
  int v70; // r6
  int v71; // r7
  _DWORD *v72; // r0
  unsigned int *v73; // r3
  int v74; // r6
  char v75; // r2
  const char *v76; // r1
  int v77; // r7
  unsigned int *v78; // r10
  int v79; // r1
  _DWORD *v80; // r2
  unsigned int v81; // r1
  int v82; // r0
  int v83; // [sp+Ch] [bp-60h]
  unsigned int v84; // [sp+10h] [bp-5Ch]
  int v85; // [sp+10h] [bp-5Ch]
  int v86; // [sp+18h] [bp-54h]
  int v87; // [sp+18h] [bp-54h]
  _BOOL4 v88; // [sp+1Ch] [bp-50h]
  int v89; // [sp+20h] [bp-4Ch]
  int v90; // [sp+24h] [bp-48h]
  int v91; // [sp+2Ch] [bp-40h]
  int v92; // [sp+34h] [bp-38h]
  _BOOL4 v93; // [sp+38h] [bp-34h]
  int v94; // [sp+3Ch] [bp-30h]
  const char *v95; // [sp+40h] [bp-2Ch]
  int v96; // [sp+40h] [bp-2Ch]
  unsigned int v97; // [sp+44h] [bp-28h]
  int v98; // [sp+48h] [bp-24h]
  int v99; // [sp+4Ch] [bp-20h]
  int v100; // [sp+50h] [bp-1Ch]
  int v101; // [sp+58h] [bp-14h] BYREF
  _DWORD *v102; // [sp+5Ch] [bp-10h]
  int v103; // [sp+60h] [bp-Ch]
  char v104; // [sp+68h] [bp-4h] BYREF

  bytes_at = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, 0, 0, 0x34u, 0);
  result = bytes_at == 0 || v7 < 0x34;
  if ( result )
    goto LABEL_5;
  result = *(_DWORD *)bytes_at;
  v9 = *(_DWORD *)bytes_at == 1179403647;
  if ( *(_DWORD *)bytes_at == 1179403647 )
  {
    result = *(unsigned __int8 *)(bytes_at + 4);
    v9 = result == 1;
  }
  if ( !v9
    || (result = *(unsigned __int8 *)(bytes_at + 5) - 1, result > 1)
    || (result = *(unsigned __int8 *)(bytes_at + 6), result != 1) )
  {
LABEL_5:
    a1[6] = 0;
    return result;
  }
  if ( *(_BYTE *)(bytes_at + 5) == 2 )
    goto LABEL_9;
  v10 = 0;
  v11 = *(_DWORD *)(bytes_at + 32);
  v12 = aRustc9eb3afe9e;
  if ( !v11 )
    goto LABEL_31;
  v13 = *(unsigned __int16 *)(bytes_at + 48);
  if ( !*(_WORD *)(bytes_at + 48) )
  {
    if ( *(_WORD *)(bytes_at + 46) != 40 )
      goto LABEL_9;
    v25 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, v11, 0, 0x28u, 0);
    if ( !v25 || v26 < 0x28 )
      goto LABEL_9;
    v13 = *(_DWORD *)(v25 + 20);
    if ( v13 )
      goto LABEL_13;
    v12 = aRustc9eb3afe9e;
LABEL_31:
    v13 = 0;
    goto LABEL_32;
  }
  if ( *(_WORD *)(bytes_at + 46) != 40 )
    goto LABEL_9;
LABEL_13:
  v14 = 40 * v13;
  if ( !is_mul_ok(0x28u, v13) )
    goto LABEL_9;
  v15 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, v11, 0, v14, 0);
  if ( !v15 || v14 > v16 )
    goto LABEL_9;
  v12 = (const char *)v15;
  v17 = *(unsigned __int16 *)(bytes_at + 50);
  if ( v17 == 0xFFFF )
  {
    v18 = v11;
    v19 = v12;
    v20 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, v18, 0, 0x28u, 0);
    if ( !v20 || v21 < 0x28 )
      goto LABEL_9;
    v17 = *(_DWORD *)(v20 + 24);
    v12 = v19;
  }
  if ( v17 && v17 < v13 )
  {
    v22 = &v12[40 * v17];
    if ( *((_DWORD *)v22 + 1) != 8 )
    {
      v23 = *((_DWORD *)v22 + 4);
      v24 = *((_DWORD *)v22 + 5);
      v92 = v23;
      v94 = v24 + v23;
      v91 = a2;
      v93 = __CFADD__(v24, v23);
      goto LABEL_33;
    }
LABEL_32:
    v94 = 0;
    v93 = 0;
    v92 = 0;
    v91 = 0;
LABEL_33:
    v27 = 5 * v13;
    v28 = v12;
    v97 = v13;
    v29 = 40 * v13;
    v30 = -1;
    do
    {
      if ( v29 == v10 )
      {
LABEL_49:
        v45 = (unsigned int *)(v12 - 24);
        v46 = 8 * v27;
        v47 = -1;
        v35 = aRustc9eb3afe9e;
        v48 = v12;
        do
        {
          if ( !v46 )
          {
            v87 = 0;
            v90 = 0;
            v89 = 0;
            v88 = 0;
            v63 = 0;
            goto LABEL_65;
          }
          v49 = *((_DWORD *)v48 + 1);
          v46 -= 40;
          v45 += 10;
          ++v47;
          v48 += 40;
        }
        while ( v49 != 11 );
        v50 = v27;
        v51 = v12;
        v52 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, *v45, 0, v45[1], 0);
        if ( v52 )
        {
          v35 = (const char *)v52;
          v54 = v45[2];
          if ( v54 < v97 )
          {
            v12 = v51;
            v55 = &v51[40 * v54];
            if ( *((_DWORD *)v55 + 1) == 3 )
            {
              v56 = (unsigned int *)(v51 + 16);
              v84 = v53 >> 4;
              v57 = 8 * v50;
              v58 = *((_DWORD *)v55 + 4);
              v59 = *((_DWORD *)v55 + 5);
              v90 = v58;
              v89 = v59 + v58;
              v88 = __CFADD__(v59, v58);
              while ( 1 )
              {
                v60 = *(v56 - 3);
                v61 = v60 == 18;
                if ( v60 == 18 )
                  v61 = v56[2] == v47;
                if ( v61 )
                {
                  v62 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, *v56, 0, v56[1], 0);
                  if ( !v62 )
                    break;
                  v12 = v51;
                  if ( (v62 & 3) != 0 )
                    break;
                }
                v57 -= 40;
                v56 += 10;
                if ( !v57 )
                  goto LABEL_81;
              }
            }
          }
        }
        goto LABEL_9;
      }
      v31 = *((_DWORD *)v28 + 1);
      v10 += 40;
      ++v30;
      v28 += 40;
    }
    while ( v31 != 2 );
    v32 = &v12[v10];
    v86 = v27;
    v95 = v12;
    v33 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(
            a2,
            a3,
            *(_DWORD *)&v12[v10 - 24],
            0,
            *(_DWORD *)&v12[v10 - 20],
            0);
    if ( v33 )
    {
      v35 = (const char *)v33;
      v36 = v34;
      v37 = *((_DWORD *)v32 - 4);
      if ( v37 < v97 )
      {
        v38 = &v95[40 * v37];
        if ( *((_DWORD *)v38 + 1) == 3 )
        {
          v84 = v34 >> 4;
          v39 = *((_DWORD *)v38 + 4);
          v40 = *((_DWORD *)v38 + 5);
          v90 = v39;
          v89 = v40 + v39;
          v88 = __CFADD__(v40, v39);
          v41 = (unsigned int *)(v95 + 16);
          while ( 1 )
          {
            v42 = *(v41 - 3);
            v43 = v42 == 18;
            if ( v42 == 18 )
              v43 = v41[2] == v30;
            if ( v43 )
            {
              v44 = <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at(a2, a3, *v41, 0, v41[1], 0);
              if ( !v44 || (v44 & 3) != 0 )
                break;
            }
            v29 -= 40;
            v41 += 10;
            if ( !v29 )
            {
              v12 = v95;
              v27 = v86;
              if ( v36 <= 0xF )
                goto LABEL_49;
LABEL_81:
              v87 = a2;
              v63 = v84;
LABEL_65:
              v64 = v97;
              v65 = &v35[16 * v63];
              v66 = 16 * v63;
              v96 = (int)v12;
              do
              {
                if ( !v66 )
                {
                  v81 = 0;
                  v82 = 8;
                  v100 = 0;
                  v99 = 8;
                  v98 = 0;
                  goto LABEL_80;
                }
                v67 = v35[12];
                v68 = v35;
                v66 -= 16;
                v35 += 16;
              }
              while ( (v67 & 0xFu) - 3 < 0xFFFFFFFE || !*((_WORD *)v68 + 7) );
              v69 = *((_DWORD *)v35 - 4);
              v70 = *((_DWORD *)v35 - 3);
              v71 = *((_DWORD *)v35 - 2);
              v72 = (_DWORD *)_rust_alloc(0x60u);
              if ( !v72 )
                alloc::alloc::handle_alloc_error();
              v73 = (unsigned int *)&v101;
              *v72 = v70;
              v74 = 1;
              v72[1] = 0;
              v72[2] = v71;
              v72[3] = 0;
              v72[4] = v69;
              v103 = 1;
              v102 = v72;
              v101 = 4;
LABEL_71:
              v64 = v97;
              while ( v35 != v65 )
              {
                v75 = v35[12];
                v76 = v35;
                v35 += 16;
                if ( (v75 & 0xFu) - 3 >= 0xFFFFFFFE && *((_WORD *)v76 + 7) )
                {
                  v77 = *((_DWORD *)v35 - 3);
                  v85 = *((_DWORD *)v35 - 4);
                  v83 = *((_DWORD *)v35 - 2);
                  if ( v101 == v74 )
                  {
                    v78 = v73;
                    sub_77E7C(v73, v74, 1);
                    v72 = v102;
                    v73 = v78;
                  }
                  v79 = 3 * v74++;
                  v72[2 * v79] = v77;
                  v80 = &v72[2 * v79];
                  v80[1] = 0;
                  v80[3] = 0;
                  v80[2] = v83;
                  v80[4] = v85;
                  v103 = v74;
                  goto LABEL_71;
                }
              }
              v82 = (int)v102;
              v81 = v103;
              v100 = v103;
              v99 = (int)v102;
              v98 = v101;
LABEL_80:
              v101 = (int)&v104;
              sub_19DC78(v82, v81, (int)&v101, 0, 32 - __clz(v81));
              a1[4] = v94;
              a1[5] = v93;
              a1[10] = v90;
              a1[11] = 0;
              a1[12] = v89;
              a1[13] = v88;
              a1[2] = v92;
              *a1 = v91;
              a1[1] = a3;
              a1[6] = v96;
              a1[8] = v87;
              a1[3] = 0;
              a1[7] = v64;
              a1[9] = a3;
              a1[14] = a2;
              a1[15] = a3;
              a1[16] = v98;
              a1[17] = v99;
              a1[18] = v100;
              return v98;
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
