int __fastcall <rustc_demangle::legacy::Demangle as core::fmt::Display>::fmt(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // r11
  unsigned __int8 *v3; // r4
  unsigned __int8 *v4; // r9
  int v5; // r0
  unsigned __int8 *v6; // r7
  unsigned int v7; // r6
  int v8; // r5
  unsigned __int8 *v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r3
  unsigned int v13; // r8
  unsigned __int8 *v14; // r10
  unsigned __int8 *v15; // r4
  int v16; // t1
  int v17; // r0
  bool v18; // zf
  bool v19; // zf
  char *v20; // r11
  unsigned int v21; // r7
  int v22; // r0
  int v23; // r1
  unsigned int v24; // r0
  char *v25; // r6
  char *v26; // r1
  unsigned int v27; // r4
  char *v28; // r3
  int v29; // r6
  unsigned int v30; // r2
  int v31; // r3
  int v32; // r6
  int v33; // r6
  _WORD *v34; // r9
  unsigned int v35; // r1
  unsigned int v36; // r3
  unsigned int v37; // r2
  int v38; // r6
  unsigned int v39; // r0
  const char *v40; // r1
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
  int v54; // r3
  int v55; // r0
  int v56; // r0
  unsigned __int8 *v57; // r1
  int v58; // r2
  unsigned int v59; // r0
  int v60; // r2
  int v61; // r3
  int v62; // r3
  int v63; // r0
  unsigned int v64; // r0
  int v66; // r0
  int v67; // [sp+4h] [bp-40h]
  unsigned __int8 *v68; // [sp+8h] [bp-3Ch]
  unsigned __int8 *v69; // [sp+Ch] [bp-38h]
  unsigned __int8 *v70; // [sp+10h] [bp-34h]
  unsigned int v71; // [sp+14h] [bp-30h]
  unsigned int v72; // [sp+14h] [bp-30h]
  int v74; // [sp+1Ch] [bp-28h] BYREF
  unsigned int v75; // [sp+20h] [bp-24h]
  char *v76; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v77; // [sp+2Ch] [bp-18h]
  int v78; // [sp+30h] [bp-14h]
  unsigned int v79; // [sp+34h] [bp-10h]
  int v80; // [sp+38h] [bp-Ch]
  int v81; // [sp+3Ch] [bp-8h]
  int v82; // [sp+40h] [bp-4h]

  v2 = a1[2];
  v3 = *a1;
  v69 = 0;
  v71 = (unsigned int)a1[1];
  v68 = v2;
  do
  {
    v4 = v69;
    if ( v69 == v2 )
      return 0;
    if ( !v71 )
      goto LABEL_178;
    ++v69;
    v5 = *v3;
    v6 = v3;
    v7 = v71;
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
        if ( v71 - 1 != v8 )
LABEL_179:
          core::str::slice_error_fail((int)&v6[v8]);
LABEL_178:
        core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2E3B24);
      }
      v5 = (char)v3[v8 + 1];
      if ( v5 <= -65 )
        goto LABEL_179;
      v5 = (unsigned __int8)v5;
      ++v8;
      --v7;
      if ( (char)v5 > -1 )
        goto LABEL_16;
    }
LABEL_17:
    if ( v8 && (v71 < v7 || (char)v3[v8] <= -65) )
      core::str::slice_error_fail((int)v3);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v76, v3, v8);
    if ( (_BYTE)v76 )
    {
      LOBYTE(v74) = BYTE1(v76);
      core::result::unwrap_failed((int)aCalledResultUn_0, 43, (int)&v74, (int)&off_2E39C4, (int)&off_2E3A54);
    }
    v13 = v77;
    v14 = &v3[v8];
    v3 += v8;
    if ( v77 )
    {
      if ( v7 <= v77 )
      {
        if ( v71 - v77 != v8 )
          goto LABEL_179;
        v3 = &v6[v77 + v8];
      }
      else
      {
        v15 = &v6[v77];
        if ( (char)v6[v77 + v8] <= -65 )
          goto LABEL_179;
        v16 = (char)v15[v8];
        v3 = &v15[v8];
        if ( v16 <= -65 )
        {
          v66 = (int)&v6[v8];
LABEL_189:
          core::str::slice_error_fail(v66);
        }
      }
    }
    v72 = v71 - v77;
    v17 = core::fmt::Formatter::alternate(a2);
    v18 = v13 == 0;
    v70 = v3;
    if ( v13 )
      v18 = v17 == 0;
    if ( !v18 )
    {
      v19 = v69 == v2;
      if ( v69 == v2 )
        v19 = *v14 == 104;
      if ( v19 )
      {
        v38 = 0;
        if ( v13 < 2 )
          return v38;
        v66 = (int)&v6[v8];
        v57 = &v6[v8 + 1];
        v58 = (char)*v57;
        if ( v58 < -64 )
          goto LABEL_189;
        v59 = (unsigned __int8)v58;
        if ( (char)v58 > -1 )
          goto LABEL_167;
        while ( 1 )
        {
          v60 = v59 & 0x1F;
          v61 = v57[1] & 0x3F;
          if ( v59 <= 0xDF )
            break;
          v62 = v57[2] & 0x3F | (v61 << 6);
          if ( v59 >= 0xF0 )
          {
            v3 = v70;
            v59 = v57[3] & 0x3F | (v62 << 6) | ((v59 & 7) << 18);
            if ( v59 == 1114112 )
              return v38;
            v57 += 4;
            if ( v59 - 48 >= 0xA )
              goto LABEL_168;
            goto LABEL_171;
          }
          v59 = v62 | (v60 << 12);
          v57 += 3;
          v3 = v70;
          if ( v59 - 48 >= 0xA )
            goto LABEL_168;
          while ( 1 )
          {
LABEL_171:
            if ( v57 == v3 )
              return v38;
            v59 = *v57;
            if ( (char)v59 <= -1 )
              break;
LABEL_167:
            ++v57;
            if ( v59 - 48 >= 0xA )
              goto LABEL_168;
          }
        }
        v59 = v61 | (v60 << 6);
        v57 += 2;
        if ( v59 - 48 < 0xA )
          goto LABEL_171;
LABEL_168:
        v63 = (v59 | 0x20) - 97;
        v47 = __CFADD__(v63, 10);
        v64 = v63 + 10;
        if ( v47 )
          v64 = -1;
        if ( v64 > 0xF )
          goto LABEL_34;
        goto LABEL_171;
      }
    }
