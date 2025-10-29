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
  int v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r2
  char *v45; // r0
  unsigned int v46; // r3
  bool v47; // cf
  int v48; // r4
  char *v49; // r6
  int v50; // t1
  int v51; // lr
  int v52; // r0
  int v53; // r0
  unsigned int v54; // r3
  unsigned int v55; // r0
  char *v56; // r1
  int v57; // r2
  unsigned int v58; // r0
  int v59; // r2
  int v60; // r3
  int v61; // r3
  int v62; // r0
  unsigned int v63; // r0
  unsigned int v65; // r1
  unsigned int v66; // r2
  char **v67; // r0
  unsigned int v68; // r1
  char **v69; // r0
  char **v70; // r1
  char **v71; // r0
  unsigned int v72; // [sp+4h] [bp-40h]
  int v73; // [sp+8h] [bp-3Ch]
  int v74; // [sp+Ch] [bp-38h]
  char *v75; // [sp+10h] [bp-34h]
  unsigned int v76; // [sp+14h] [bp-30h]
  int v77; // [sp+14h] [bp-30h]
  int v79; // [sp+1Ch] [bp-28h] BYREF
  unsigned int v80; // [sp+20h] [bp-24h]
  char *v81; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v82; // [sp+2Ch] [bp-18h]
  int v83; // [sp+30h] [bp-14h]
  unsigned int v84; // [sp+34h] [bp-10h]
  int v85; // [sp+38h] [bp-Ch]
  int v86; // [sp+3Ch] [bp-8h]
  int v87; // [sp+40h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(char **)a1;
  v74 = 0;
  v76 = *(_DWORD *)(a1 + 4);
  v73 = v2;
  do
  {
    v4 = v74;
    if ( v74 == v2 )
      return 0;
    if ( !v76 )
      goto LABEL_178;
    ++v74;
    v5 = (unsigned __int8)*v3;
    v6 = v3;
    v7 = v76;
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
        if ( v76 - 1 == v8 )
LABEL_178:
          core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2CDB24);
LABEL_179:
        v65 = v7;
        v66 = 1;
        v67 = &off_2CDA34;
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
    if ( v8 && (v76 < v7 || v3[v8] <= -65) )
      core::str::slice_error_fail(v3, v76, 0, v8, (int)&off_2CDA44);
    core::num::<impl core::str::traits::FromStr for usize>::from_str((int)&v81, (unsigned __int8 *)v3, v8);
    if ( (_BYTE)v81 )
    {
      LOBYTE(v79) = BYTE1(v81);
      core::result::unwrap_failed((int)aCalledResultUn_0, 43, (int)&v79, (int)&off_2CD9C4, (int)&off_2CDA54);
    }
    v13 = v82;
    v14 = &v3[v8];
    v3 += v8;
    if ( !v82 )
      goto LABEL_28;
    if ( v7 <= v82 )
    {
      if ( v76 - v82 == v8 )
      {
        v3 = &v6[v82 + v8];
        goto LABEL_28;
      }
LABEL_187:
      v65 = v7;
      v66 = v82;
      v67 = &off_2CDA64;
LABEL_180:
      core::str::slice_error_fail(&v6[v8], v65, v66, v7, (int)v67);
    }
    v15 = &v6[v82];
    if ( v6[v82 + v8] <= -65 )
      goto LABEL_187;
    v16 = v15[v8];
    v3 = &v15[v8];
    if ( v16 <= -65 )
      core::str::slice_error_fail(&v6[v8], v7, 0, v82, (int)&off_2CDA74);
