int __fastcall <rustc_demangle::legacy::Demangle as core::fmt::Display>::fmt(int a1, int *a2)
{
  int v2; // r11
  char *v3; // r4
  int v4; // r9
  int v5; // r0
  char *v6; // r7
  unsigned int v7; // r6
  unsigned int v8; // r5
  char *v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r3
  unsigned int v13; // r8
  char *v14; // r10
  char *v15; // r4
  int v16; // t1
  int v17; // r0
  bool v18; // zf
  bool v19; // zf
  char *v20; // r0
  char *v21; // r11
  unsigned int v22; // r7
  int v23; // r0
  int v24; // r1
  unsigned int v25; // r0
  unsigned int v26; // r6
  char *v27; // r1
  unsigned int v28; // r4
  char *v29; // r3
  int v30; // r6
  unsigned int v31; // r2
  int v32; // r3
  int v33; // r6
  int v34; // r6
  _WORD *v35; // r9
  unsigned int v36; // r1
  unsigned int v37; // r3
  unsigned int v38; // r2
  int v39; // r6
  unsigned int v40; // r0
  const char *v41; // r1
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r2
  char *v46; // r0
  unsigned int v47; // r3
  bool v48; // cf
  int v49; // r4
  char *v50; // r6
  int v51; // t1
  int v52; // lr
  int v53; // r0
  int v54; // r0
  unsigned int v55; // r3
  unsigned int v56; // r0
  int v57; // r0
  char *v58; // r1
  int v59; // r2
  unsigned int v60; // r0
  int v61; // r2
  int v62; // r3
  int v63; // r3
  int v64; // r0
  unsigned int v65; // r0
  unsigned int v67; // r1
  unsigned int v68; // r2
  char **v69; // r0
  unsigned int v70; // r1
  char **v71; // r0
  char **v72; // r1
  char **v73; // r0
  unsigned int v74; // [sp+4h] [bp-40h]
  int v75; // [sp+8h] [bp-3Ch]
  int v76; // [sp+Ch] [bp-38h]
  char *v77; // [sp+10h] [bp-34h]
  unsigned int v78; // [sp+14h] [bp-30h]
  int v79; // [sp+14h] [bp-30h]
  int v81; // [sp+1Ch] [bp-28h] BYREF
  unsigned int v82; // [sp+20h] [bp-24h]
  char *v83; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v84; // [sp+2Ch] [bp-18h]
  int v85; // [sp+30h] [bp-14h]
  unsigned int v86; // [sp+34h] [bp-10h]
  int v87; // [sp+38h] [bp-Ch]
  int v88; // [sp+3Ch] [bp-8h]
  int v89; // [sp+40h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(char **)a1;
  v76 = 0;
  v78 = *(_DWORD *)(a1 + 4);
  v75 = v2;
  do
  {
    v4 = v76;
    if ( v76 == v2 )
      return 0;
    if ( !v78 )
      goto LABEL_178;
    ++v76;
    v5 = (unsigned __int8)*v3;
    v6 = v3;
    v7 = v78;
    v8 = 0;
    if ( (char)v5 > -1 )
    {
LABEL_16:
      if ( (unsigned int)(v5 - 48) >= 0xA )
        goto LABEL_17;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v9 = &v3[v8];
      v10 = v3[v8 + 1] & 0x3F;
      v11 = v5 & 0x1F;
      if ( (unsigned int)v5 <= 0xDF )
      {
        v5 = v10 | (v11 << 6);
        goto LABEL_16;
      }
      v12 = v9[2] & 0x3F | (v10 << 6);
      if ( (unsigned int)v5 >= 0xF0 )
      {
        v5 = v9[3] & 0x3F | (v12 << 6) | ((v5 & 7) << 18);
        if ( v5 == 1114112 )
          goto LABEL_178;
        goto LABEL_16;
      }
      if ( (v12 | (unsigned int)(v11 << 12)) - 48 >= 0xA )
        break;
LABEL_6:
      if ( v7 <= 1 )
      {
        if ( v78 - 1 == v8 )
LABEL_178:
          core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2EDB24);
LABEL_179:
        v67 = v7;
        v68 = 1;
        v69 = &off_2EDA34;
        goto LABEL_180;
      }
      v5 = v3[v8 + 1];
      if ( v5 <= -65 )
        goto LABEL_179;
      v5 = (unsigned __int8)v5;
      ++v8;
      --v7;
      if ( (char)v5 > -1 )
        goto LABEL_16;
    }
LABEL_17:
    if ( v8 && (v78 < v7 || v3[v8] <= -65) )
      core::str::slice_error_fail(v3, v78, 0, v8, (int)&off_2EDA44);
    core::num::<impl core::str::traits::FromStr for usize>::from_str((int)&v83, (unsigned __int8 *)v3, v8);
    if ( (_BYTE)v83 )
    {
      LOBYTE(v81) = BYTE1(v83);
      core::result::unwrap_failed((int)aCalledResultUn_0, 43, (int)&v81, (int)&off_2ED9C4, (int)&off_2EDA54);
    }
    v13 = v84;
    v14 = &v3[v8];
    v3 += v8;
    if ( !v84 )
      goto LABEL_28;
    if ( v7 <= v84 )
    {
      if ( v78 - v84 == v8 )
      {
        v3 = &v6[v84 + v8];
        goto LABEL_28;
      }
LABEL_187:
      v67 = v7;
      v68 = v84;
      v69 = &off_2EDA64;
LABEL_180:
      core::str::slice_error_fail(&v6[v8], v67, v68, v7, (int)v69);
    }
    v15 = &v6[v84];
    if ( v6[v84 + v8] <= -65 )
      goto LABEL_187;
    v16 = v15[v8];
    v3 = &v15[v8];
    if ( v16 <= -65 )
      core::str::slice_error_fail(&v6[v8], v7, 0, v84, (int)&off_2EDA74);
LABEL_28:
    v79 = v78 - v84;
    v17 = core::fmt::Formatter::alternate(a2);
    v18 = v13 == 0;
    v77 = v3;
    if ( v13 )
      v18 = v17 == 0;
    if ( v18 )
      goto LABEL_34;
    v19 = v76 == v2;
    if ( v76 == v2 )
      v19 = *v14 == 104;
    if ( !v19 )
      goto LABEL_34;
    v39 = 0;
    if ( v13 < 2 )
      return v39;
    v20 = &v6[v8];
    v58 = &v6[v8 + 1];
    v59 = *v58;
    if ( v59 < -64 )
    {
      v72 = &off_2EDA24;
LABEL_195:
      core::str::slice_error_fail(v20, v13, 1u, v13, (int)v72);
    }
    v60 = (unsigned __int8)v59;
    if ( (char)v59 > -1 )
      goto LABEL_167;
    while ( 1 )
    {
      v61 = v60 & 0x1F;
      v62 = v58[1] & 0x3F;
      if ( v60 <= 0xDF )
      {
        v60 = v62 | (v61 << 6);
        v58 += 2;
        if ( v60 - 48 >= 0xA )
          goto LABEL_168;
        goto LABEL_171;
      }
      v63 = v58[2] & 0x3F | (v62 << 6);
      if ( v60 >= 0xF0 )
        break;
      v60 = v63 | (v61 << 12);
      v58 += 3;
      v3 = v77;
      if ( v60 - 48 >= 0xA )
        goto LABEL_168;
      while ( 1 )
      {
LABEL_171:
        if ( v58 == v3 )
          return v39;
        v60 = (unsigned __int8)*v58;
        if ( (char)v60 <= -1 )
          break;
LABEL_167:
        ++v58;
        if ( v60 - 48 >= 0xA )
          goto LABEL_168;
      }
    }
    v3 = v77;
    v60 = v58[3] & 0x3F | (v63 << 6) | ((v60 & 7) << 18);
    if ( v60 == 1114112 )
      return v39;
    v58 += 4;
    if ( v60 - 48 < 0xA )
      goto LABEL_171;
LABEL_168:
    v64 = (v60 | 0x20) - 97;
    v48 = __CFADD__(v64, 10);
    v65 = v64 + 10;
    if ( v48 )
      v65 = -1;
    if ( v65 <= 0xF )
      goto LABEL_171;
LABEL_34:
    if ( v4 && <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2BC24A, 2) )
      return 1;
    if ( v13 >= 2 && *(_WORD *)v14 == 9311 )
    {
      v20 = &v6[v8];
      v14 = &v6[v8 + 1];
      if ( *v14 <= -65 )
      {
        v72 = &off_2EDA84;
        goto LABEL_195;
      }
      --v13;
    }
    v78 = v79 - v8;
