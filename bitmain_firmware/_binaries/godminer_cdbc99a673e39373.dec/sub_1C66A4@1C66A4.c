int __fastcall sub_1C66A4(int result, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r9
  _BOOL4 v3; // r6
  unsigned __int8 *v4; // r10
  int v5; // r5
  unsigned __int8 *v6; // r11
  unsigned int v7; // r12
  unsigned __int8 *v8; // r4
  int v9; // r2
  unsigned int v10; // r8
  int v11; // r3
  unsigned int v12; // r3
  int v13; // r3
  _BOOL4 v14; // r3
  int v15; // r2
  unsigned __int8 *v16; // r6
  unsigned int v17; // r7
  _BOOL4 v18; // r8
  int v19; // r5
  unsigned int v20; // lr
  int v21; // r2
  unsigned int v22; // r11
  int v23; // r4
  unsigned int v24; // r3
  int v25; // r4
  int v26; // r3
  int v27; // r11
  _BOOL4 v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r4
  unsigned int v31; // r3
  _BOOL4 v32; // r11
  int v33; // r5
  unsigned int v34; // r3
  int v35; // r3
  int v36; // r6
  int v37; // r6
  unsigned int v38; // r6
  int v39; // r7
  _BOOL4 v40; // r5
  unsigned __int8 *v41; // r2
  unsigned __int8 *v42; // r7
  int v43; // r5
  int v44; // r6
  int v45; // r6
  unsigned __int8 *v46; // r11
  unsigned __int8 *v47; // r3
  unsigned int v48; // r3
  int v49; // r3
  unsigned int v50; // r2
  int v51; // r7
  bool v52; // cf
  _BOOL4 v53; // r7
  _BOOL4 v54; // r3
  unsigned int v55; // r6
  int v56; // r6
  unsigned int v57; // r3
  unsigned __int8 *v58; // r2
  int v59; // t1
  unsigned __int8 *v60; // r11
  _BOOL4 v61; // r3
  bool v62; // zf
  unsigned int v63; // r3
  unsigned int v64; // r5
  int v65; // r3
  unsigned int v66; // [sp+0h] [bp-14h]
  int v67; // [sp+4h] [bp-10h]
  unsigned __int8 *v68; // [sp+8h] [bp-Ch]
  unsigned int v69; // [sp+Ch] [bp-8h]
  unsigned __int8 *v70; // [sp+Ch] [bp-8h]
  int v71; // [sp+10h] [bp-4h]

  v2 = a2[1];
  v3 = 0;
  v4 = *a2;
  v5 = 0;
  if ( v2 && (v3 = *v4 == 48, v5 = 0, v6 = v4 + 1, v7 = *v4 - 48, v7 < 0xA) )
  {
    v5 = 1;
    v8 = v2 - 1;
    v9 = 1;
    if ( v2 == (unsigned __int8 *)1 )
      goto LABEL_16;
    v10 = *v6 - 48;
    v11 = 0;
    if ( v10 < 0xA )
    {
      v8 = v2 - 2;
      v11 = 1;
      v6 = v4 + 2;
    }
    if ( v11 != 1 )
    {
LABEL_16:
      v9 = 0;
    }
    else
    {
      v12 = 10 * (unsigned __int8)v7;
      if ( v12 >> 8 )
        goto LABEL_136;
      v7 = (unsigned __int8)v12 + (unsigned __int8)v10;
      if ( v10 > 0xFF || (unsigned __int8)v7 != v7 )
        goto LABEL_136;
      if ( v8 )
      {
        v10 = *v6 - 48;
        v13 = 0;
        if ( v10 < 0xA )
        {
          --v8;
          v13 = 1;
          ++v6;
        }
      }
      else
      {
        v13 = 0;
      }
      if ( v13 == 1 )
      {
        v34 = 10 * (unsigned __int8)v7;
        if ( v34 >> 8 )
          goto LABEL_136;
        v7 = (unsigned __int8)v34 + (unsigned __int8)v10;
        if ( v10 > 0xFF || (unsigned __int8)v7 != v7 )
          goto LABEL_136;
        if ( v8 )
        {
          v35 = 0;
          if ( (unsigned int)*v6 - 48 < 0xA )
          {
            --v8;
            v35 = 1;
            ++v6;
          }
        }
        else
        {
          v35 = 0;
        }
        if ( v35 == 1 )
          goto LABEL_136;
      }
    }
  }
  else
  {
    v8 = a2[1];
    v6 = *a2;
    v9 = 1;
    LOBYTE(v7) = 0;
  }
  v14 = v5 != 1;
  if ( v3 )
    v14 = v9;
  if ( !v14 )
  {
    if ( v8 )
    {
      v16 = v6 + 1;
      v15 = *v6;
      if ( v15 == 46 )
      {
        v17 = (unsigned int)(v8 - 1);
        v18 = 0;
        if ( v8 != (unsigned __int8 *)1 )
          v15 = *v16;
        v19 = 0;
        if ( v8 == (unsigned __int8 *)1 )
        {
          v21 = 1;
        }
        else
        {
          v18 = v15 == 48;
          v19 = 0;
          v20 = v6[1] - 48;
          if ( v20 < 0xA )
          {
            v17 = (unsigned int)(v8 - 2);
            v16 = v6 + 2;
            v19 = 1;
          }
          v21 = 1;
          if ( v19 == 1 )
          {
            if ( v20 > 0xFF )
              goto LABEL_136;
            if ( !v17 )
              goto LABEL_42;
            v22 = *v16 - 48;
            v23 = 0;
            if ( v22 < 0xA )
            {
              --v17;
              v23 = 1;
              ++v16;
            }
            if ( v23 == 1 )
            {
              v24 = 10 * (unsigned __int8)v20;
              if ( v24 >> 8 )
                goto LABEL_136;
              v20 = (unsigned __int8)v24 + (unsigned __int8)v22;
              v25 = (unsigned __int8)v20;
              if ( v22 > 0xFF || (unsigned __int8)v20 != v20 )
                goto LABEL_136;
              if ( v17 )
              {
                v26 = 0;
                v69 = *v16 - 48;
                v25 = (unsigned __int8)v20;
                if ( v69 < 0xA )
                {
                  v26 = 1;
                  --v17;
                  ++v16;
                }
                v27 = v26;
              }
              else
              {
                v27 = 0;
              }
              if ( v27 == 1 )
              {
                v48 = 2 * (4 * v25 + (unsigned __int8)v20);
                if ( v48 >> 8 )
                  goto LABEL_136;
                v20 = (unsigned __int8)v48 + (unsigned __int8)v69;
                if ( v69 > 0xFF || (unsigned __int8)v20 != v20 )
                  goto LABEL_136;
                if ( v17 )
                {
                  v49 = 0;
                  if ( (unsigned int)*v16 - 48 < 0xA )
                  {
                    --v17;
                    v49 = 1;
                    ++v16;
                  }
                }
                else
                {
                  v49 = 0;
                }
                if ( v49 == 1 )
                  goto LABEL_136;
              }
            }
            else
            {
LABEL_42:
              v21 = 0;
            }
LABEL_43:
            v28 = v19 != 1;
            if ( v18 )
              v28 = v21;
            if ( v28 )
              goto LABEL_136;
            if ( !v17 )
              goto LABEL_136;
            v30 = (unsigned int)(v16 + 1);
            v29 = *v16;
            if ( v29 != 46 )
              goto LABEL_136;
            v31 = v17 - 1;
            v32 = 0;
            if ( v17 != 1 )
              v29 = *(unsigned __int8 *)v30;
            v33 = 0;
            if ( v17 != 1 )
            {
              v32 = v29 == 48;
              v29 = v16[1] - 48;
              v33 = 0;
              if ( v29 < 0xA )
              {
                v31 = v17 - 2;
                v30 = (unsigned int)(v16 + 2);
                v33 = 1;
              }
            }
            v36 = 1;
            if ( v33 == 1 )
            {
              LOBYTE(v71) = v29;
              if ( v29 > 0xFF )
                goto LABEL_136;
              if ( v31 )
              {
                v17 = *(unsigned __int8 *)v30 - 48;
                v37 = 0;
                if ( v17 < 0xA )
                {
                  --v31;
                  v37 = 1;
                  ++v30;
                }
              }
              else
              {
                v37 = 0;
              }
              if ( v37 == 1 )
              {
                v38 = 10 * (unsigned __int8)v29;
                if ( v38 >> 8 )
                  goto LABEL_136;
                v71 = (unsigned __int8)v38 + (unsigned __int8)v17;
                if ( v17 > 0xFF || (unsigned __int8)v71 != v71 )
                  goto LABEL_136;
                if ( v31 )
                {
                  v39 = 0;
                  v69 = *(unsigned __int8 *)v30 - 48;
                  if ( v69 < 0xA )
                  {
                    --v31;
                    v39 = 1;
                    ++v30;
                  }
                }
                else
                {
                  v39 = 0;
                }
                if ( v39 == 1 )
                {
                  v55 = 10 * (unsigned __int8)v71;
                  if ( v55 >> 8 )
                    goto LABEL_136;
                  v71 = (unsigned __int8)v55 + (unsigned __int8)v69;
                  if ( v69 > 0xFF || (unsigned __int8)v71 != v71 )
                    goto LABEL_136;
                  if ( v31 )
                  {
                    v56 = 0;
                    if ( (unsigned int)*(unsigned __int8 *)v30 - 48 < 0xA )
                    {
                      --v31;
                      v56 = 1;
                      ++v30;
                    }
                  }
                  else
                  {
                    v56 = 0;
                  }
                  v62 = v56 == 1;
                  v36 = 1;
                  if ( v62 )
                    goto LABEL_136;
                }
                else
                {
                  v36 = 1;
                }
              }
              else
              {
                v36 = 0;
              }
            }
            else
            {
              LOBYTE(v71) = 0;
            }
            v40 = v33 != 1;
            if ( v32 )
              v40 = v36;
            if ( v40 )
              goto LABEL_136;
            if ( !v31 )
              goto LABEL_136;
            v41 = (unsigned __int8 *)(v30 + 1);
            if ( *(_BYTE *)v30 != 46 )
              goto LABEL_136;
            v42 = (unsigned __int8 *)(v31 - 1);
            v43 = 0;
            if ( v31 != 1 )
              v43 = *v41;
            v44 = 0;
            if ( v31 == 1 )
              goto LABEL_103;
            v43 = v43 == 48;
            v45 = *(unsigned __int8 *)(v30 + 1);
            v46 = (unsigned __int8 *)(v30 + 2);
            v47 = (unsigned __int8 *)(v31 - 2);
            a2[1] = v47;
            v30 = v45 - 48;
            v44 = 0;
            *a2 = v46;
            if ( v30 >= 0xA )
            {
LABEL_103:
              v47 = v42;
              v46 = v41;
              *a2 = v41;
              a2[1] = v42;
            }
            else
            {
              v44 = 1;
            }
            v50 = 1;
            if ( v44 != 1 )
            {
              v30 = 0;
              goto LABEL_110;
            }
            if ( v30 > 0xFF )
              goto LABEL_136;
            if ( v47 )
            {
              v51 = *v46;
              v70 = v46 + 1;
              *a2 = v46 + 1;
              v50 = v51 - 48;
              v52 = (unsigned int)(v51 - 48) >= 0xA;
              v68 = v47 - 1;
              v53 = (unsigned int)(v51 - 48) < 0xA;
              a2[1] = v47 - 1;
              if ( !v52 )
              {
LABEL_126:
                if ( !v53 )
                {
                  v50 = 0;
                  goto LABEL_110;
                }
                v57 = 10 * (unsigned __int8)v30;
                if ( v57 >> 8 )
                  goto LABEL_136;
                v30 = (unsigned __int8)v57 + (unsigned __int8)v50;
                if ( v50 > 0xFF || (unsigned __int8)v30 != v30 )
                  goto LABEL_136;
                v67 = v43;
                if ( v68 )
                {
                  v58 = v68 - 1;
                  a2[1] = v68 - 1;
                  v59 = *v70;
                  *a2 = v70 + 1;
                  v60 = v70 + 1;
                  v61 = (unsigned int)(v59 - 48) < 0xA;
                  v66 = v59 - 48;
                  if ( (unsigned int)(v59 - 48) < 0xA )
                    goto LABEL_143;
                }
                else
                {
                  v61 = 0;
                }
                v60 = v70;
                v58 = v68;
                *a2 = v70;
                a2[1] = v68;
LABEL_143:
                if ( v61 )
                {
                  v63 = 10 * (unsigned __int8)v30;
                  if ( v63 >> 8 )
                    goto LABEL_136;
                  v30 = (unsigned __int8)v63 + (unsigned __int8)v66;
                  if ( v66 > 0xFF || (unsigned __int8)v30 != v30 )
                    goto LABEL_136;
                  if ( v58 )
                  {
                    v64 = *v60 - 48;
                    *a2 = v60 + 1;
                    a2[1] = v58 - 1;
                    v65 = 0;
                    if ( v64 < 0xA )
                    {
                      v65 = 1;
                      goto LABEL_154;
                    }
                  }
                  else
                  {
                    v65 = 0;
                  }
                  *a2 = v60;
                  a2[1] = v58;
LABEL_154:
                  v43 = v67;
                  v50 = 1;
                  if ( v65 == 1 )
                    goto LABEL_136;
                  goto LABEL_110;
                }
                v50 = 1;
LABEL_110:
                v54 = v44 != 1;
                if ( v43 )
                  v54 = v50;
                if ( !v54 )
                {
                  *(_BYTE *)result = 1;
                  *(_DWORD *)(result + 1) = (v30 << 24)
                                          | ((unsigned __int8)v71 << 16)
                                          | ((unsigned __int8)v20 << 8)
                                          | (unsigned __int8)v7;
                  return result;
                }
                goto LABEL_136;
              }
            }
            else
            {
              v53 = 0;
            }
            *a2 = v46;
            a2[1] = v47;
            v68 = v47;
            v70 = v46;
            goto LABEL_126;
          }
        }
        LOBYTE(v20) = 0;
        goto LABEL_43;
      }
    }
  }
LABEL_136:
  *a2 = v4;
  a2[1] = v2;
  *(_BYTE *)result = 0;
  return result;
}
