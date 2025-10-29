int __fastcall sub_215190(unsigned int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r2
  unsigned __int8 *v5; // r7
  unsigned int v6; // r3
  unsigned __int8 *v7; // r1
  int v8; // r5
  int v9; // r6
  unsigned int v10; // r2
  unsigned int v11; // r7
  unsigned int v12; // r4
  unsigned int v13; // r2
  char *v14; // r1
  int v15; // r6
  int v16; // r12
  char *v17; // r4
  int v18; // r7
  int v19; // r7
  int v20; // r6
  int v21; // r6
  int v22; // r7
  int v23; // r6
  unsigned __int8 *v24; // r2
  unsigned int v25; // r5
  unsigned int v26; // r7
  int v27; // r1
  int v28; // r7
  int v29; // r1
  unsigned __int8 *v30; // r2
  unsigned int v31; // r5
  unsigned int v32; // r7
  unsigned int v33; // r7
  unsigned int v34; // r1
  int v35; // r7
  int v36; // r1
  unsigned int v37; // r2
  unsigned int v38; // r1
  int v39; // r3
  bool v40; // cf
  _BOOL4 v41; // r3
  bool v42; // zf
  int v43; // r0
  char *v44; // [sp+0h] [bp-48h] BYREF
  unsigned int v45; // [sp+4h] [bp-44h]
  char v46; // [sp+8h] [bp-40h] BYREF
  __int16 v47; // [sp+9h] [bp-3Fh]
  char v48; // [sp+Bh] [bp-3Dh]
  _DWORD v49[2]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v50[6]; // [sp+14h] [bp-34h] BYREF
  char **v51; // [sp+2Ch] [bp-1Ch] BYREF
  char *v52; // [sp+30h] [bp-18h]
  int v53; // [sp+34h] [bp-14h]
  int (__fastcall *v54)(int, int *); // [sp+38h] [bp-10h]
  int *v55; // [sp+3Ch] [bp-Ch]
  int (__fastcall *v56)(unsigned int *, int); // [sp+40h] [bp-8h]
  int v57; // [sp+44h] [bp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)(a1 + 16);
  if ( v1 < v2 )
    return 1114113;
  v5 = *(unsigned __int8 **)a1;
  v6 = v1 - v2;
  v7 = (unsigned __int8 *)(*(_DWORD *)a1 + v2);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = v6;
  if ( v2 != 2 )
    core::panicking::panic((int)aInternalErrorE_1, 40, (int)&off_2CDBB4);
  v8 = *v5;
  v9 = v5[1];
  LOBYTE(v10) = v8 - 48;
  if ( (unsigned int)(v8 - 48) >= 0xA )
  {
    v10 = (v8 | 0x20) - 87;
    if ( (v8 | 0x20u) - 97 >= 0xFFFFFFF6 )
      v10 = -1;
    if ( v10 >= 0x10 )
      goto LABEL_82;
  }
  LOBYTE(v11) = v9 - 48;
  if ( (unsigned int)(v9 - 48) >= 0xA )
  {
    v11 = (v9 | 0x20) - 87;
    if ( (v9 | 0x20u) - 97 >= 0xFFFFFFF6 )
      v11 = -1;
    if ( v11 >= 0x10 )
      goto LABEL_82;
  }
  v12 = (unsigned __int8)v11 | (16 * (unsigned __int8)v10);
  if ( (char)v12 > -1 )
  {
    v13 = 1;
    v14 = &v46;
    v45 = 1;
    v44 = &v46;
    v48 = 0;
    v47 = 0;
    v46 = v12;
    goto LABEL_15;
  }
  v3 = 1114112;
  if ( v12 < 0xC0 )
    return v3;
  v15 = 2;
  v16 = 0;
  if ( v12 >= 0xE0 )
  {
    if ( v12 >= 0xF0 )
    {
      v15 = 4;
      v16 = 0;
      if ( v12 >= 0xF8 )
        return v3;
    }
    else
    {
      v15 = 3;
      v16 = 1;
    }
  }
  v45 = v15;
  v44 = &v46;
  v48 = 0;
  v47 = 0;
  v46 = v12;
  if ( v6 >= 2 )
  {
    v22 = *v7;
    v23 = v7[1];
    v24 = v7 + 2;
    LOBYTE(v25) = v22 - 48;
    *(_DWORD *)a1 = v7 + 2;
    *(_DWORD *)(a1 + 4) = v6 - 2;
    if ( (unsigned int)(v22 - 48) < 0xA )
      goto LABEL_36;
    v25 = (v22 | 0x20) - 87;
    if ( (v22 | 0x20u) - 97 >= 0xFFFFFFF6 )
      v25 = -1;
    if ( v25 <= 0xF )
    {
LABEL_36:
      LOBYTE(v26) = v23 - 48;
      if ( (unsigned int)(v23 - 48) < 0xA )
        goto LABEL_37;
      v26 = (v23 | 0x20) - 87;
      if ( (v23 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v26 = -1;
      if ( v26 <= 0xF )
      {
LABEL_37:
        v27 = v45;
        if ( v45 < 2 )
        {
          v43 = 1;
          goto LABEL_78;
        }
        v44[1] = v26 | (16 * v25);
        if ( v12 < 0xE0 )
        {
LABEL_39:
          v14 = v44;
          v13 = v45;
LABEL_15:
          core::str::converts::from_utf8((int)&v51, (int)v14, v13);
          if ( v51 )
            return 1114112;
          v49[1] = v53;
          v49[0] = v52;
          if ( v53 )
          {
            v17 = v52 + 1;
            v18 = *v52;
            v3 = (unsigned __int8)v18;
            if ( v18 <= -1 )
            {
              v19 = v18 & 0x1F;
              v20 = v52[1] & 0x3F;
              if ( v3 <= 0xDF )
              {
                v3 = v20 | (v19 << 6);
                v17 = v52 + 2;
              }
              else
              {
                v21 = v52[2] & 0x3F | (v20 << 6);
                if ( v3 < 0xF0 )
                {
                  v3 = v21 | (v19 << 12);
                  v17 = v52 + 3;
                }
                else
                {
                  v17 = v52 + 4;
                  v3 = v52[3] & 0x3F | (v21 << 6) | ((v19 & 7) << 18);
                }
              }
            }
          }
          else
          {
            v3 = 1114112;
            v17 = v52;
          }
          if ( v17 == &v52[v53] )
          {
            v41 = 1;
          }
          else
          {
            v39 = *v17;
            if ( v39 > -1 )
              goto LABEL_76;
            v40 = (unsigned __int8)v39 >= 0xE0u;
            if ( (unsigned __int8)v39 >= 0xE0u )
              v40 = (unsigned __int8)v39 >= 0xF0u;
            if ( !v40 )
              goto LABEL_76;
            v41 = (((v17[2] & 0x3F) << 6) | ((v17[1] & 0x3F) << 12) | v17[3] & 0x3F | ((v39 & 7) << 18)) == 1114112;
          }
          v42 = v3 == 1114112;
          if ( v3 != 1114112 )
            v42 = !v41;
          if ( !v42 )
            return v3;
LABEL_76:
          v57 = sub_215774(v52, v53);
          v56 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v55 = &v57;
          v53 = (int)v49;
          v51 = &v44;
          v50[3] = 4;
          v50[5] = 3;
          v50[0] = 0;
          v54 = sub_215678;
          v52 = (char *)sub_21583C;
          v50[2] = &off_2CDBE4;
          v50[4] = &v51;
          core::panicking::panic_fmt((int)v50, (int)&off_2CDC04);
        }
        if ( v6 - 2 < 2 )
          return 1114112;
        v28 = *v24;
        v29 = v24[1];
        v30 = v24 + 2;
        LOBYTE(v31) = v28 - 48;
        *(_DWORD *)a1 = v30;
        *(_DWORD *)(a1 + 4) = v6 - 4;
        if ( (unsigned int)(v28 - 48) < 0xA )
          goto LABEL_48;
        v32 = (v28 | 0x20) - 97;
        v31 = v32 + 10;
        if ( v32 >= 0xFFFFFFF6 )
          v31 = -1;
        if ( v31 <= 0xF )
        {
LABEL_48:
          LOBYTE(v33) = v29 - 48;
          if ( (unsigned int)(v29 - 48) < 0xA )
            goto LABEL_49;
          v34 = (v29 | 0x20) - 97;
          v33 = v34 + 10;
          if ( v34 >= 0xFFFFFFF6 )
            v33 = -1;
          if ( v33 <= 0xF )
          {
LABEL_49:
            v27 = v45;
            if ( v45 < 3 )
            {
              v43 = 2;
              goto LABEL_78;
            }
            v44[2] = v33 | (16 * v31);
            if ( v16 )
              goto LABEL_39;
            if ( v6 - 4 < 2 )
              return 1114112;
            v35 = *v30;
            v36 = v30[1];
            *(_DWORD *)a1 = v30 + 2;
            *(_DWORD *)(a1 + 4) = v6 - 6;
            LOBYTE(a1) = v35 - 48;
            if ( (unsigned int)(v35 - 48) < 0xA )
              goto LABEL_59;
            a1 = (v35 | 0x20) - 87;
            if ( (v35 | 0x20u) - 97 >= 0xFFFFFFF6 )
              a1 = -1;
            if ( a1 <= 0xF )
            {
LABEL_59:
              LOBYTE(v37) = v36 - 48;
              if ( (unsigned int)(v36 - 48) < 0xA )
                goto LABEL_60;
              v38 = (v36 | 0x20) - 97;
              v37 = v38 + 10;
              if ( v38 >= 0xFFFFFFF6 )
                v37 = -1;
              if ( v37 <= 0xF )
              {
LABEL_60:
                v27 = v45;
                if ( v45 >= 4 )
                {
                  v44[3] = v37 | (16 * a1);
                  goto LABEL_39;
                }
                v43 = 3;
LABEL_78:
                core::panicking::panic_bounds_check(v43, v27, (int)&off_2CDBD4);
              }
            }
          }
        }
      }
    }
LABEL_82:
    core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2CDBC4);
  }
  return 1114112;
}