LABEL_34:
    if ( v4 && <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2B164A, 2) )
      return 1;
    if ( v13 >= 2 && *(_WORD *)v14 == 9311 )
    {
      v66 = (int)&v6[v8];
      v14 = &v6[v8 + 1];
      if ( (char)*v14 <= -65 )
        goto LABEL_189;
      --v13;
    }
    v71 = v72 - v8;
LABEL_41:
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v20 = (char *)v14;
          v21 = v13;
          if ( !v13 )
            goto LABEL_52;
          v22 = *v14;
          if ( v22 != 36 )
          {
            if ( v22 != 46 )
            {
LABEL_52:
              v25 = 0;
              v26 = (char *)v14;
              while ( 1 )
              {
                if ( v26 == (char *)&v14[v13] )
                  goto LABEL_152;
                v27 = (unsigned int)v25;
                v28 = v26 + 1;
                v29 = *v26;
                v30 = (unsigned __int8)v29;
                if ( v29 <= -1 )
                {
                  v31 = v29 & 0x1F;
                  v32 = v26[1] & 0x3F;
                  if ( v30 <= 0xDF )
                  {
                    v30 = v32 | (v31 << 6);
                    v28 = v26 + 2;
                    if ( v30 == 36 )
                      goto LABEL_66;
                  }
                  else
                  {
                    v33 = v26[2] & 0x3F | (v32 << 6);
                    if ( v30 < 0xF0 )
                    {
                      v30 = v33 | (v31 << 12);
                      v28 = v26 + 3;
                      if ( v30 == 36 )
                        goto LABEL_66;
                    }
                    else
                    {
                      v30 = v26[3] & 0x3F | (v33 << 6) | ((v31 & 7) << 18);
                      if ( v30 == 1114112 )
                        goto LABEL_152;
                      v28 = v26 + 4;
                      if ( v30 == 36 )
                      {
LABEL_66:
                        if ( !v27 )
                        {
                          if ( !<core::fmt::Formatter as core::fmt::Write>::write_str(a2, v14, 0) )
                            goto LABEL_108;
                          return 1;
                        }
                        if ( v13 <= v27 )
                        {
                          if ( v13 != v27 )
                            goto LABEL_183;
                        }
                        else if ( (char)v14[v27] <= -65 )
                        {
LABEL_183:
                          core::str::slice_error_fail((int)v14);
                        }
                        if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v14, v27) )
                          return 1;
                        if ( v13 <= v27 )
                        {
                          if ( v13 != v27 )
                            goto LABEL_187;
                        }
                        else if ( (char)v14[v27] <= -65 )
                        {
                          goto LABEL_187;
                        }
LABEL_108:
                        v13 -= v27;
                        v14 += v27;
                        v3 = v70;
                        goto LABEL_41;
                      }
                    }
                  }
                }
                else if ( (unsigned __int8)v29 == 36 )
                {
                  goto LABEL_66;
                }
                v25 = &v28[v27 - (_DWORD)v26];
                v26 = v28;
                if ( v30 == 46 )
                  goto LABEL_66;
              }
            }
            ++v14;
            if ( v13 < 2 )
            {
              v38 = 1;
              v13 = 0;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2B164E, 1) )
                return v38;
              continue;
            }
            if ( (char)*v14 <= -65 )
              goto LABEL_188;
            v14 = (unsigned __int8 *)(v20 + 1);
            v23 = v20[1];
            v24 = (unsigned __int8)v23;
            if ( v23 <= -1 )
            {
              v42 = v23 & 0x1F;
              v43 = v20[2] & 0x3F;
              if ( v24 <= 0xDF )
              {
                if ( (v43 | (v42 << 6)) == 0x2E )
                  goto LABEL_48;
              }
              else
              {
                v44 = v20[3] & 0x3F | (v43 << 6);
                if ( v24 < 0xF0 )
                {
                  if ( (v44 | (v42 << 12)) == 0x2E )
                    goto LABEL_48;
                }
                else if ( (v20[4] & 0x3F | (v44 << 6) | ((v42 & 7) << 18)) == 0x2E )
                {
                  goto LABEL_48;
                }
              }
            }
            else if ( (unsigned __int8)v23 == 46 )
            {
LABEL_48:
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2B164A, 2) )
                return 1;
              if ( v13 >= 3 && v20[2] <= -65 )