LABEL_28:
    v77 = v76 - v82;
    v17 = core::fmt::Formatter::alternate((int)a2);
    v18 = v13 == 0;
    v75 = v3;
    if ( v13 )
      v18 = v17 == 0;
    if ( v18 )
      goto LABEL_34;
    v19 = v74 == v2;
    if ( v74 == v2 )
      v19 = *v14 == 104;
    if ( !v19 )
      goto LABEL_34;
    v39 = 0;
    if ( v13 < 2 )
      return v39;
    v20 = &v6[v8];
    v56 = &v6[v8 + 1];
    v57 = *v56;
    if ( v57 < -64 )
    {
      v70 = &off_2CDA24;
LABEL_195:
      core::str::slice_error_fail(v20, v13, 1u, v13, (int)v70);
    }
    v58 = (unsigned __int8)v57;
    if ( (char)v57 > -1 )
      goto LABEL_167;
    while ( 1 )
    {
      v59 = v58 & 0x1F;
      v60 = v56[1] & 0x3F;
      if ( v58 <= 0xDF )
      {
        v58 = v60 | (v59 << 6);
        v56 += 2;
        if ( v58 - 48 >= 0xA )
          goto LABEL_168;
        goto LABEL_171;
      }
      v61 = v56[2] & 0x3F | (v60 << 6);
      if ( v58 >= 0xF0 )
        break;
      v58 = v61 | (v59 << 12);
      v56 += 3;
      v3 = v75;
      if ( v58 - 48 >= 0xA )
        goto LABEL_168;
      while ( 1 )
      {
LABEL_171:
        if ( v56 == v3 )
          return v39;
        v58 = (unsigned __int8)*v56;
        if ( (char)v58 <= -1 )
          break;
LABEL_167:
        ++v56;
        if ( v58 - 48 >= 0xA )
          goto LABEL_168;
      }
    }
    v3 = v75;
    v58 = v56[3] & 0x3F | (v61 << 6) | ((v58 & 7) << 18);
    if ( v58 == 1114112 )
      return v39;
    v56 += 4;
    if ( v58 - 48 < 0xA )
      goto LABEL_171;
LABEL_168:
    v62 = (v58 | 0x20) - 97;
    v47 = __CFADD__(v62, 10);
    v63 = v62 + 10;
    if ( v47 )
      v63 = -1;
    if ( v63 <= 0xF )
      goto LABEL_171;
LABEL_34:
    if ( v4 && <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
      return 1;
    if ( v13 >= 2 && *(_WORD *)v14 == 9311 )
    {
      v20 = &v6[v8];
      v14 = &v6[v8 + 1];
      if ( *v14 <= -65 )
      {
        v70 = &off_2CDA84;
        goto LABEL_195;
      }
      --v13;
    }
    v76 = v77 - v8;
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
                          if ( !<core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
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
                          core::str::slice_error_fail(v14, v13, 0, v28, (int)&off_2CDB04);
                        }
                        if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
                          return 1;
                        if ( v13 <= v28 )
                        {
                          if ( v13 != v28 )
                            goto LABEL_188;
                        }
                        else if ( v14[v28] <= -65 )
                        {
LABEL_188:
                          v68 = v13;
                          v38 = v28;
                          v69 = &off_2CDB14;
                          goto LABEL_189;
                        }
LABEL_108:
                        v13 -= v28;
                        v14 += v28;
                        v3 = v75;
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
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
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
                v42 = v24 & 0x1F;
                v43 = v21[2] & 0x3F;
                if ( v25 <= 0xDF )
                {
                  if ( (v43 | (v42 << 6)) == 0x2E )
                    goto LABEL_48;
                }
                else
                {
                  v44 = v21[3] & 0x3F | (v43 << 6);
                  if ( v25 < 0xF0 )
                  {
                    if ( (v44 | (v42 << 12)) == 0x2E )
                      goto LABEL_48;
                  }
                  else if ( (v21[4] & 0x3F | (v44 << 6) | ((v42 & 7) << 18)) == 0x2E )
                  {
                    goto LABEL_48;
                  }
                }
              }
              else if ( (unsigned __int8)v24 == 46 )
              {
LABEL_48:
                if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
                  return 1;
                if ( v13 >= 3 && v21[2] <= -65 )
                {
                  v68 = v13;
                  v38 = 2;
                  v69 = &off_2CDAB4;
LABEL_189:
                  core::str::slice_error_fail(v21, v68, v38, v13, (int)v69);
                }
                v13 -= 2;
                v14 = v21 + 2;
                continue;
              }
              v39 = 1;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
                return v39;
              --v13;
              if ( v22 >= 2 && *v14 <= -65 )
              {
                v71 = &off_2CDAA4;
                goto LABEL_192;
              }
              continue;
            }
            v71 = &off_2CDA94;
