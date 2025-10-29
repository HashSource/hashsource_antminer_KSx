int __fastcall <rustc_demangle::v0::Ident as core::fmt::Display>::fmt(char **a1, int a2)
{
  int v2; // r8
  int *v3; // r7
  unsigned int v6; // r9
  char *v7; // lr
  char *v8; // r1
  char *v9; // r3
  int v10; // t1
  unsigned int v11; // r2
  int v12; // r3
  int v13; // r6
  int v14; // r6
  char *v15; // r6
  int v16; // r4
  char *v18; // r10
  unsigned int v19; // r12
  char *v20; // r6
  unsigned int v21; // r1
  char v22; // r0
  char v23; // r4
  unsigned int v24; // r2
  int v25; // r11
  unsigned int v26; // r3
  char v27; // r0
  unsigned __int8 v28; // r6
  unsigned int v29; // r0
  unsigned int v30; // kr00_4
  unsigned __int64 v31; // kr18_8
  int v32; // r6
  unsigned int v33; // kr08_4
  int v34; // r1
  unsigned int v35; // r5
  int v36; // r0
  int v37; // r2
  bool v38; // cf
  unsigned int v39; // r4
  _DWORD *v40; // r0
  unsigned int v41; // r1
  int v42; // r9
  unsigned int v43; // r0
  int v44; // r6
  int v45; // r9
  bool v46; // cc
  unsigned int v47; // r2
  int v48; // r5
  char *v49; // [sp+4h] [bp-34h]
  int v50; // [sp+8h] [bp-30h]
  int v51; // [sp+Ch] [bp-2Ch]
  int v52; // [sp+10h] [bp-28h]
  unsigned int v53; // [sp+14h] [bp-24h]
  _DWORD *v54; // [sp+18h] [bp-20h]
  int v55; // [sp+1Ch] [bp-1Ch]
  char *v56; // [sp+20h] [bp-18h]
  char *v57; // [sp+24h] [bp-14h]
  int v58; // [sp+28h] [bp-10h]
  char *v59; // [sp+2Ch] [bp-Ch]
  char v60; // [sp+30h] [bp-8h]
  char *v61; // [sp+34h] [bp-4h]
  _DWORD v62[128]; // [sp+38h] [bp+0h] BYREF
  int v63; // [sp+238h] [bp+200h] BYREF

  v3 = v62;
  v6 = 0;
  memset(v62, 0, sizeof(v62));
  v7 = a1[3];
  if ( !v7 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, *a1, a1[1]);
  v58 = a2;
  v56 = *a1;
  v57 = a1[2];
  v60 = *v57;
  v59 = a1[1];
  if ( v59 )
  {
    v8 = *a1;
    v6 = 0;
    v9 = *a1;
    while ( 1 )
    {
      v10 = *v9++;
      v11 = (unsigned __int8)v10;
      if ( v10 > -1 )
        goto LABEL_11;
      v12 = v11 & 0x1F;
      v13 = v8[1] & 0x3F;
      if ( v11 <= 0xDF )
        break;
      v14 = v8[2] & 0x3F | (v13 << 6);
      if ( v11 < 0xF0 )
      {
        v11 = v14 | (v12 << 12);
        v9 = v8 + 3;
        if ( v6 == 128 )
          goto LABEL_15;
      }
      else
      {
        v11 = v8[3] & 0x3F | (v14 << 6) | ((v11 & 7) << 18);
        if ( v11 == 1114112 )
          goto LABEL_21;
        v9 = v8 + 4;
        if ( v6 == 128 )
          goto LABEL_15;
      }
LABEL_12:
      v62[v6++] = v11;
      v8 = v9;
      if ( v9 == &v59[(_DWORD)v56] )
        goto LABEL_21;
    }
    v11 = v13 | (v12 << 6);
    v9 = v8 + 2;
LABEL_11:
    if ( v6 == 128 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_21:
  v18 = v57;
  v19 = 72;
  v61 = &v7[(_DWORD)v57];
  v54 = &v62[v6];
  v52 = 4 * v6 + 4;
  v51 = 700;
  v55 = 128;
  v53 = 0;
LABEL_22:
  v20 = v18 + 1;
  v21 = 36;
  v22 = 0;
  v23 = 1;
  v24 = 1;
  v25 = 0;
  do
  {
    v26 = v21 - v19;
    if ( v21 < v19 )
      v26 = 0;
    if ( v26 <= 1 )
      v26 = 1;
    if ( v26 >= 0x1A )
      v26 = 26;
    if ( (v22 & 1) != 0 )
    {
      if ( v20 == v61 )
        break;
      v18 = v20 + 1;
      v27 = *v20;
    }
    else
    {
      v18 = v20;
      v27 = v60;
      if ( (v23 & 1) == 0 )
        break;
    }
    v28 = v27 - 97;
    if ( (unsigned __int8)(v27 - 97) >= 0x1Au )
    {
      if ( (unsigned __int8)(v27 - 48) >= 0xAu )
        break;
      v28 = v27 - 22;
    }
    v29 = v28;
    v30 = v28;
    v31 = v28 * (unsigned __int64)v24;
    v32 = HIDWORD(v31);
    if ( !is_mul_ok(v30, v24) )
      v32 = 1;
    if ( !v32 )
      v2 = v31;
    if ( HIDWORD(v31) )
      break;
    v38 = __CFADD__(v25, v2);
    v25 += v2;
    if ( v38 )
      break;
    if ( v26 > v29 )
    {
      v34 = v50;
      if ( !__CFADD__(v53, v25) )
        v34 = v53 + v25;
      v50 = v34;
      if ( __CFADD__(v53, v25) )
        break;
      v35 = v6 + 1;
      v49 = v7;
      v36 = sub_26F0D0(v34, v6 + 1);
      v37 = v55;
      v7 = v49;
      v38 = __CFADD__(v55, v36);
      if ( !__CFADD__(v55, v36) )
        v37 = v55 + v36;
      v55 = v37;
      if ( v38 || (v37 ^ 0xD800u) - 1114112 < 0xFFEF0800 || v37 == 1114112 || v6 > 0x7F )
        break;
      v39 = v50 - v36 * v35;
      v40 = v54;
      if ( v6 > v39 )
      {
        do
        {
          v41 = v6 - 1;
          if ( v6 - 1 >= 0x80 )
            core::panicking::panic_bounds_check(v6 - 1, 128, (int)&off_2E4B84);
          --v6;
          *v40 = *(v40 - 1);
          --v40;
        }
        while ( v41 > v39 );
      }
      if ( v39 >= 0x80 )
        core::panicking::panic_bounds_check(v39, 128, (int)&off_2E4B94);
      v62[v39] = v37;
      if ( v18 != v61 )
      {
        v42 = sub_26F0D0(v25, v51);
        v43 = sub_26F0D0(v42, v35) + v42;
        v44 = 0;
        v60 = *v18;
        if ( v43 < 0x1C8 )
        {
          LOWORD(v47) = v43;
          v45 = v52;
        }
        else
        {
          v45 = v52;
          v44 = 0;
          do
          {
            v44 += 36;
            v46 = v43 > 0x3E57;
            v47 = v43 / 0x23;
            v43 = v47;
          }
          while ( v46 );
        }
        v53 = v39 + 1;
        v19 = v44 + sub_26F0D0((unsigned __int16)(36 * v47), (unsigned __int16)(v47 + 38));
        ++v54;
        v52 = v45 + 4;
        v51 = 2;
        v6 = v35;
        v7 = v49;
        goto LABEL_22;
      }
      v48 = v52;
      do
      {
        v63 = *v3;
        v16 = <char as core::fmt::Display>::fmt(&v63, v58);
        if ( v16 )
          break;
        v48 -= 4;
        ++v3;
      }
      while ( v48 );
      return v16;
    }
    v21 += 36;
    v23 = 2;
    v20 = v18;
    v33 = v24;
    v24 *= 36 - v26;
    v22 = 1;
    v2 = v31;
  }
  while ( is_mul_ok(v33, 36 - v26) );
LABEL_15:
  v15 = v7;
  v16 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v58, aPunycode, 9) )
    return v16;
  if ( v59 )
  {
    if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v58, v56, v59) )
      return v16;
    v16 = 1;
    if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v58, asc_2B2FEB, 1) )
      return v16;
  }
  v16 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v58, v57, v15) )
    return v16;
  else
    return <core::fmt::Formatter as core::fmt::Write>::write_str(v58, asc_2B2FEC, 1);
}