LABEL_41:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v21 = v14;
          v22 = v13;
          if ( !v13 )
            goto LABEL_52;
          v23 = (unsigned __int8)*v14;
          if ( v23 != 36 )
          {
            if ( v23 != 46 )
            {
LABEL_52:
              v26 = 0;
              v27 = v14;
              while ( 1 )
              {
                if ( v27 == &v14[v13] )
                  goto LABEL_152;
                v28 = v26;
                v29 = v27 + 1;
                v30 = *v27;
                v31 = (unsigned __int8)v30;
                if ( v30 <= -1 )
                {
                  v32 = v30 & 0x1F;
                  v33 = v27[1] & 0x3F;
                  if ( v31 <= 0xDF )
                  {
                    v31 = v33 | (v32 << 6);
                    v29 = v27 + 2;
                    if ( v31 == 36 )
                      goto LABEL_66;
                  }
                  else
                  {
                    v34 = v27[2] & 0x3F | (v33 << 6);
                    if ( v31 < 0xF0 )
                    {
                      v31 = v34 | (v32 << 12);
                      v29 = v27 + 3;
                      if ( v31 == 36 )
                        goto LABEL_66;
                    }
                    else
                    {
                      v31 = v27[3] & 0x3F | (v34 << 6) | ((v32 & 7) << 18);
                      if ( v31 == 1114112 )
                        goto LABEL_152;
                      v29 = v27 + 4;
                      if ( v31 == 36 )
                      {
LABEL_66:
                        if ( !v28 )
                        {
                          if ( !<core::fmt::Formatter as core::fmt::Write>::write_str(a2, v14, 0) )
                            goto LABEL_108;
                          return 1;
                        }
                        if ( v13 <= v28 )
                        {
                          if ( v13 != v28 )
                            goto LABEL_184;
                        }
                        else if ( v14[v28] <= -65 )
                        {
LABEL_184:
                          core::str::slice_error_fail(v14, v13, 0, v28, (int)&off_2EDB04);
                        }
                        if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v14, v28) )
                          return 1;
                        if ( v13 <= v28 )
                        {
                          if ( v13 != v28 )
                            goto LABEL_188;
                        }
                        else if ( v14[v28] <= -65 )
                        {
LABEL_188:
                          v70 = v13;
                          v38 = v28;
                          v71 = &off_2EDB14;
                          goto LABEL_189;
                        }
LABEL_108:
                        v13 -= v28;
                        v14 += v28;
                        v3 = v77;
                        goto LABEL_41;
                      }
                    }
                  }
                }
                else if ( (unsigned __int8)v30 == 36 )
                {
                  goto LABEL_66;
                }
                v26 = (unsigned int)&v29[v28 - (_DWORD)v27];
                v27 = v29;
                if ( v31 == 46 )
                  goto LABEL_66;
              }
            }
            ++v14;
            if ( v13 < 2 )
            {
              v39 = 1;
              v13 = 0;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2BC24E, 1) )
                return v39;
              continue;
            }
            if ( *v14 > -65 )
            {
              v14 = v21 + 1;
              v24 = v21[1];
              v25 = (unsigned __int8)v24;
              if ( v24 <= -1 )
              {
                v43 = v24 & 0x1F;
                v44 = v21[2] & 0x3F;
                if ( v25 <= 0xDF )
                {
                  if ( (v44 | (v43 << 6)) == 0x2E )
                    goto LABEL_48;
                }
                else
                {
                  v45 = v21[3] & 0x3F | (v44 << 6);
                  if ( v25 < 0xF0 )
                  {
                    if ( (v45 | (v43 << 12)) == 0x2E )
                      goto LABEL_48;
                  }
                  else if ( (v21[4] & 0x3F | (v45 << 6) | ((v43 & 7) << 18)) == 0x2E )
                  {
                    goto LABEL_48;
                  }
                }
              }
              else if ( (unsigned __int8)v24 == 46 )
              {
LABEL_48:
                if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2BC24A, 2) )
                  return 1;
                if ( v13 >= 3 && v21[2] <= -65 )
                {
                  v70 = v13;
                  v38 = 2;
                  v71 = &off_2EDAB4;
LABEL_189:
                  core::str::slice_error_fail(v21, v70, v38, v13, (int)v71);
                }
                v13 -= 2;
                v14 = v21 + 2;
                continue;
              }
              v39 = 1;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2BC24E, 1) )
                return v39;
              --v13;
              if ( v22 >= 2 && *v14 <= -65 )
              {
                v73 = &off_2EDAA4;
                goto LABEL_192;
              }
              continue;
            }
            v73 = &off_2EDA94;
