int __fastcall <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(_DWORD *a1)
{
  int v1; // r1
  _DWORD *v2; // r9
  int result; // r0
  unsigned int v4; // r1
  unsigned int v5; // r8
  unsigned int v6; // r1
  int v7; // r2
  unsigned int v8; // r5
  unsigned __int8 *v9; // r3
  int v10; // r2
  int v11; // r4
  unsigned int v12; // r1
  int v13; // r3
  unsigned __int8 *v14; // r11
  unsigned int v15; // r3
  int v16; // r6
  unsigned __int8 *v17; // r0
  int v18; // r1
  int v19; // t1
  unsigned int v20; // r10
  unsigned int v21; // r12
  unsigned int v22; // r3
  unsigned int v23; // r9
  unsigned int v24; // lr
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r5
  int v28; // r1
  int v29; // r3
  int v30; // r6
  unsigned int v31; // r5
  unsigned __int8 *v32; // r7
  int v33; // r4
  unsigned int v34; // r3
  unsigned int v35; // r5
  int v36; // r1
  int v37; // r3
  int v38; // r0
  unsigned int v39; // r3
  int v40; // r7
  int v41; // r10
  int v42; // r9
  unsigned int v43; // r4
  int v44; // r0
  unsigned int v45; // r0
  unsigned int v46; // r7
  int v47; // lr
  unsigned int v48; // r1
  unsigned int v49; // r9
  unsigned int v50; // r4
  unsigned int v51; // r3
  unsigned int v52; // r4
  int v53; // r6
  int v54; // r4
  unsigned int v55; // r5
  unsigned int v56; // r3
  unsigned __int8 *v57; // r5
  int v58; // r7
  int v59; // r4
  int v60; // r7
  unsigned __int8 *v61; // r5
  int v62; // r6
  unsigned int v63; // r3
  int v64; // r12
  int v65; // r4
  int v66; // r6
  unsigned int v67; // r4
  bool v68; // zf
  unsigned int v69; // r1
  int v70; // t1
  char **v71; // r2
  int v72; // r0
  char **v73; // r2
  int v74; // [sp+4h] [bp-20h]
  unsigned int v75; // [sp+8h] [bp-1Ch]
  _DWORD *v76; // [sp+Ch] [bp-18h]
  unsigned int v77; // [sp+10h] [bp-14h]
  unsigned int v78; // [sp+14h] [bp-10h]
  unsigned int v79; // [sp+14h] [bp-10h]
  unsigned int v80; // [sp+18h] [bp-Ch]
  unsigned int v81; // [sp+1Ch] [bp-8h]
  unsigned int v82; // [sp+20h] [bp-4h]

  v1 = a1[12];
  v2 = a1;
  result = 0;
  if ( v1 )
  {
    v4 = v2[1];
    v5 = v2[13];
    if ( v5 > v4 )
      core::slice::index::slice_end_index_len_fail(v2[13], v4, (int)&off_2CC7D8);
    if ( v5 >= v2[5] )
    {
      v6 = v2[8];
      v7 = v6 - 2;
      if ( v6 < 2 )
        v7 = 2;
      if ( !v7 )
        goto LABEL_105;
      v8 = *v2;
      v82 = v2[5];
      v9 = (unsigned __int8 *)(v2 + 6);
      if ( v7 == 1 )
      {
        if ( v5 )
        {
          v10 = *v9;
          v11 = v2[13];
          if ( v5 >= 8 )
            v11 = 8;
          if ( v5 > 3 )
          {
            v36 = 16843009 * v10;
            if ( (((*(_DWORD *)(v8 + v5 - 4) ^ v36) - 16843009) & ~(*(_DWORD *)(v8 + v5 - 4) ^ v36) & 0x80808080) != 0 )
            {
              v12 = v5 - 1;
              while ( v8 + v12 + 1 > v8 )
              {
                v37 = *(unsigned __int8 *)(v8 + v12--);
                if ( v37 == v10 )
                {
LABEL_53:
                  v38 = 1;
                  v39 = v12 + 1;
                  if ( v5 == v12 + 1 )
                    goto LABEL_105;
                  goto LABEL_107;
                }
              }
            }
            else
            {
              v63 = (v8 + v5) & 0xFFFFFFFC;
              if ( v5 >= 8 && v8 + 8 <= v63 )
              {
                v64 = -v11;
                do
                {
                  v65 = *(_DWORD *)(v63 - 8) ^ v36;
                  v66 = v65 - 16843009;
                  v67 = ~v65 & 0x80808080;
                  v68 = (v67 & v66) == 0;
                  if ( (v67 & v66) == 0 )
                    v68 = (~(*(_DWORD *)(v63 - 4) ^ v36) & 0x80808080 & ((*(_DWORD *)(v63 - 4) ^ v36) - 16843009)) == 0;
                  if ( !v68 )
                    break;
                  v63 += v64;
                }
                while ( v63 >= v8 + 8 );
              }
              v69 = v63 - v8;
              while ( v63 > v8 )
              {
                v70 = *(unsigned __int8 *)--v63;
                --v69;
                if ( v70 == v10 )
                {
                  v38 = 1;
                  v39 = v69;
                  if ( v5 != v69 )
                    goto LABEL_107;
                  goto LABEL_105;
                }
              }
            }
          }
          else
          {
            v12 = v5 - 1;
            while ( v8 + v12 + 1 > v8 )
            {
              v13 = *(unsigned __int8 *)(v8 + v12--);
              if ( v13 == v10 )
                goto LABEL_53;
            }
          }
        }
      }
      else
      {
        v14 = (unsigned __int8 *)v2[4];
        v76 = v2;
        if ( v5 >= 0x10 )
        {
          v20 = v2[10];
          v75 = v2[9];
          v21 = v2[7];
          v81 = *(_DWORD *)v9;
          v80 = v20 + 1;
          if ( v6 )
          {
            v22 = v2[5];
            v23 = *v2;
            v24 = v5;
            v25 = v8 - v82;
            v78 = v20 - 1;
            while ( 1 )
            {
              v28 = v24 - v22;
              if ( v24 - v22 >= v5 )
                break;
              v29 = *(unsigned __int8 *)(v23 + v28);
              v30 = (v81 >> (v29 & 0x3F)) | (v21 << (32 - (v29 & 0x3F)));
              if ( (v29 & 0x3F) - 32 >= 0 )
                v30 = v21 >> ((v29 & 0x3F) - 32);
              v27 = v28;
              if ( (v30 & 1) != 0 )
              {
                if ( v78 < v82 )
                {
                  v31 = v20 + 1;
                  while ( 1 )
                  {
                    if ( v31 == 1 )
                      goto LABEL_38;
                    if ( v28 + v31 - 2 >= v5 )
                      break;
                    v32 = &v14[v31];
                    v33 = v25 + v24 + v31--;
                    if ( *(v32 - 2) != *(unsigned __int8 *)(v33 - 2) )
                      goto LABEL_24;
                  }
                  v71 = &off_2CC808;
                  v72 = v24 - v82 + v31 - 2;
LABEL_120:
                  core::panicking::panic_bounds_check(v72, v5, (int)v71);
                }
                if ( v20 )
                  core::panicking::panic_bounds_check(v78, v82, (int)&off_2CC7F8);
LABEL_38:
                if ( v82 )
                {
                  v31 = 0;
                  if ( *v14 != v29 )
                  {
LABEL_24:
                    v26 = v80 - v31;
                    goto LABEL_25;
                  }
                  v34 = v82;
                  v35 = v20;
                  if ( v20 >= v82 )
                    goto LABEL_46;
                  while ( v35 + v28 < v5 )
                  {
                    if ( v14[v35] != *(unsigned __int8 *)(v23 + v35 + v28) )
                    {
                      v34 = v82;
LABEL_46:
                      v68 = v35 == v34;
                      v26 = v75;
                      if ( !v68 )
                      {
LABEL_25:
                        v27 = v24 - v26;
                        goto LABEL_26;
                      }
LABEL_110:
                      v2 = v76;
                      v38 = 1;
                      v39 = v28;
                      if ( v5 != v28 )
                      {
LABEL_107:
                        v2[12] = v38;
                        result = 1;
                        v2[13] = v39;
                        return result;
                      }
LABEL_105:
                      v38 = v5;
                      v39 = v5 - 1;
                      if ( v5 )
                        v38 = 1;
                      goto LABEL_107;
                    }
                    if ( ++v35 == v82 )
                      goto LABEL_110;
                  }
                  v72 = v35 + v28;
                  v71 = &off_2CC828;
                  goto LABEL_120;
                }
                v73 = &off_2CC818;
LABEL_123:
                core::panicking::panic_bounds_check(0, 0, (int)v73);
              }
LABEL_26:
              v22 = v82;
              v24 = v27;
              if ( v27 < v82 )
                return result;
            }
            v71 = &off_2CC7E8;
          }
          else
          {
            v46 = v2[5];
            v47 = v2[13];
            v79 = *v2;
            v48 = v46;
            v49 = v46;
            if ( v20 > v82 )
              v48 = v20;
            v74 = v48;
            v77 = v8 - v82;
            while ( 1 )
            {
              v28 = v47 - v46;
              if ( v47 - v46 >= v5 )
                break;
              v53 = *(unsigned __int8 *)(v79 + v28);
              v54 = (v81 >> (v53 & 0x3F)) | (v21 << (32 - (v53 & 0x3F)));
              if ( (v53 & 0x3F) - 32 >= 0 )
                v54 = v21 >> ((v53 & 0x3F) - 32);
              v68 = (v54 & 1) == 0;
              v51 = v46;
              v52 = v47 - v46;
              if ( !v68 )
              {
                v55 = v49;
                if ( v20 < v49 )
                  v55 = v20;
                if ( v55 - 1 >= v46 )
                {
                  if ( v55 )
                    core::panicking::panic_bounds_check(v55 - 1, v82, (int)&off_2CC848);
                }
                else
                {
                  v56 = v55 + 1;
                  while ( v56 != 1 )
                  {
                    if ( v28 + v56 - 2 >= v5 )
                    {
                      v71 = &off_2CC858;
                      v72 = v47 - v82 + v56 - 2;
                      goto LABEL_120;
                    }
                    v57 = &v14[v56];
                    v58 = v77 + v47 + v56--;
                    if ( *(v57 - 2) != *(unsigned __int8 *)(v58 - 2) )
                      goto LABEL_67;
                  }
                }
                if ( !v82 )
                {
                  v73 = &off_2CC868;
                  goto LABEL_123;
                }
                v56 = 0;
                if ( *v14 == v53 )
                {
                  if ( v20 >= v49 )
                    goto LABEL_110;
                  v59 = v28;
                  v60 = v74;
                  v61 = v14;
                  v62 = v77 + v47;
                  while ( 1 )
                  {
                    if ( v20 == v60 )
                      core::panicking::panic_bounds_check(v74, v82, (int)&off_2CC878);
                    if ( v20 + v59 >= v5 )
                    {
                      v72 = v20 + v59;
                      v71 = &off_2CC888;
                      goto LABEL_120;
                    }
                    if ( v61[v20] != *(unsigned __int8 *)(v62 + v20) )
                      break;
                    --v49;
                    --v60;
                    ++v62;
                    ++v59;
                    ++v61;
                    if ( v20 == v49 )
                      goto LABEL_110;
                  }
                  v50 = v75;
                  v51 = v75;
                }
                else
                {
LABEL_67:
                  v50 = v80 - v56;
                  v51 = v82;
                }
                v46 = v82;
                v52 = v47 - v50;
              }
              v47 = v52;
              v49 = v51;
              if ( v52 < v46 )
                return result;
            }
            v71 = &off_2CC838;
          }
          v72 = v28;
          goto LABEL_120;
        }
        v15 = v2[5];
        if ( v82 )
        {
          v16 = 0;
          v17 = (unsigned __int8 *)(v5 + v8 - 1);
          v18 = v2[5];
          do
          {
            v19 = *v17--;
            --v18;
            v16 = v19 + 2 * v16;
          }
          while ( v18 );
        }
        else
        {
          v16 = 0;
        }
        v40 = v2[2];
        v41 = ~v82;
        v42 = v2[3];
        v43 = v5;
        if ( v40 == v16 )
        {
LABEL_61:
          v45 = sub_7B97C(v8, v43, v14, v82);
          v15 = v82;
          if ( !v45 )
            goto LABEL_62;
          v28 = v43 - v82;
          goto LABEL_110;
        }
LABEL_62:
        while ( v43 > v15 )
        {
          v44 = v43 + v41;
          if ( !__CFADD__(v43, v41) )
            core::panicking::panic_bounds_check(v44, v43, (int)&off_2CC728);
          --v43;
          v16 = *(unsigned __int8 *)(v8 + v44) + 2 * (v16 - v42 * *(unsigned __int8 *)(v8 + v43));
          if ( v40 == v16 )
            goto LABEL_61;
        }
        return 0;
      }
    }
  }
  return result;
}
