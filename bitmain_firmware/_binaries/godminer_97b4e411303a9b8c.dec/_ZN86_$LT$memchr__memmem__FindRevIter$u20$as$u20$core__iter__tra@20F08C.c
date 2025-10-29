int __fastcall <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(unsigned int *a1)
{
  unsigned int v1; // r1
  unsigned int *v2; // r9
  int result; // r0
  unsigned int v4; // r8
  unsigned int v5; // r1
  int v6; // r2
  unsigned int v7; // r5
  unsigned __int8 *v8; // r3
  int v9; // r2
  int v10; // r4
  unsigned int v11; // r1
  int v12; // r3
  unsigned __int8 *v13; // r11
  unsigned int v14; // r3
  int v15; // r6
  unsigned __int8 *v16; // r0
  unsigned int v17; // r1
  int v18; // t1
  unsigned int v19; // r10
  unsigned int v20; // r12
  unsigned int v21; // r3
  unsigned int v22; // r9
  unsigned int v23; // lr
  unsigned int v24; // r2
  unsigned int v25; // r3
  unsigned int v26; // r5
  int v27; // r1
  int v28; // r3
  int v29; // r6
  unsigned int v30; // r5
  unsigned __int8 *v31; // r7
  int v32; // r4
  unsigned int v33; // r3
  unsigned int v34; // r5
  int v35; // r1
  int v36; // r3
  int v37; // r0
  unsigned int v38; // r3
  unsigned int v39; // r7
  int v40; // r10
  unsigned int v41; // r9
  unsigned int v42; // r4
  int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r7
  unsigned int v46; // lr
  unsigned int v47; // r1
  unsigned int v48; // r9
  unsigned int v49; // r4
  unsigned int v50; // r3
  unsigned int v51; // r4
  int v52; // r6
  int v53; // r4
  unsigned int v54; // r5
  unsigned int v55; // r3
  unsigned __int8 *v56; // r5
  int v57; // r7
  int v58; // r4
  int v59; // r7
  unsigned __int8 *v60; // r5
  unsigned int v61; // r6
  unsigned int v62; // r3
  int v63; // r12
  int v64; // r4
  int v65; // r6
  unsigned int v66; // r4
  bool v67; // zf
  unsigned int v68; // r1
  int v69; // t1
  char **v70; // r2
  int v71; // r0
  char **v72; // r2
  int v73; // [sp+4h] [bp-20h]
  unsigned int v74; // [sp+8h] [bp-1Ch]
  unsigned int *v75; // [sp+Ch] [bp-18h]
  unsigned int v76; // [sp+10h] [bp-14h]
  unsigned int v77; // [sp+14h] [bp-10h]
  unsigned int v78; // [sp+14h] [bp-10h]
  unsigned int v79; // [sp+18h] [bp-Ch]
  unsigned int v80; // [sp+1Ch] [bp-8h]
  unsigned int v81; // [sp+20h] [bp-4h]

  v1 = a1[12];
  v2 = a1;
  result = 0;
  if ( v1 )
  {
    v4 = v2[13];
    if ( v4 > v2[1] )
      core::slice::index::slice_end_index_len_fail();
    if ( v4 >= v2[5] )
    {
      v5 = v2[8];
      v6 = v5 - 2;
      if ( v5 < 2 )
        v6 = 2;
      if ( !v6 )
        goto LABEL_105;
      v7 = *v2;
      v81 = v2[5];
      v8 = (unsigned __int8 *)(v2 + 6);
      if ( v6 == 1 )
      {
        if ( v4 )
        {
          v9 = *v8;
          v10 = v2[13];
          if ( v4 >= 8 )
            v10 = 8;
          if ( v4 > 3 )
          {
            v35 = 16843009 * v9;
            if ( (((*(_DWORD *)(v7 + v4 - 4) ^ v35) - 16843009) & ~(*(_DWORD *)(v7 + v4 - 4) ^ v35) & 0x80808080) != 0 )
            {
              v11 = v4 - 1;
              while ( v7 + v11 + 1 > v7 )
              {
                v36 = *(unsigned __int8 *)(v7 + v11--);
                if ( v36 == v9 )
                {
LABEL_53:
                  v37 = 1;
                  v38 = v11 + 1;
                  if ( v4 == v11 + 1 )
                    goto LABEL_105;
                  goto LABEL_107;
                }
              }
            }
            else
            {
              v62 = (v7 + v4) & 0xFFFFFFFC;
              if ( v4 >= 8 && v7 + 8 <= v62 )
              {
                v63 = -v10;
                do
                {
                  v64 = *(_DWORD *)(v62 - 8) ^ v35;
                  v65 = v64 - 16843009;
                  v66 = ~v64 & 0x80808080;
                  v67 = (v66 & v65) == 0;
                  if ( (v66 & v65) == 0 )
                    v67 = (~(*(_DWORD *)(v62 - 4) ^ v35) & 0x80808080 & ((*(_DWORD *)(v62 - 4) ^ v35) - 16843009)) == 0;
                  if ( !v67 )
                    break;
                  v62 += v63;
                }
                while ( v62 >= v7 + 8 );
              }
              v68 = v62 - v7;
              while ( v62 > v7 )
              {
                v69 = *(unsigned __int8 *)--v62;
                --v68;
                if ( v69 == v9 )
                {
                  v37 = 1;
                  v38 = v68;
                  if ( v4 != v68 )
                    goto LABEL_107;
                  goto LABEL_105;
                }
              }
            }
          }
          else
          {
            v11 = v4 - 1;
            while ( v7 + v11 + 1 > v7 )
            {
              v12 = *(unsigned __int8 *)(v7 + v11--);
              if ( v12 == v9 )
                goto LABEL_53;
            }
          }
        }
      }
      else
      {
        v13 = (unsigned __int8 *)v2[4];
        v75 = v2;
        if ( v4 >= 0x10 )
        {
          v19 = v2[10];
          v74 = v2[9];
          v20 = v2[7];
          v80 = *(_DWORD *)v8;
          v79 = v19 + 1;
          if ( v5 )
          {
            v21 = v2[5];
            v22 = *v2;
            v23 = v4;
            v24 = v7 - v81;
            v77 = v19 - 1;
            while ( 1 )
            {
              v27 = v23 - v21;
              if ( v23 - v21 >= v4 )
                break;
              v28 = *(unsigned __int8 *)(v22 + v27);
              v29 = (v80 >> (v28 & 0x3F)) | (v20 << (32 - (v28 & 0x3F)));
              if ( (v28 & 0x3F) - 32 >= 0 )
                v29 = v20 >> ((v28 & 0x3F) - 32);
              v26 = v27;
              if ( (v29 & 1) != 0 )
              {
                if ( v77 < v81 )
                {
                  v30 = v19 + 1;
                  while ( 1 )
                  {
                    if ( v30 == 1 )
                      goto LABEL_38;
                    if ( v27 + v30 - 2 >= v4 )
                      break;
                    v31 = &v13[v30];
                    v32 = v24 + v23 + v30--;
                    if ( *(v31 - 2) != *(unsigned __int8 *)(v32 - 2) )
                      goto LABEL_24;
                  }
                  v70 = &off_2E2808;
                  v71 = v23 - v81 + v30 - 2;
LABEL_120:
                  core::panicking::panic_bounds_check(v71, v4, (int)v70);
                }
                if ( v19 )
                  core::panicking::panic_bounds_check(v77, v81, (int)&off_2E27F8);
LABEL_38:
                if ( v81 )
                {
                  v30 = 0;
                  if ( *v13 != v28 )
                  {
LABEL_24:
                    v25 = v79 - v30;
                    goto LABEL_25;
                  }
                  v33 = v81;
                  v34 = v19;
                  if ( v19 >= v81 )
                    goto LABEL_46;
                  while ( v34 + v27 < v4 )
                  {
                    if ( v13[v34] != *(unsigned __int8 *)(v22 + v34 + v27) )
                    {
                      v33 = v81;
LABEL_46:
                      v67 = v34 == v33;
                      v25 = v74;
                      if ( !v67 )
                      {
LABEL_25:
                        v26 = v23 - v25;
                        goto LABEL_26;
                      }
LABEL_110:
                      v2 = v75;
                      v37 = 1;
                      v38 = v27;
                      if ( v4 != v27 )
                      {
LABEL_107:
                        v2[12] = v37;
                        result = 1;
                        v2[13] = v38;
                        return result;
                      }
LABEL_105:
                      v37 = v4;
                      v38 = v4 - 1;
                      if ( v4 )
                        v37 = 1;
                      goto LABEL_107;
                    }
                    if ( ++v34 == v81 )
                      goto LABEL_110;
                  }
                  v71 = v34 + v27;
                  v70 = &off_2E2828;
                  goto LABEL_120;
                }
                v72 = &off_2E2818;
LABEL_123:
                core::panicking::panic_bounds_check(0, 0, (int)v72);
              }
LABEL_26:
              v21 = v81;
              v23 = v26;
              if ( v26 < v81 )
                return result;
            }
            v70 = &off_2E27E8;
          }
          else
          {
            v45 = v2[5];
            v46 = v2[13];
            v78 = *v2;
            v47 = v45;
            v48 = v45;
            if ( v19 > v81 )
              v47 = v19;
            v73 = v47;
            v76 = v7 - v81;
            while ( 1 )
            {
              v27 = v46 - v45;
              if ( v46 - v45 >= v4 )
                break;
              v52 = *(unsigned __int8 *)(v78 + v27);
              v53 = (v80 >> (v52 & 0x3F)) | (v20 << (32 - (v52 & 0x3F)));
              if ( (v52 & 0x3F) - 32 >= 0 )
                v53 = v20 >> ((v52 & 0x3F) - 32);
              v67 = (v53 & 1) == 0;
              v50 = v45;
              v51 = v46 - v45;
              if ( !v67 )
              {
                v54 = v48;
                if ( v19 < v48 )
                  v54 = v19;
                if ( v54 - 1 >= v45 )
                {
                  if ( v54 )
                    core::panicking::panic_bounds_check(v54 - 1, v81, (int)&off_2E2848);
                }
                else
                {
                  v55 = v54 + 1;
                  while ( v55 != 1 )
                  {
                    if ( v27 + v55 - 2 >= v4 )
                    {
                      v70 = &off_2E2858;
                      v71 = v46 - v81 + v55 - 2;
                      goto LABEL_120;
                    }
                    v56 = &v13[v55];
                    v57 = v76 + v46 + v55--;
                    if ( *(v56 - 2) != *(unsigned __int8 *)(v57 - 2) )
                      goto LABEL_67;
                  }
                }
                if ( !v81 )
                {
                  v72 = &off_2E2868;
                  goto LABEL_123;
                }
                v55 = 0;
                if ( *v13 == v52 )
                {
                  if ( v19 >= v48 )
                    goto LABEL_110;
                  v58 = v27;
                  v59 = v73;
                  v60 = v13;
                  v61 = v76 + v46;
                  while ( 1 )
                  {
                    if ( v19 == v59 )
                      core::panicking::panic_bounds_check(v73, v81, (int)&off_2E2878);
                    if ( v19 + v58 >= v4 )
                    {
                      v71 = v19 + v58;
                      v70 = &off_2E2888;
                      goto LABEL_120;
                    }
                    if ( v60[v19] != *(unsigned __int8 *)(v61 + v19) )
                      break;
                    --v48;
                    --v59;
                    ++v61;
                    ++v58;
                    ++v60;
                    if ( v19 == v48 )
                      goto LABEL_110;
                  }
                  v49 = v74;
                  v50 = v74;
                }
                else
                {
LABEL_67:
                  v49 = v79 - v55;
                  v50 = v81;
                }
                v45 = v81;
                v51 = v46 - v49;
              }
              v46 = v51;
              v48 = v50;
              if ( v51 < v45 )
                return result;
            }
            v70 = &off_2E2838;
          }
          v71 = v27;
          goto LABEL_120;
        }
        v14 = v2[5];
        if ( v81 )
        {
          v15 = 0;
          v16 = (unsigned __int8 *)(v4 + v7 - 1);
          v17 = v2[5];
          do
          {
            v18 = *v16--;
            --v17;
            v15 = v18 + 2 * v15;
          }
          while ( v17 );
        }
        else
        {
          v15 = 0;
        }
        v39 = v2[2];
        v40 = ~v81;
        v41 = v2[3];
        v42 = v4;
        if ( v39 == v15 )
        {
LABEL_61:
          v44 = sub_7D454(v7, v42, v13, v81);
          v14 = v81;
          if ( !v44 )
            goto LABEL_62;
          v27 = v42 - v81;
          goto LABEL_110;
        }
LABEL_62:
        while ( v42 > v14 )
        {
          v43 = v42 + v40;
          if ( !__CFADD__(v42, v40) )
            core::panicking::panic_bounds_check(v43, v42, (int)&off_2E2728);
          --v42;
          v15 = *(unsigned __int8 *)(v7 + v43) + 2 * (v15 - v41 * *(unsigned __int8 *)(v7 + v42));
          if ( v39 == v15 )
            goto LABEL_61;
        }
        return 0;
      }
    }
  }
  return result;
}
