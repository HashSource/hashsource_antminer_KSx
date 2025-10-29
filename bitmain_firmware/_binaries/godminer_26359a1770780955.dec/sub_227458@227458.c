int __fastcall sub_227458(unsigned int a1)
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
  _BYTE *v13; // r1
  int v14; // r6
  int v15; // r12
  int (*v16)(); // r4
  int v17; // r7
  int v18; // r7
  int v19; // r6
  int v20; // r6
  int v21; // r7
  int v22; // r6
  unsigned __int8 *v23; // r2
  unsigned int v24; // r5
  unsigned int v25; // r7
  int v26; // r1
  int v27; // r7
  int v28; // r1
  unsigned __int8 *v29; // r2
  unsigned int v30; // r5
  unsigned int v31; // r7
  unsigned int v32; // r7
  unsigned int v33; // r1
  int v34; // r7
  int v35; // r1
  unsigned int v36; // r2
  unsigned int v37; // r1
  int v38; // r3
  bool v39; // cf
  _BOOL4 v40; // r3
  bool v41; // zf
  int v42; // r0
  _BYTE *v43; // [sp+0h] [bp-48h] BYREF
  unsigned int v44; // [sp+4h] [bp-44h]
  _BYTE v45[3]; // [sp+8h] [bp-40h] BYREF
  char v46; // [sp+Bh] [bp-3Dh]
  _DWORD v47[2]; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v48[6]; // [sp+14h] [bp-34h] BYREF
  _DWORD *v49; // [sp+2Ch] [bp-1Ch] BYREF
  int (*v50)(); // [sp+30h] [bp-18h]
  char *v51; // [sp+34h] [bp-14h]
  int (*v52)(); // [sp+38h] [bp-10h]
  int *v53; // [sp+3Ch] [bp-Ch]
  int (__fastcall *v54)(_DWORD, _DWORD); // [sp+40h] [bp-8h]
  int v55; // [sp+44h] [bp-4h] BYREF

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
    core::panicking::panic((int)aInternalErrorE_1, 40, (int)&off_2E2BB4);
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
    v13 = v45;
    v44 = 1;
    v43 = v45;
    v46 = 0;
    v45[2] = 0;
    *(_WORD *)v45 = (unsigned __int8)(v11 | (16 * v10));
    goto LABEL_15;
  }
  v3 = 1114112;
  if ( v12 < 0xC0 )
    return v3;
  v14 = 2;
  v15 = 0;
  if ( v12 >= 0xE0 )
  {
    if ( v12 >= 0xF0 )
    {
      v14 = 4;
      v15 = 0;
      if ( v12 >= 0xF8 )
        return v3;
    }
    else
    {
      v14 = 3;
      v15 = 1;
    }
  }
  v44 = v14;
  v43 = v45;
  v46 = 0;
  *(_WORD *)&v45[1] = 0;
  v45[0] = v12;
  if ( v6 >= 2 )
  {
    v21 = *v7;
    v22 = v7[1];
    v23 = v7 + 2;
    LOBYTE(v24) = v21 - 48;
    *(_DWORD *)a1 = v7 + 2;
    *(_DWORD *)(a1 + 4) = v6 - 2;
    if ( (unsigned int)(v21 - 48) < 0xA )
      goto LABEL_36;
    v24 = (v21 | 0x20) - 87;
    if ( (v21 | 0x20u) - 97 >= 0xFFFFFFF6 )
      v24 = -1;
    if ( v24 <= 0xF )
    {
LABEL_36:
      LOBYTE(v25) = v22 - 48;
      if ( (unsigned int)(v22 - 48) < 0xA )
        goto LABEL_37;
      v25 = (v22 | 0x20) - 87;
      if ( (v22 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v25 = -1;
      if ( v25 <= 0xF )
      {
LABEL_37:
        v26 = v44;
        if ( v44 < 2 )
        {
          v42 = 1;
          goto LABEL_78;
        }
        v43[1] = v25 | (16 * v24);
        if ( v12 < 0xE0 )
        {
LABEL_39:
          v13 = v43;
LABEL_15:
          core::str::converts::from_utf8(&v49, v13);
          if ( v49 )
            return 1114112;
          v47[1] = v51;
          v47[0] = v50;
          if ( v51 )
          {
            v16 = (int (*)())((char *)v50 + 1);
            v17 = *(char *)v50;
            v3 = (unsigned __int8)v17;
            if ( v17 <= -1 )
            {
              v18 = v17 & 0x1F;
              v19 = *((_BYTE *)v50 + 1) & 0x3F;
              if ( v3 <= 0xDF )
              {
                v3 = v19 | (v18 << 6);
                v16 = (int (*)())((char *)v50 + 2);
              }
              else
              {
                v20 = *((_BYTE *)v50 + 2) & 0x3F | (v19 << 6);
                if ( v3 < 0xF0 )
                {
                  v3 = v20 | (v18 << 12);
                  v16 = (int (*)())((char *)v50 + 3);
                }
                else
                {
                  v16 = (int (*)())((char *)v50 + 4);
                  v3 = *((_BYTE *)v50 + 3) & 0x3F | (v20 << 6) | ((v18 & 7) << 18);
                }
              }
            }
          }
          else
          {
            v3 = 1114112;
            v16 = v50;
          }
          if ( v16 == (int (*)())&v51[(_DWORD)v50] )
          {
            v40 = 1;
          }
          else
          {
            v38 = *(char *)v16;
            if ( v38 > -1 )
              goto LABEL_76;
            v39 = (unsigned __int8)v38 >= 0xE0u;
            if ( (unsigned __int8)v38 >= 0xE0u )
              v39 = (unsigned __int8)v38 >= 0xF0u;
            if ( !v39 )
              goto LABEL_76;
            v40 = (((*((_BYTE *)v16 + 2) & 0x3F) << 6)
                 | ((*((_BYTE *)v16 + 1) & 0x3F) << 12)
                 | *((_BYTE *)v16 + 3) & 0x3F
                 | ((v38 & 7) << 18)) == 1114112;
          }
          v41 = v3 == 1114112;
          if ( v3 != 1114112 )
            v41 = !v40;
          if ( !v41 )
            return v3;
LABEL_76:
          v55 = sub_227A3C();
          v54 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v53 = &v55;
          v51 = (char *)v47;
          v49 = &v43;
          v48[3] = 4;
          v48[5] = 3;
          v48[0] = 0;
          v52 = sub_227940;
          v50 = sub_227B04;
          v48[2] = &off_2E2BE4;
          v48[4] = &v49;
          core::panicking::panic_fmt((int)v48, (int)&off_2E2C04);
        }
        if ( v6 - 2 < 2 )
          return 1114112;
        v27 = *v23;
        v28 = v23[1];
        v29 = v23 + 2;
        LOBYTE(v30) = v27 - 48;
        *(_DWORD *)a1 = v29;
        *(_DWORD *)(a1 + 4) = v6 - 4;
        if ( (unsigned int)(v27 - 48) < 0xA )
          goto LABEL_48;
        v31 = (v27 | 0x20) - 97;
        v30 = v31 + 10;
        if ( v31 >= 0xFFFFFFF6 )
          v30 = -1;
        if ( v30 <= 0xF )
        {
LABEL_48:
          LOBYTE(v32) = v28 - 48;
          if ( (unsigned int)(v28 - 48) < 0xA )
            goto LABEL_49;
          v33 = (v28 | 0x20) - 97;
          v32 = v33 + 10;
          if ( v33 >= 0xFFFFFFF6 )
            v32 = -1;
          if ( v32 <= 0xF )
          {
LABEL_49:
            v26 = v44;
            if ( v44 < 3 )
            {
              v42 = 2;
              goto LABEL_78;
            }
            v43[2] = v32 | (16 * v30);
            if ( v15 )
              goto LABEL_39;
            if ( v6 - 4 < 2 )
              return 1114112;
            v34 = *v29;
            v35 = v29[1];
            *(_DWORD *)a1 = v29 + 2;
            *(_DWORD *)(a1 + 4) = v6 - 6;
            LOBYTE(a1) = v34 - 48;
            if ( (unsigned int)(v34 - 48) < 0xA )
              goto LABEL_59;
            a1 = (v34 | 0x20) - 87;
            if ( (v34 | 0x20u) - 97 >= 0xFFFFFFF6 )
              a1 = -1;
            if ( a1 <= 0xF )
            {
LABEL_59:
              LOBYTE(v36) = v35 - 48;
              if ( (unsigned int)(v35 - 48) < 0xA )
                goto LABEL_60;
              v37 = (v35 | 0x20) - 97;
              v36 = v37 + 10;
              if ( v37 >= 0xFFFFFFF6 )
                v36 = -1;
              if ( v36 <= 0xF )
              {
LABEL_60:
                v26 = v44;
                if ( v44 >= 4 )
                {
                  v43[3] = v36 | (16 * a1);
                  goto LABEL_39;
                }
                v42 = 3;
LABEL_78:
                core::panicking::panic_bounds_check(v42, v26, (int)&off_2E2BD4);
              }
            }
          }
        }
      }
    }
LABEL_82:
    core::panicking::panic((int)aCalledOptionUn_1, 43, (int)&off_2E2BC4);
  }
  return 1114112;
}
