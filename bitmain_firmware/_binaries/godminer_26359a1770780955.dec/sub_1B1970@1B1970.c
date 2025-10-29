bool __fastcall sub_1B1970(void *s1, size_t n, void *s2, unsigned int a4)
{
  unsigned int v5; // r11
  unsigned int v6; // r5
  unsigned int v7; // r3
  _BOOL4 result; // r0
  int v9; // r3
  char v10; // r4
  unsigned int v11; // r6
  int v12; // r3
  int v13; // r6
  unsigned int v14; // r9
  unsigned int v15; // r12
  unsigned int v16; // r3
  int v17; // r7
  int v18; // r6
  unsigned int v19; // r3
  int v20; // r4
  unsigned int v21; // r2
  bool i; // r3
  _BYTE *v23; // r6
  int v24; // r5
  unsigned int v25; // r7
  int v26; // r12
  int v27; // r4
  int v28; // r4
  int v29; // r3
  bool v30; // cf
  unsigned int v31; // r3
  unsigned int v32; // r7
  unsigned int v33; // r0
  unsigned int v34; // r10
  int v35; // r4
  char v36; // r7
  unsigned int v37; // r11
  int v38; // r4
  int v39; // r7
  unsigned __int8 *v40; // r11
  unsigned int v41; // r4
  int v42; // r7
  int v43; // t1
  int v44; // r4
  int v45; // r5
  unsigned int v46; // r0
  unsigned int v47; // [sp+1Ch] [bp-48h]
  unsigned int v48; // [sp+1Ch] [bp-48h]
  int v49; // [sp+20h] [bp-44h] BYREF
  unsigned int v50; // [sp+24h] [bp-40h]
  unsigned int v51; // [sp+28h] [bp-3Ch]
  unsigned int v52; // [sp+2Ch] [bp-38h]
  unsigned int v53; // [sp+30h] [bp-34h]
  int v54; // [sp+38h] [bp-2Ch]
  unsigned int v55; // [sp+3Ch] [bp-28h]
  unsigned int v56; // [sp+44h] [bp-20h]
  int v57; // [sp+50h] [bp-14h]
  unsigned int v58; // [sp+54h] [bp-10h]
  int v59; // [sp+58h] [bp-Ch]
  unsigned int v60; // [sp+5Ch] [bp-8h]

  if ( n >= a4 )
  {
    result = 0;
    if ( n == a4 )
      return bcmp(s1, s2, n) == 0;
    return result;
  }
  core::str::pattern::StrSearcher::new((int)&v49, (int)s2, a4, s1, n);
  if ( v49 )
  {
    v5 = v56;
    if ( v56 == -1 )
    {
      v31 = v55;
      v48 = v60 - 1;
      v32 = v60 - 1 + v55;
      result = 0;
      if ( v32 < v58 )
      {
        v33 = v60;
        if ( v53 > v60 )
          v33 = v53;
        while ( 1 )
        {
          v34 = v31;
          v35 = *(_BYTE *)(v57 + v32) & 0x3F;
          v36 = 32 - v35;
          v37 = v51 >> v35;
          v38 = v35 - 32;
          v39 = v37 | (v52 << v36);
          v40 = (unsigned __int8 *)(v59 + v53);
          if ( v38 >= 0 )
            v39 = v52 >> v38;
          v41 = v33;
          if ( (v39 & 1) != 0 )
            break;
          v31 += v60;
LABEL_60:
          v32 = v48 + v31;
          if ( v48 + v31 >= v58 )
            return 0;
        }
        while ( v53 != v41 )
        {
          if ( v53 + v31 >= v58 )
          {
            v46 = v34 + v53;
LABEL_84:
            if ( v58 > v46 )
              v46 = v58;
            core::panicking::panic_bounds_check(v46, v58, (int)&off_2DE1B0);
          }
          v42 = *(unsigned __int8 *)(v57 + v53 + v31);
          --v41;
          v43 = *v40++;
          ++v31;
          if ( v43 != v42 )
            goto LABEL_60;
        }
        v19 = v53 - 1;
        while ( v19 != -1 )
        {
          if ( v53 - 1 >= v60 )
LABEL_81:
            core::panicking::panic_bounds_check(v19, v60, (int)&off_2DE1C0);
          v20 = v34 + v19;
          if ( v34 + v19 >= v58 )
LABEL_82:
            core::panicking::panic_bounds_check(v20, v58, (int)&off_2DE1D0);
          v44 = *(unsigned __int8 *)(v57 + v34 + v19);
          v45 = *(unsigned __int8 *)(v59 + v19--);
          if ( v45 != v44 )
          {
            v31 = v34 + v54;
            goto LABEL_60;
          }
        }
        return 1;
      }
    }
    else
    {
      v6 = v55;
      v47 = v60 - 1;
      v7 = v60 - 1 + v55;
      result = 0;
      if ( v7 < v58 )
      {
        do
        {
          while ( 1 )
          {
            v9 = *(_BYTE *)(v57 + v7) & 0x3F;
            v10 = 32 - v9;
            v11 = v51 >> v9;
            v12 = v9 - 32;
            v13 = v11 | (v52 << v10);
            if ( v12 >= 0 )
              v13 = v52 >> v12;
            if ( (v13 & 1) == 0 )
              break;
            v14 = v5;
            v15 = v60;
            if ( v53 > v5 )
              v14 = v53;
            if ( v14 > v60 )
              v15 = v14;
            v16 = v14;
            while ( v15 != v16 )
            {
              if ( v6 + v16 >= v58 )
              {
                v46 = v6 + v14;
                goto LABEL_84;
              }
              v17 = *(unsigned __int8 *)(v57 + v6 + v16);
              v18 = *(unsigned __int8 *)(v59 + v16++);
              if ( v18 != v17 )
              {
                v6 = v6 - v53 + v16;
                goto LABEL_18;
              }
            }
            v19 = v53;
            do
            {
              if ( v5 >= v19 )
              {
                v56 = v5;
                v55 = v6;
                return 1;
              }
              if ( --v19 >= v60 )
                goto LABEL_81;
              v20 = v19 + v6;
              if ( v19 + v6 >= v58 )
                goto LABEL_82;
            }
            while ( *(unsigned __int8 *)(v59 + v19) == *(unsigned __int8 *)(v57 + v20) );
            v5 = v60 - v54;
            v6 += v54;
            v7 = v47 + v6;
            if ( v47 + v6 >= v58 )
              goto LABEL_26;
          }
          v6 += v60;
LABEL_18:
          v5 = 0;
          v7 = v47 + v6;
        }
        while ( v47 + v6 < v58 );
LABEL_26:
        v56 = v5;
        v55 = v6;
      }
    }
    return result;
  }
  result = 0;
  if ( BYTE2(v52) )
    return result;
  v21 = v50;
  for ( i = (unsigned __int8)v52 == 0; ; i = 0 )
  {
    if ( v21 )
    {
      if ( v58 <= v21 )
      {
        if ( v58 != v21 )
LABEL_87:
          core::str::slice_error_fail(v57);
      }
      else if ( *(char *)(v57 + v21) < -64 )
      {
        goto LABEL_87;
      }
    }
    if ( v21 == v58 )
      break;
    v23 = (_BYTE *)(v57 + v21);
    v24 = *(char *)(v57 + v21);
    v25 = (unsigned __int8)v24;
    if ( v24 > -1 )
      goto LABEL_44;
    v26 = v24 & 0x1F;
    v27 = v23[1] & 0x3F;
    if ( (unsigned __int8)v24 < 0xE0u )
    {
      v25 = v27 | (v26 << 6);
LABEL_44:
      if ( !i )
        return 1;
      goto LABEL_45;
    }
    v28 = v23[2] & 0x3F | (v27 << 6);
    if ( (unsigned __int8)v24 < 0xF0u )
    {
      v25 = v28 | (v26 << 12);
      if ( !i )
        return 1;
    }
    else
    {
      v25 = v23[3] & 0x3F | (v28 << 6) | ((v24 & 7) << 18);
      if ( !i )
        return 1;
    }
LABEL_45:
    if ( v25 == 1114112 )
    {
      v50 = v21;
      return 0;
    }
    v29 = 1;
    v30 = v25 >= 0x80;
    if ( v25 >= 0x80 )
    {
      v29 = 2;
      v30 = v25 >= 0x800;
    }
    if ( v30 )
    {
      v29 = 4;
      if ( v25 < 0x10000 )
        v29 = 3;
    }
    v21 += v29;
  }
  result = 1;
  if ( !i )
    return result;
  return 0;
}
