int __fastcall sub_78F9C(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 *v2; // r10
  int v3; // r7
  unsigned __int64 v4; // r2
  unsigned __int64 *v5; // r7
  int v6; // r0
  unsigned __int64 v7; // r4
  bool v8; // cf
  unsigned int v10; // lr
  int v11; // r3
  unsigned int v12; // r0
  _DWORD *v13; // r11
  unsigned __int64 *v14; // r2
  unsigned int v15; // r4
  unsigned int v16; // r9
  unsigned int v17; // r5
  _BOOL4 v18; // r2
  unsigned __int64 *v19; // r2
  unsigned __int64 v20; // r4
  unsigned int v21; // r7
  unsigned int v22; // t1
  int *v23; // r12
  unsigned __int64 *v24; // lr
  int v25; // r3
  int v26; // r5
  int v27; // r6
  int v28; // r7
  int v29; // r9
  unsigned int v30; // r11
  int *v31; // r8
  int v32; // r3
  int v33; // r5
  int v34; // r7
  int v35; // r9
  int v36; // r10
  unsigned __int64 *v37; // r9
  int v38; // r3
  int v39; // r4
  int v40; // r5
  int v41; // r6
  int v42; // r7
  unsigned __int64 v43; // r2
  unsigned int v44; // r10
  unsigned __int64 v45; // r8
  int v46; // r3
  int v47; // r4
  int v48; // r5
  int v49; // r6
  int v50; // r7
  _QWORD *v51; // lr
  unsigned int v52; // t1
  unsigned int v53; // r10
  int v54; // r3
  int v55; // r4
  int v56; // r5
  int v57; // r6
  int v58; // r7
  _DWORD *v59; // r12
  unsigned __int64 v60; // r2
  unsigned int v61; // [sp+4h] [bp-40h]
  unsigned __int64 *v62; // [sp+8h] [bp-3Ch]
  unsigned int v63; // [sp+10h] [bp-34h]
  unsigned int v64; // [sp+14h] [bp-30h]
  int *v65; // [sp+18h] [bp-2Ch]
  int v66; // [sp+1Ch] [bp-28h]
  unsigned __int64 v67; // [sp+20h] [bp-24h]
  int v68; // [sp+28h] [bp-1Ch]
  int v69; // [sp+28h] [bp-1Ch]
  int v70; // [sp+28h] [bp-1Ch]
  int v71; // [sp+2Ch] [bp-18h]
  int v72; // [sp+2Ch] [bp-18h]
  int v73; // [sp+2Ch] [bp-18h]
  int v74; // [sp+30h] [bp-14h]
  int v75; // [sp+30h] [bp-14h]
  int v76; // [sp+30h] [bp-14h]
  int v77; // [sp+34h] [bp-10h]
  int v78; // [sp+34h] [bp-10h]
  int v79; // [sp+34h] [bp-10h]
  int v80; // [sp+38h] [bp-Ch]
  int v81; // [sp+3Ch] [bp-8h]

  v2 = a1;
  if ( a2 >= 0x32 )
  {
    v61 = a2 - 2;
    v10 = a2 - 1;
    v62 = a1 - 6;
    v11 = 0;
    v12 = 1;
    v64 = a2;
    v65 = (int *)v2;
    v63 = a2 - 1;
    do
    {
      if ( v12 >= a2 )
      {
        v18 = 0;
      }
      else
      {
        v14 = &v2[3 * v12];
        v15 = *((_DWORD *)v14 - 6);
        v16 = *((_DWORD *)v14 - 5);
        v17 = *((_DWORD *)v14 + 1);
        v18 = 1;
        if ( __PAIR64__(v17, v2[3 * v12]) >= __PAIR64__(v16, v15) )
        {
          v19 = &v2[3 * v12];
          while ( v10 != v12 )
          {
            v20 = *v19;
            ++v12;
            v21 = *((_DWORD *)v19 + 7);
            v22 = *((_DWORD *)v19 + 6);
            v19 += 3;
            if ( __PAIR64__(v21, v22) < v20 )
            {
              v18 = v12 < a2;
              goto LABEL_20;
            }
          }
          return 1;
        }
      }
LABEL_20:
      if ( v12 == a2 )
        return 1;
      if ( v12 - 1 >= a2 )
        core::panicking::panic_bounds_check(v12 - 1, a2, &off_2DD248);
      if ( !v18 )
        core::panicking::panic_bounds_check(v12, a2, &off_2DD248);
      v66 = v11;
      v23 = (int *)&v2[3 * v12 - 3];
      v68 = *v23;
      v71 = v23[1];
      v74 = v23[2];
      v77 = v23[3];
      v80 = v23[4];
      v81 = v23[5];
      v24 = &v2[3 * v12];
      v25 = *((_DWORD *)v24 + 1);
      v26 = *((_DWORD *)v24 + 2);
      v27 = *((_DWORD *)v24 + 3);
      v28 = *((_DWORD *)v24 + 4);
      v29 = *((_DWORD *)v24 + 5);
      *v23 = *(_DWORD *)v24;
      v23[1] = v25;
      v23[2] = v26;
      v23[3] = v27;
      v23[4] = v28;
      v23[5] = v29;
      *(_DWORD *)v24 = v68;
      *((_DWORD *)v24 + 1) = v71;
      *((_DWORD *)v24 + 2) = v74;
      *((_DWORD *)v24 + 3) = v77;
      *((_DWORD *)v24 + 4) = v80;
      *((_DWORD *)v24 + 5) = v81;
      if ( v12 >= 2 )
      {
        v30 = v12 - 2;
        v67 = *(_QWORD *)v23;
        v31 = (int *)&v2[3 * v12 - 6];
        if ( *(_QWORD *)v23 < *(_QWORD *)v31 )
        {
          v69 = v23[2];
          v72 = v23[3];
          v75 = v23[4];
          v78 = v23[5];
          v32 = v31[1];
          v33 = v31[2];
          v34 = v31[3];
          v35 = v31[4];
          v36 = v31[5];
          *v23 = *v31;
          v23[1] = v32;
          v23[2] = v33;
          v23[3] = v34;
          v23[4] = v35;
          v23[5] = v36;
          if ( v12 != 2 && v67 < *(v24 - 9) )
          {
            v37 = &v62[3 * v12];
            while ( 1 )
            {
              v31 = (int *)(v37 - 3);
              --v30;
              v38 = *((_DWORD *)v37 - 5);
              v39 = *((_DWORD *)v37 - 4);
              v40 = *((_DWORD *)v37 - 3);
              v41 = *((_DWORD *)v37 - 2);
              v42 = *((_DWORD *)v37 - 1);
              *(_DWORD *)v37 = *((_DWORD *)v37 - 6);
              *((_DWORD *)v37 + 1) = v38;
              *((_DWORD *)v37 + 2) = v39;
              *((_DWORD *)v37 + 3) = v40;
              *((_DWORD *)v37 + 4) = v41;
              *((_DWORD *)v37 + 5) = v42;
              if ( !v30 )
                break;
              v43 = *(v37 - 6);
              v37 -= 3;
              if ( v67 >= v43 )
                goto LABEL_32;
            }
            v31 = v65;
          }
LABEL_32:
          *v31 = v67;
          v31[2] = v69;
          v31[3] = v72;
          v31[4] = v75;
          v31[5] = v78;
          a2 = v64;
          v31[1] = HIDWORD(v67);
        }
      }
      v44 = a2 - v12;
      if ( a2 - v12 >= 2 )
      {
        v45 = *v24;
        v13 = v24 + 3;
        a2 = v64;
        if ( v24[3] < *v24 )
        {
          v70 = *((_DWORD *)v24 + 2);
          v73 = *((_DWORD *)v24 + 3);
          v76 = *((_DWORD *)v24 + 4);
          v79 = *((_DWORD *)v24 + 5);
          v46 = *((_DWORD *)v24 + 7);
          v47 = *((_DWORD *)v24 + 8);
          v48 = *((_DWORD *)v24 + 9);
          v49 = *((_DWORD *)v24 + 10);
          v50 = *((_DWORD *)v24 + 11);
          *(_DWORD *)v24 = *v13;
          *((_DWORD *)v24 + 1) = v46;
          *((_DWORD *)v24 + 2) = v47;
          *((_DWORD *)v24 + 3) = v48;
          *((_DWORD *)v24 + 4) = v49;
          *((_DWORD *)v24 + 5) = v50;
          if ( v44 >= 3 )
          {
            v52 = *((_DWORD *)v24 + 12);
            v51 = v24 + 6;
            if ( __PAIR64__(*((_DWORD *)v51 + 1), v52) < v45 )
            {
              v53 = v61 - v12;
              while ( 1 )
              {
                --v53;
                v54 = *((_DWORD *)v51 + 1);
                v55 = *((_DWORD *)v51 + 2);
                v56 = *((_DWORD *)v51 + 3);
                v57 = *((_DWORD *)v51 + 4);
                v58 = *((_DWORD *)v51 + 5);
                v59 = v51 - 3;
                *v59 = *(_DWORD *)v51;
                v59[1] = v54;
                v59[2] = v55;
                v59[3] = v56;
                v59[4] = v57;
                v59[5] = v58;
                if ( !v53 )
                  break;
                v60 = v51[3];
                v13 = v51;
                v51 += 3;
                if ( v60 >= v45 )
                  goto LABEL_11;
              }
              v13 = v51;
            }
          }
LABEL_11:
          v13[2] = v70;
          a2 = v64;
          *(_QWORD *)v13 = v45;
          v13[4] = v76;
          v13[3] = v73;
          v13[5] = v79;
        }
      }
      v2 = (unsigned __int64 *)v65;
      v10 = v63;
      v11 = v66 + 1;
    }
    while ( v66 != 4 );
    return v12 == a2;
  }
  else
  {
    v3 = 1;
    if ( a2 <= 1 )
      return v3 == a2;
    v4 = a1[3];
    if ( v4 < *a1 )
    {
      return v3 == a2;
    }
    else
    {
      v5 = a1 + 6;
      v6 = 2;
      while ( a2 != v6 )
      {
        v7 = *v5;
        v5 += 3;
        ++v6;
        v8 = v7 >= v4;
        v4 = v7;
        if ( !v8 )
        {
          v3 = v6 - 1;
          return v3 == a2;
        }
      }
      return 1;
    }
  }
}