LABEL_192:
            core::str::slice_error_fail(v21, v22, 1u, v22, (int)v73);
          }
          break;
        }
        if ( v13 >= 2 && v14[1] <= -65 )
        {
          v73 = &off_2EDAC4;
          goto LABEL_192;
        }
        v86 = v13 - 1;
        v84 = v13 - 1;
        v85 = 0;
        v87 = 1;
        v35 = v14 + 1;
        v89 = 36;
        v83 = v14 + 1;
        v88 = 36;
        sub_22BE4C(&v81, (int *)&v83);
        if ( v81 != 1 )
          goto LABEL_153;
        v36 = v82;
        v37 = v82 + 1;
        if ( v82 == -1 )
          core::str::traits::str_index_overflow_fail((int)&off_2EDAD4);
        if ( v13 >= 2 && *(char *)v35 < -64 )
LABEL_182:
          core::str::slice_error_fail(v14, v13, 1u, v37, (int)&off_2EDAD4);
        if ( v37 >= v13 )
        {
          if ( v37 != v13 )
            goto LABEL_182;
          v38 = v82 + 2;
          if ( v82 == -2 )
          {
            v36 = -2;
LABEL_125:
            if ( v21[1] != 117 )
              goto LABEL_153;
            if ( v36 < 2 || v21[2] <= -65 )
              core::str::slice_error_fail(v21 + 1, v36, 1u, v36, (int)&off_2EDAF4);
            goto LABEL_128;
          }
        }
        else
        {
          if ( v14[v37] < -64 )
            goto LABEL_182;
          v38 = v82 + 2;
        }
        if ( v13 <= v38 )
        {
          v40 = v13;
          if ( v13 != v38 )
          {
LABEL_186:
            v70 = v13;
            v71 = &off_2EDAE4;
            goto LABEL_189;
          }
        }
        else
        {
          if ( v14[v38] <= -65 )
            goto LABEL_186;
          v40 = v38;
        }
        v13 -= v40;
        v14 += v40;
        if ( v82 != 1 )
        {
          if ( v82 == 2 )
          {
            v41 = (const char *)&unk_2BC251;
            if ( *v35 == 20563
              || (v41 = asc_2BC254, *v35 == 20546)
              || (v41 = asc_2BC257, *v35 == 18002)
              || (v41 = asc_2BC25A, *v35 == 21580)
              || (v41 = asc_2BC25D, *v35 == 21575)
              || (v41 = asc_2BC260, *v35 == 20556)
              || (v41 = asc_2BC263, *v35 == 20562) )
            {
LABEL_105:
              v39 = 1;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v41, 1) )
                return v39;
              continue;
            }
            v36 = 2;
          }
          else if ( !v82 )
          {
            goto LABEL_153;
          }
          goto LABEL_125;
        }
        break;
      }
      v42 = *(unsigned __int8 *)v35;
      v41 = asc_2BC265;
      if ( v42 == 67 )
        goto LABEL_105;
      if ( v42 != 117 )
        goto LABEL_153;
      v36 = 1;
