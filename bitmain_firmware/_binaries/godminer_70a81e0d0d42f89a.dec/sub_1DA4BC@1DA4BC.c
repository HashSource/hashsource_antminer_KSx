unsigned int __fastcall sub_1DA4BC(unsigned __int8 **a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // lr
  _WORD *v5; // r7
  int v7; // r4
  unsigned int v8; // r5
  unsigned __int8 *v9; // r10
  unsigned __int8 *v10; // r9
  int v11; // r1
  unsigned __int8 *v12; // r8
  unsigned __int8 *v13; // r11
  unsigned __int8 *v14; // r1
  unsigned __int8 *v15; // r0
  int v16; // r2
  int v17; // r12
  unsigned int v18; // r2
  int v19; // r2
  int v20; // r12
  int v21; // r2
  unsigned int v22; // r2
  unsigned int v23; // r0
  bool v24; // zf
  unsigned int v25; // r1
  int v26; // r3
  unsigned int v27; // r2
  bool v28; // zf
  int v29; // r0
  bool v30; // zf
  int v31; // r0
  unsigned int v32; // r0
  bool v33; // cf
  unsigned int v35; // r3
  int v36; // [sp+0h] [bp-24h]
  unsigned int v37; // [sp+4h] [bp-20h]
  unsigned int v39; // [sp+Ch] [bp-18h]
  unsigned __int8 *v40; // [sp+10h] [bp-14h]
  unsigned __int8 *v41; // [sp+10h] [bp-14h]
  unsigned int v42; // [sp+14h] [bp-10h]
  unsigned int v43; // [sp+18h] [bp-Ch]
  char v44; // [sp+1Ch] [bp-8h] BYREF
  unsigned int v45; // [sp+1Dh] [bp-7h]

  if ( !a3 )
    return 0;
  v5 = (_WORD *)(a2 + 2);
  v7 = 2 * a3;
  v8 = 0;
  v43 = a3 - 1;
  while ( v8 >= v43 )
  {
    v9 = *a1;
    v10 = a1[1];
    v12 = v10;
    v13 = *a1;
    if ( !v8 )
    {
LABEL_11:
      if ( !v12 )
        goto LABEL_18;
      goto LABEL_12;
    }
LABEL_15:
    if ( !v10 )
      goto LABEL_3;
    v13 = v9 + 1;
    if ( *v9 != 58 )
      goto LABEL_3;
    v12 = v10 - 1;
    if ( v10 == (unsigned __int8 *)1 )
    {
LABEL_18:
      v17 = 0;
      goto LABEL_23;
    }
LABEL_12:
    v14 = v12 - 1;
    v15 = v13 + 1;
    v16 = *v13;
    a4 = v16 - 48;
    *a1 = v13 + 1;
    a1[1] = v12 - 1;
    if ( (unsigned int)(v16 - 48) < 0xA )
    {
      v17 = 1;
      goto LABEL_24;
    }
    v17 = 0;
    v18 = (v16 | 0x20) - 97;
    a4 = v18 + 10;
    if ( v18 >= 0xFFFFFFF6 )
      a4 = -1;
    if ( a4 < 0x10 )
    {
      v17 = 1;
      goto LABEL_24;
    }
LABEL_23:
    v14 = v12;
    v15 = v13;
    *a1 = v13;
    a1[1] = v12;
LABEL_24:
    LOWORD(v19) = 0;
    if ( v17 != 1 )
      goto LABEL_45;
    if ( HIWORD(a4) )
      goto LABEL_58;
    if ( v14 )
    {
      v20 = *v15;
      v42 = (unsigned int)(v14 - 1);
      a1[1] = v14 - 1;
      v4 = v20 - 48;
      v40 = v15 + 1;
      *a1 = v15 + 1;
      if ( (unsigned int)(v20 - 48) < 0xA )
      {
        v21 = 1;
        v17 = 1;
        goto LABEL_35;
      }
      v22 = v20 | 0x20;
      v17 = 1;
      v22 -= 97;
      v4 = v22 + 10;
      if ( v22 >= 0xFFFFFFF6 )
        v4 = -1;
      v21 = 0;
      if ( v4 < 0x10 )
      {
        v21 = 1;
        goto LABEL_35;
      }
    }
    else
    {
      v21 = 0;
    }
    *a1 = v15;
    a1[1] = v14;
    v42 = (unsigned int)v14;
    v40 = v15;
LABEL_35:
    if ( v21 != 1 )
    {
      LOWORD(v19) = a4;
      goto LABEL_45;
    }
    v23 = 16 * (unsigned __int16)a4;
    if ( HIWORD(v23) )
      goto LABEL_58;
    v19 = (unsigned __int16)v23 + (unsigned __int16)v4;
    v24 = HIWORD(v4) == 0;
    if ( !HIWORD(v4) )
      v24 = (unsigned __int16)v19 == v19;
    if ( !v24 )
    {
LABEL_58:
      *a1 = v13;
      a1[1] = v12;
LABEL_3:
      *a1 = v9;
      a1[1] = v10;
      return v8;
    }
    v25 = v42;
    if ( v42 )
    {
      v39 = v42 - 1;
      a1[1] = (unsigned __int8 *)(v42 - 1);
      v4 = (unsigned int)(v40 + 1);
      v26 = *v40;
      *a1 = v40 + 1;
      v25 = v26 - 48;
      if ( (unsigned int)(v26 - 48) < 0xA )
      {
        a4 = 1;
        goto LABEL_53;
      }
      v25 = (v26 | 0x20) - 87;
      if ( (v26 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v25 = -1;
      a4 = 0;
      if ( v25 < 0x10 )
      {
        a4 = 1;
        goto LABEL_53;
      }
    }
    else
    {
      a4 = 0;
    }
    v4 = (unsigned int)v40;
    a1[1] = (unsigned __int8 *)v42;
    v39 = v42;
    *a1 = v40;
LABEL_53:
    if ( a4 != 1 )
      goto LABEL_45;
    v27 = 16 * (unsigned __int16)v19;
    if ( HIWORD(v27) )
      goto LABEL_58;
    v19 = (unsigned __int16)v27 + (unsigned __int16)v25;
    v28 = HIWORD(v25) == 0;
    if ( !HIWORD(v25) )
      v28 = (unsigned __int16)v19 == v19;
    if ( !v28 )
      goto LABEL_58;
    a4 = v39;
    if ( v39 )
    {
      v36 = *(unsigned __int8 *)v4;
      v41 = (unsigned __int8 *)(v4 + 1);
      *a1 = (unsigned __int8 *)(v4 + 1);
      v37 = v39 - 1;
      a1[1] = (unsigned __int8 *)(v39 - 1);
      v25 = v36 - 48;
      if ( (unsigned int)(v36 - 48) < 0xA )
      {
        v29 = 1;
        goto LABEL_68;
      }
      v25 = (v36 | 0x20) - 87;
      if ( (v36 | 0x20u) - 97 >= 0xFFFFFFF6 )
        v25 = -1;
      v29 = 0;
      if ( v25 < 0x10 )
      {
        v29 = 1;
        goto LABEL_68;
      }
    }
    else
    {
      v29 = 0;
    }
    *a1 = (unsigned __int8 *)v4;
    a1[1] = (unsigned __int8 *)v39;
    v37 = v39;
    v41 = (unsigned __int8 *)v4;
LABEL_68:
    if ( v29 == 1 )
    {
      if ( (16 * (unsigned int)(unsigned __int16)v19) >> 16 )
        goto LABEL_58;
      v19 = (unsigned __int16)(16 * v19) + (unsigned __int16)v25;
      v30 = HIWORD(v25) == 0;
      if ( !HIWORD(v25) )
        v30 = (unsigned __int16)v19 == v19;
      if ( !v30 )
        goto LABEL_58;
      a4 = v37;
      if ( v37 )
      {
        a1[1] = (unsigned __int8 *)(v37 - 1);
        v4 = *v41;
        *a1 = v41 + 1;
        if ( v4 - 48 < 0xA )
        {
          v31 = 1;
          goto LABEL_83;
        }
        v32 = (v4 | 0x20) - 87;
        if ( (v4 | 0x20) - 97 >= 0xFFFFFFF6 )
          v32 = -1;
        v33 = v32 >= 0x10;
        v31 = 0;
        if ( !v33 )
        {
          v31 = 1;
          goto LABEL_83;
        }
      }
      else
      {
        v31 = 0;
      }
      *a1 = v41;
      a1[1] = (unsigned __int8 *)v37;
LABEL_83:
      if ( v31 == 1 )
        goto LABEL_58;
    }
LABEL_45:
    if ( v17 != 1 )
      goto LABEL_58;
    *(v5 - 1) = v19;
    ++v8;
    v7 -= 2;
    ++v5;
    if ( !v7 )
      return a3;
  }
  v9 = *a1;
  v10 = a1[1];
  if ( v8 && (!v10 || (v11 = *v9, *a1 = v9 + 1, a1[1] = v10 - 1, v11 != 58)) || (sub_1D9A58((int)&v44, a1), !v44) )
  {
    *a1 = v9;
    a1[1] = v10;
    v12 = v10;
    v13 = v9;
    if ( !v8 )
      goto LABEL_11;
    goto LABEL_15;
  }
  if ( v8 >= a3 )
    core::panicking::panic_bounds_check(v8, a3, (int)&off_2E0D48);
  v35 = v45;
  *(v5 - 1) = __rev16(v45);
  if ( v8 + 1 >= a3 )
    core::panicking::panic_bounds_check(v8 + 1, a3, (int)&off_2E0D58);
  *v5 = bswap32(v35);
  return v8 + 2;
}
