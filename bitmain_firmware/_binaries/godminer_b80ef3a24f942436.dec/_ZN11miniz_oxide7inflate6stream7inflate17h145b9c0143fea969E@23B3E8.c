int __fastcall miniz_oxide::inflate::stream::inflate(
        int *a1,
        int a2,
        unsigned __int8 *src,
        unsigned int a4,
        char *dest,
        size_t a6,
        int a7)
{
  int v8; // r10
  char v10; // r6
  int v12; // r0
  int v13; // r7
  int v14; // r3
  bool v15; // zf
  int v16; // r5
  int result; // r0
  size_t v18; // r1
  bool v19; // zf
  bool v20; // nf
  int v21; // r2
  unsigned int v22; // r11
  int v23; // r0
  unsigned int *v24; // r4
  size_t v25; // r5
  unsigned int v26; // r6
  size_t v27; // r7
  unsigned int v28; // r3
  int v29; // r12
  size_t v30; // r2
  char *v31; // r6
  int v32; // r1
  unsigned int v33; // r0
  unsigned int v34; // r5
  size_t v35; // r9
  char *v36; // r11
  const void *v37; // r1
  char *v38; // r0
  int v39; // r4
  unsigned int v40; // r6
  unsigned int v41; // r5
  int v42; // r2
  int v43; // r0
  unsigned __int8 *v44; // r2
  bool v45; // cf
  int v46; // r1
  unsigned int v47; // r0
  size_t v48; // r4
  unsigned int v49; // r5
  size_t v50; // r9
  char *v51; // r11
  const void *v52; // r1
  char *v53; // r0
  int v54; // r8
  unsigned int v55; // r6
  unsigned int v56; // r5
  size_t v57; // r3
  bool v58; // r1
  bool v59; // cc
  unsigned int v60; // r3
  unsigned __int8 *v61; // r2
  int v62; // r8
  int v63; // r1
  unsigned int v64; // r0
  int v65; // r11
  size_t v66; // r8
  unsigned int v67; // r5
  int v68; // r4
  unsigned int v69; // r5
  int *v70; // r1
  int v71; // r12
  size_t v72; // r4
  unsigned int v73; // r8
  int v74; // r1
  size_t v75; // r9
  unsigned int v76; // r0
  unsigned int v77; // r5
  size_t v78; // r7
  unsigned int v79; // r11
  int v80; // r4
  unsigned int v81; // r8
  unsigned int v82; // r5
  unsigned int v83; // r0
  bool v84; // cc
  size_t v85; // r4
  int *v86; // [sp+10h] [bp-2Ch]
  size_t v87; // [sp+14h] [bp-28h]
  unsigned int v88; // [sp+14h] [bp-28h]
  unsigned int v89; // [sp+14h] [bp-28h]
  size_t v90; // [sp+14h] [bp-28h]
  int v91; // [sp+18h] [bp-24h]
  char v92; // [sp+1Ch] [bp-20h]
  unsigned __int8 *v93; // [sp+20h] [bp-1Ch]
  int v94; // [sp+24h] [bp-18h]
  int v96; // [sp+2Ch] [bp-10h]
  int v97; // [sp+2Ch] [bp-10h]
  int v98; // [sp+2Ch] [bp-10h]
  unsigned int v99; // [sp+30h] [bp-Ch] BYREF
  unsigned __int8 v100; // [sp+34h] [bp-8h]
  size_t n; // [sp+38h] [bp-4h]

  if ( a7 == 3 )
  {
LABEL_16:
    a1[1] = -2;
    *a1 = 1;
    a1[2] = 0;
    a1[3] = 0;
    return 0;
  }
  v8 = a2 + 43752;
  v10 = 64;
  v12 = *(unsigned __int8 *)(a2 + 43762);
  v13 = *(char *)(a2 + 43760);
  if ( !*(_BYTE *)(a2 + 43761) )
    v10 = 8;
  if ( *(unsigned __int8 *)(a2 + 43761) < 2u )
    v10 |= 1u;
  *(_BYTE *)(a2 + 43762) = 0;
  if ( v13 < 0 )
  {
    *a1 = 1;
    a1[1] = -3;
    a1[2] = 0;
    a1[3] = 0;
    return -3;
  }
  else
  {
    v14 = *(unsigned __int8 *)(a2 + 43763);
    v15 = a7 == 4;
    if ( a7 != 4 )
      v15 = v14 == 0;
    if ( !v15 )
      goto LABEL_16;
    *(_BYTE *)(a2 + 43763) = a7 == 4 || v14 != 0;
    if ( a7 == 4 && v12 )
    {
      v16 = 0;
      miniz_oxide::inflate::core::decompress((int)&v99, a2 + 0x8000, src, a4, (int)dest, a6, 0, v10 | 4);
      result = v99;
      v18 = n;
      v19 = v100 == 0;
      v20 = (v100 & 0x80u) != 0;
      *(_BYTE *)(v8 + 8) = v100;
      if ( v20 )
      {
        v21 = -3;
        v16 = 1;
      }
      else if ( v19 )
      {
        v21 = 1;
      }
      else
      {
        v16 = 1;
        *(_BYTE *)(v8 + 8) = -1;
        v21 = -5;
      }
      *a1 = v16;
      a1[1] = v21;
      a1[2] = result;
      a1[3] = v18;
    }
    else
    {
      v22 = *(_DWORD *)(a2 + 43756);
      if ( a7 != 4 )
        v10 |= 2u;
      v86 = a1;
      if ( v22 )
      {
        v24 = (unsigned int *)(a2 + 43752);
        v23 = *(_DWORD *)(a2 + 43752);
        v25 = a6;
        if ( v22 < a6 )
          v25 = *(_DWORD *)(a2 + 43756);
        v26 = v23 + v25;
        if ( __CFADD__(v23, v25) )
          core::slice::index::slice_index_order_fail();
        if ( v26 > 0x8000 )
LABEL_97:
          core::slice::index::slice_end_index_len_fail();
        memcpy(dest, (const void *)(a2 + v23), v25);
        *(_DWORD *)(v8 + 4) = v22 - v25;
        *v24 = v26 & 0x7FFF;
        *v86 = 0;
        v86[1] = v13 == 0 && v22 <= a6;
        v86[2] = 0;
        v86[3] = v25;
        return 0;
      }
      else
      {
        v27 = a6;
        v92 = v10;
        v91 = a2 + 0x8000;
        miniz_oxide::inflate::core::decompress((int)&v99, a2 + 0x8000, src, a4, a2, 0x8000u, *(_DWORD *)v8, v10);
        v28 = v99;
        v29 = v100;
        v30 = n;
        v59 = v99 > a4;
        *(_BYTE *)(v8 + 8) = v100;
        if ( v59 )
LABEL_66:
          core::slice::index::slice_start_index_len_fail();
        v31 = dest;
        v93 = src;
        if ( a7 == 4 )
        {
          if ( a4 )
          {
            v32 = 0;
            v96 = 0;
            while ( 1 )
            {
              v33 = *(_DWORD *)v8;
              v87 = v27;
              if ( v30 < v27 )
                v27 = v30;
              v34 = v33 + v27;
              *(_DWORD *)(v8 + 4) = v30;
              if ( __CFADD__(v33, v27) )
                goto LABEL_94;
              v35 = v30;
              if ( v34 > 0x8000 )
                goto LABEL_97;
              v36 = v31;
              v94 = v28 + v32;
              v37 = (const void *)(a2 + v33);
              v38 = v31;
              v39 = v29;
              v40 = v28;
              memcpy(v38, v37, v27);
              v41 = v34 & 0x7FFF;
              *(_DWORD *)(v8 + 4) = v35 - v27;
              v42 = v27 + v96;
              v43 = 1;
              *(_DWORD *)v8 = v41;
              if ( (v39 & 0x80u) != 0 )
                goto LABEL_89;
              if ( !v39 )
                break;
              if ( v87 <= v35 )
                goto LABEL_81;
              a4 -= v40;
              v96 += v27;
              v44 = &v93[v40];
              v31 = &v36[v27];
              v93 = v44;
              miniz_oxide::inflate::core::decompress((int)&v99, v91, v44, a4, a2, 0x8000u, v41, v92);
              v28 = v99;
              v27 = v87 - v27;
              v29 = v100;
              v30 = n;
              v45 = a4 >= v99;
              v32 = v94;
              *(_BYTE *)(v8 + 8) = v100;
              if ( !v45 )
                goto LABEL_66;
            }
            v85 = v87;
LABEL_84:
            v70 = v86;
            v43 = 0;
            v71 = 1;
            if ( v35 > v85 )
            {
              v43 = 1;
              v71 = -5;
            }
          }
          else
          {
            v62 = 0;
            v63 = 0;
            v98 = 0;
            while ( 1 )
            {
              v64 = *(_DWORD *)v8;
              v65 = v62;
              v66 = v27;
              if ( v30 < v27 )
                v27 = v30;
              v67 = v64 + v27;
              *(_DWORD *)(v8 + 4) = v30;
              if ( __CFADD__(v64, v27) )
                goto LABEL_94;
              v35 = v30;
              if ( v67 > 0x8000 )
                goto LABEL_97;
              v94 = v28 + v63;
              v68 = v29;
              v89 = v28;
              memcpy(v31, (const void *)(a2 + v64), v27);
              v69 = v67 & 0x7FFF;
              *(_DWORD *)(v8 + 4) = v35 - v27;
              v42 = v27 + v98;
              v43 = 1;
              *(_DWORD *)v8 = v69;
              if ( (v68 & 0x80u) != 0 )
                goto LABEL_89;
              if ( !v68 )
              {
                v85 = v66;
                goto LABEL_84;
              }
              v70 = v86;
              v71 = -5;
              if ( v68 == 1 )
                break;
              if ( v66 <= v35 )
                goto LABEL_93;
              v98 += v27;
              v72 = v66 - v27;
              v62 = v65 - v89;
              v31 += v27;
              v93 += v89;
              miniz_oxide::inflate::core::decompress((int)&v99, v91, v93, v65 - v89, a2, 0x8000u, v69, v92);
              v28 = v99;
              v27 = v72;
              v29 = v100;
              v30 = n;
              v45 = v65 - v89 >= v99;
              v63 = v94;
              *(_BYTE *)(v8 + 8) = v100;
              if ( !v45 )
                goto LABEL_66;
            }
            v43 = 1;
          }
        }
        else
        {
          if ( a4 )
          {
            v46 = 0;
            v97 = 0;
            while ( 1 )
            {
              v47 = *(_DWORD *)v8;
              v48 = v27;
              if ( v30 < v27 )
                v27 = v30;
              v49 = v47 + v27;
              v88 = a4;
              *(_DWORD *)(v8 + 4) = v30;
              if ( __CFADD__(v47, v27) )
                goto LABEL_94;
              v50 = v30;
              if ( v49 > 0x8000 )
                goto LABEL_97;
              v51 = v31;
              v94 = v28 + v46;
              v52 = (const void *)(a2 + v47);
              v53 = v31;
              v54 = v29;
              v55 = v28;
              memcpy(v53, v52, v27);
              v56 = v49 & 0x7FFF;
              *(_DWORD *)(v8 + 4) = v50 - v27;
              v42 = v27 + v97;
              *(_DWORD *)v8 = v56;
              if ( (v54 & 0x80u) != 0 )
                break;
              v57 = v50;
              v97 += v27;
              v58 = v54 == 0;
              if ( !v54 )
                goto LABEL_91;
              a4 = v88 - v55;
              v59 = v88 > v55;
              if ( v88 != v55 )
                v59 = v48 > v50;
              if ( !v59 )
                goto LABEL_91;
              v60 = v88 - v55;
              v61 = &v93[v55];
              v31 = &v51[v27];
              v93 = v61;
              miniz_oxide::inflate::core::decompress((int)&v99, v91, v61, v60, a2, 0x8000u, v56, v92);
              v28 = v99;
              v27 = v48 - v27;
              v29 = v100;
              v30 = n;
              v45 = a4 >= v99;
              v46 = v94;
              *(_BYTE *)(v8 + 8) = v100;
              if ( !v45 )
                goto LABEL_66;
            }
            v43 = 1;
LABEL_89:
            v71 = -3;
          }
          else
          {
            v73 = 0;
            v74 = 0;
            v75 = a6;
            v97 = 0;
            while ( 1 )
            {
              v76 = *(_DWORD *)v8;
              v90 = v75;
              if ( v30 < v75 )
                v75 = v30;
              v77 = v76 + v75;
              *(_DWORD *)(v8 + 4) = v30;
              if ( __CFADD__(v76, v75) )
LABEL_94:
                core::slice::index::slice_index_order_fail();
              v78 = v30;
              if ( v77 > 0x8000 )
                goto LABEL_97;
              v94 = v28 + v74;
              v79 = v73;
              v80 = v29;
              v81 = v28;
              memcpy(v31, (const void *)(a2 + v76), v75);
              v82 = v77 & 0x7FFF;
              *(_DWORD *)(v8 + 4) = v78 - v75;
              v42 = v75 + v97;
              v43 = 1;
              *(_DWORD *)v8 = v82;
              if ( (v80 & 0x80u) != 0 )
                goto LABEL_89;
              if ( v80 == 1 )
              {
LABEL_81:
                v71 = -5;
                goto LABEL_92;
              }
              v57 = v78;
              v97 += v75;
              v58 = v80 == 0;
              if ( !v80 )
                break;
              v83 = v81;
              v48 = v90;
              v45 = v79 >= v81;
              v73 = v79 - v81;
              v84 = v73 != 0 && v45;
              if ( v73 )
                v84 = v90 > v78;
              if ( !v84 )
                goto LABEL_91;
              v31 += v75;
              v93 += v83;
              miniz_oxide::inflate::core::decompress((int)&v99, v91, v93, v73, a2, 0x8000u, v82, v92);
              v28 = v99;
              v75 = v90 - v75;
              v29 = v100;
              v30 = n;
              v45 = v73 >= v99;
              v74 = v94;
              *(_BYTE *)(v8 + 8) = v100;
              if ( !v45 )
                goto LABEL_66;
            }
            v48 = v90;
LABEL_91:
            v71 = v57 <= v48 && v58;
            v43 = 0;
            v42 = v97;
          }
LABEL_92:
          v70 = v86;
        }
LABEL_93:
        *v70 = v43;
        v70[1] = v71;
        v70[2] = v94;
        v70[3] = v42;
        return v94;
      }
    }
  }
  return result;
}