LABEL_128:
      v46 = v21 + 2;
      while ( 1 )
      {
        v49 = 0;
        if ( v46 == (char *)v35 + v36 )
          break;
        v50 = v46;
        v51 = *v46++;
        v47 = (unsigned __int8)v51;
        if ( v51 <= -1 )
        {
          v52 = v47 & 0x1F;
          v53 = v50[1] & 0x3F;
          if ( v47 <= 0xDF )
          {
            v47 = v53 | (v52 << 6);
            v46 = v50 + 2;
          }
          else
          {
            v54 = v50[2] & 0x3F | (v53 << 6);
            if ( v47 < 0xF0 )
            {
              v47 = v54 | (v52 << 12);
              v46 = v50 + 3;
            }
            else
            {
              v47 = v50[3] & 0x3F | (v54 << 6) | ((v47 & 7) << 18);
              if ( v47 == 1114112 )
                break;
              v46 = v50 + 4;
            }
          }
        }
        v48 = v47 - 48 >= 0xA;
        if ( v47 - 48 >= 0xA )
          v48 = v47 - 97 >= 6;
        if ( v48 )
        {
          v49 = 1;
          break;
        }
      }
      core::num::<impl u32>::from_str_radix(&v83, v21 + 2, v36 - 1, 16);
      v55 = v74;
      if ( !(_BYTE)v83 )
        v55 = v84;
      v74 = v55;
      v56 = v55;
      if ( (v55 ^ 0xD800) - 1114112 < 0xFFEF0800 )
        v56 = 1114112;
      if ( (unsigned __int8)v83 == 1 )
        v56 = 1114112;
      if ( !v49 )
      {
        v3 = v77;
        if ( v56 == 1114112 )
          goto LABEL_153;
        v83 = (char *)v56;
        if ( core::unicode::unicode_data::cc::lookup(v56) )
          goto LABEL_153;
        if ( <char as core::fmt::Display>::fmt((unsigned int *)&v83, a2) )
          return 1;
        continue;
      }
      break;
    }
LABEL_152:
    v3 = v77;
LABEL_153:
    v57 = <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v21, v22);
    v2 = v75;
  }
  while ( !v57 );
  return 1;
}
