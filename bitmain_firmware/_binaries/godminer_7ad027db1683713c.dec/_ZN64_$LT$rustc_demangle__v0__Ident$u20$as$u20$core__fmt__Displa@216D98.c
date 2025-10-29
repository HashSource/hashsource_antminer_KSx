int __fastcall <rustc_demangle::v0::Ident as core::fmt::Display>::fmt(char **a1, int *a2)
{
  int v2; // r8
  unsigned int *v3; // r7
  unsigned int v6; // r9
  char *v7; // lr
  char *v8; // r1
  char *v9; // r3
  int v10; // t1
  unsigned int v11; // r2
  int v12; // r3
  int v13; // r6
  int v14; // r6
  int v15; // r4
  char *v17; // r10
  unsigned int v18; // r12
  char *v19; // r6
  unsigned int v20; // r1
  char v21; // r0
  char v22; // r4
  unsigned int v23; // r2
  unsigned int v24; // r11
  unsigned int v25; // r3
  char v26; // r0
  unsigned __int8 v27; // r6
  unsigned int v28; // r0
  unsigned int v29; // kr00_4
  unsigned __int64 v30; // kr18_8
  int v31; // r6
  unsigned int v32; // kr08_4
  unsigned int v33; // r1
  unsigned int v34; // r5
  unsigned int v35; // r0
  unsigned int v36; // r2
  bool v37; // cf
  unsigned int v38; // r4
  _DWORD *v39; // r0
  unsigned int v40; // r1
  unsigned int v41; // r9
  unsigned int v42; // r0
  int v43; // r6
  int v44; // r9
  bool v45; // cc
  unsigned int v46; // r2
  int v47; // r5
  char *v48; // [sp+4h] [bp-34h]
  unsigned int v49; // [sp+8h] [bp-30h]
  unsigned int v50; // [sp+Ch] [bp-2Ch]
  int v51; // [sp+10h] [bp-28h]
  unsigned int v52; // [sp+14h] [bp-24h]
  _DWORD *v53; // [sp+18h] [bp-20h]
  int v54; // [sp+1Ch] [bp-1Ch]
  char *v55; // [sp+20h] [bp-18h]
  char *v56; // [sp+24h] [bp-14h]
  int *v57; // [sp+28h] [bp-10h]
  char *v58; // [sp+2Ch] [bp-Ch]
  char v59; // [sp+30h] [bp-8h]
  char *v60; // [sp+34h] [bp-4h]
  _DWORD v61[128]; // [sp+38h] [bp+0h] BYREF
  unsigned int v62; // [sp+238h] [bp+200h] BYREF

  v3 = v61;
  v6 = 0;
  memset(v61, 0, sizeof(v61));
  v7 = a1[3];
  if ( !v7 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  v57 = a2;
  v55 = *a1;
  v56 = a1[2];
  v59 = *v56;
  v58 = a1[1];
  if ( v58 )
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
      v61[v6++] = v11;
      v8 = v9;
      if ( v9 == &v58[(_DWORD)v55] )
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
  v17 = v56;
  v18 = 72;
  v60 = &v7[(_DWORD)v56];
  v53 = &v61[v6];
  v51 = 4 * v6 + 4;
  v50 = 700;
  v54 = 128;
  v52 = 0;
LABEL_22:
  v19 = v17 + 1;
  v20 = 36;
  v21 = 0;
  v22 = 1;
  v23 = 1;
  v24 = 0;
  do
  {
    v25 = v20 - v18;
    if ( v20 < v18 )
      v25 = 0;
    if ( v25 <= 1 )
      v25 = 1;
    if ( v25 >= 0x1A )
      v25 = 26;
    if ( (v21 & 1) != 0 )
    {
      if ( v19 == v60 )
        break;
      v17 = v19 + 1;
      v26 = *v19;
    }
    else
    {
      v17 = v19;
      v26 = v59;
      if ( (v22 & 1) == 0 )
        break;
    }
    v27 = v26 - 97;
    if ( (unsigned __int8)(v26 - 97) >= 0x1Au )
    {
      if ( (unsigned __int8)(v26 - 48) >= 0xAu )
        break;
      v27 = v26 - 22;
    }
    v28 = v27;
    v29 = v27;
    v30 = v27 * (unsigned __int64)v23;
    v31 = HIDWORD(v30);
    if ( !is_mul_ok(v29, v23) )
      v31 = 1;
    if ( !v31 )
      v2 = v30;
    if ( HIDWORD(v30) )
      break;
    v37 = __CFADD__(v24, v2);
    v24 += v2;
    if ( v37 )
      break;
    if ( v25 > v28 )
    {
      v33 = v49;
      if ( !__CFADD__(v52, v24) )
        v33 = v52 + v24;
      v49 = v33;
      if ( __CFADD__(v52, v24) )
        break;
      v34 = v6 + 1;
      v48 = v7;
      v35 = sub_25ABA8(v33, v6 + 1);
      v36 = v54;
      v37 = __CFADD__(v54, v35);
      if ( !__CFADD__(v54, v35) )
        v36 = v54 + v35;
      v54 = v36;
      if ( v37 || (v36 ^ 0xD800) - 1114112 < 0xFFEF0800 || v36 == 1114112 || v6 > 0x7F )
        break;
      v38 = v49 - v35 * v34;
      v39 = v53;
      if ( v6 > v38 )
      {
        do
        {
          v40 = v6 - 1;
          if ( v6 - 1 >= 0x80 )
            core::panicking::panic_bounds_check(v6 - 1, 128, (int)&off_2CDB84);
          --v6;
          *v39 = *(v39 - 1);
          --v39;
        }
        while ( v40 > v38 );
      }
      if ( v38 >= 0x80 )
        core::panicking::panic_bounds_check(v38, 128, (int)&off_2CDB94);
      v61[v38] = v36;
      if ( v17 != v60 )
      {
        v41 = sub_25ABA8(v24, v50);
        v42 = sub_25ABA8(v41, v34) + v41;
        v43 = 0;
        v59 = *v17;
        if ( v42 < 0x1C8 )
        {
          LOWORD(v46) = v42;
          v44 = v51;
        }
        else
        {
          v44 = v51;
          v43 = 0;
          do
          {
            v43 += 36;
            v45 = v42 > 0x3E57;
            v46 = v42 / 0x23;
            v42 = v46;
          }
          while ( v45 );
        }
        v52 = v38 + 1;
        v18 = v43 + sub_25ABA8((unsigned __int16)(36 * v46), (unsigned __int16)(v46 + 38));
        ++v53;
        v51 = v44 + 4;
        v50 = 2;
        v6 = v34;
        v7 = v48;
        goto LABEL_22;
      }
      v47 = v51;
      do
      {
        v62 = *v3;
        v15 = <char as core::fmt::Display>::fmt(&v62, v57);
        if ( v15 )
          break;
        v47 -= 4;
        ++v3;
      }
      while ( v47 );
      return v15;
    }
    v20 += 36;
    v22 = 2;
    v19 = v17;
    v32 = v23;
    v23 *= 36 - v25;
    v21 = 1;
    v2 = v30;
  }
  while ( is_mul_ok(v32, 36 - v25) );
LABEL_15:
  a2 = v57;
  v15 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v57) )
    return v15;
  if ( v58 )
  {
    if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v57) )
      return v15;
    v15 = 1;
    if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v57) )
      return v15;
  }
  v15 = 1;
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v57) )
    return v15;
  else
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
}