LABEL_187:
                core::str::slice_error_fail((int)v20);
              v13 -= 2;
              v14 = (unsigned __int8 *)(v20 + 2);
              continue;
            }
            v38 = 1;
            if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, asc_2B164E, 1) )
              return v38;
            --v13;
            if ( v21 >= 2 && (char)*v14 <= -65 )
LABEL_188:
              core::str::slice_error_fail((int)v20);
            continue;
          }
          break;
        }
        if ( v13 >= 2 && (char)v14[1] <= -65 )
          goto LABEL_188;
        v79 = v13 - 1;
        v77 = v13 - 1;
        v78 = 0;
        v80 = 1;
        v34 = v14 + 1;
        v82 = 36;
        v76 = (char *)(v14 + 1);
        v81 = 36;
        sub_228C24(&v74, (int *)&v76);
        if ( v74 != 1 )
          goto LABEL_153;
        v35 = v75;
        v36 = v75 + 1;
        if ( v75 == -1 )
          core::str::traits::str_index_overflow_fail((int)&off_2E3AD4);
        if ( v13 >= 2 && *(char *)v34 < -64 )
LABEL_181:
          core::str::slice_error_fail((int)v14);
        if ( v36 >= v13 )
        {
          if ( v36 != v13 )
            goto LABEL_181;
          v37 = v75 + 2;
          if ( v75 == -2 )
          {
            v35 = -2;
LABEL_125:
            if ( v20[1] != 117 )
              goto LABEL_153;
            if ( v35 < 2 || v20[2] <= -65 )
              core::str::slice_error_fail((int)(v20 + 1));
            goto LABEL_128;
          }
        }
        else
        {
          if ( (char)v14[v36] < -64 )
            goto LABEL_181;
          v37 = v75 + 2;
        }
        if ( v13 <= v37 )
        {
          v39 = v13;
          if ( v13 != v37 )
            goto LABEL_187;
        }
        else
        {
          if ( (char)v14[v37] <= -65 )
            goto LABEL_187;
          v39 = v37;
        }
        v13 -= v39;
        v14 += v39;
        if ( v75 != 1 )
        {
          if ( v75 == 2 )
          {
            v40 = (const char *)&unk_2B1651;
            if ( *v34 == 20563
              || (v40 = asc_2B1654, *v34 == 20546)
              || (v40 = asc_2B1657, *v34 == 18002)
              || (v40 = asc_2B165A, *v34 == 21580)
              || (v40 = asc_2B165D, *v34 == 21575)
              || (v40 = asc_2B1660, *v34 == 20556)
              || (v40 = asc_2B1663, *v34 == 20562) )
            {
LABEL_105:
              v38 = 1;
              if ( <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v40, 1) )
                return v38;
              continue;
            }
            v35 = 2;
          }
          else if ( !v75 )
          {
            goto LABEL_153;
          }
          goto LABEL_125;
        }
        break;
      }
      v41 = *(unsigned __int8 *)v34;
      v40 = asc_2B1665;
      if ( v41 == 67 )
        goto LABEL_105;
      if ( v41 != 117 )
        goto LABEL_153;
      v35 = 1;
LABEL_128:
      v45 = v20 + 2;
      while ( 1 )
      {
        v48 = 0;
        if ( v45 == (char *)v34 + v35 )
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
      core::num::<impl u32>::from_str_radix(&v76, v20 + 2, v35 - 1, 16);
      v54 = v67;
      if ( !(_BYTE)v76 )
        v54 = v77;
      v67 = v54;
      v55 = v54;
      if ( (v54 ^ 0xD800u) - 1114112 < 0xFFEF0800 )
        v55 = 1114112;
      if ( (unsigned __int8)v76 == 1 )
        v55 = 1114112;
      if ( !v48 )
      {
        v3 = v70;
        if ( v55 == 1114112 )
          goto LABEL_153;
        v76 = (char *)v55;
        if ( core::unicode::unicode_data::cc::lookup() )
          goto LABEL_153;
        if ( <char as core::fmt::Display>::fmt(&v76, a2) )
          return 1;
        continue;
      }
      break;
    }
LABEL_152:
    v3 = v70;
LABEL_153:
    v56 = <core::fmt::Formatter as core::fmt::Write>::write_str(a2, v20, v21);
    v2 = v68;
  }
  while ( !v56 );
  return 1;
}