LABEL_192:
            core::str::slice_error_fail(v21, v22, 1u, v22, (int)v71);
          }
          break;
        }
        if ( v13 >= 2 && v14[1] <= -65 )
        {
          v71 = &off_2CDAC4;
          goto LABEL_192;
        }
        v84 = v13 - 1;
        v82 = v13 - 1;
        v83 = 0;
        v85 = 1;
        v35 = v14 + 1;
        v87 = 36;
        v81 = v14 + 1;
        v86 = 36;
        sub_215E4C(&v79, (int *)&v81);
        if ( v79 != 1 )
          goto LABEL_153;
        v36 = v80;
        v37 = v80 + 1;
        if ( v80 == -1 )
          core::str::traits::str_index_overflow_fail((int)&off_2CDAD4);
        if ( v13 >= 2 && *(char *)v35 < -64 )
LABEL_182:
          core::str::slice_error_fail(v14, v13, 1u, v37, (int)&off_2CDAD4);
        if ( v37 >= v13 )
        {
          if ( v37 != v13 )
            goto LABEL_182;
          v38 = v80 + 2;
          if ( v80 == -2 )
          {
            v36 = -2;
LABEL_125:
            if ( v21[1] != 117 )
              goto LABEL_153;
            if ( v36 < 2 || v21[2] <= -65 )
              core::str::slice_error_fail(v21 + 1, v36, 1u, v36, (int)&off_2CDAF4);
            goto LABEL_128;
          }
        }
        else
        {
          if ( v14[v37] < -64 )
            goto LABEL_182;
          v38 = v80 + 2;
        }
        if ( v13 <= v38 )
        {
          v40 = v13;
          if ( v13 != v38 )
          {
LABEL_186:
            v68 = v13;
            v69 = &off_2CDAE4;
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
        if ( v80 != 1 )
        {
          if ( v80 == 2 )
          {
            if ( *v35 == 20563
              || *v35 == 20546
              || *v35 == 18002
              || *v35 == 21580
              || *v35 == 21575
              || *v35 == 20556
              || *v35 == 20562 )
            {
LABEL_105:
              v39 = 1;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2) )
                return v39;
              continue;
            }
            v36 = 2;
          }
          else if ( !v80 )
          {
            goto LABEL_153;
          }
          goto LABEL_125;
        }
        break;
      }
      v41 = *(unsigned __int8 *)v35;
      if ( v41 == 67 )
        goto LABEL_105;
      if ( v41 != 117 )
        goto LABEL_153;
      v36 = 1;
LABEL_128:
      v45 = v21 + 2;
      while ( 1 )
      {
        v48 = 0;
        if ( v45 == (char *)v35 + v36 )
          break;
        v49 = v45;
        v50 = *v45++;
        v46 = (unsigned __int8)v50;
        if ( v50 <= -1 )
        {
          v51 = v46 & 0x1F;
          v52 = v49[1] & 0x3F;
          if ( v46 <= 0xDF )
          {
            v46 = v52 | (v51 << 6);
            v45 = v49 + 2;
          }
          else
          {
            v53 = v49[2] & 0x3F | (v52 << 6);
            if ( v46 < 0xF0 )
            {
              v46 = v53 | (v51 << 12);
              v45 = v49 + 3;
            }
            else
            {
              v46 = v49[3] & 0x3F | (v53 << 6) | ((v46 & 7) << 18);
              if ( v46 == 1114112 )
                break;
              v45 = v49 + 4;
            }
          }
        }
        v47 = v46 - 48 >= 0xA;
        if ( v46 - 48 >= 0xA )
          v47 = v46 - 97 >= 6;
        if ( v47 )
        {
          v48 = 1;
          break;
        }
      }
      core::num::<impl u32>::from_str_radix((int)&v81, (unsigned __int8 *)v21 + 2, v36 - 1, 0x10u);
      v54 = v72;
      if ( !(_BYTE)v81 )
        v54 = v82;
      v72 = v54;
      v55 = v54;
      if ( (v54 ^ 0xD800) - 1114112 < 0xFFEF0800 )
        v55 = 1114112;
      if ( (unsigned __int8)v81 == 1 )
        v55 = 1114112;
      if ( !v48 )
      {
        v3 = v75;
        if ( v55 == 1114112 )
          goto LABEL_153;
        v81 = (char *)v55;
        if ( core::unicode::unicode_data::cc::lookup(v55) )
          goto LABEL_153;
        if ( <char as core::fmt::Display>::fmt((unsigned int *)&v81, a2) )
          return 1;
        continue;
      }
      break;
    }
LABEL_152:
    v3 = v75;
LABEL_153:
    v2 = v73;
  }
  while ( !<core::fmt::Formatter as core::fmt::Write>::write_str(a2) );
  return 1;
}
