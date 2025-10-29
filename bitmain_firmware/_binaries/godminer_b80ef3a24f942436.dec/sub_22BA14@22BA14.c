int __fastcall sub_22BA14(_DWORD *a1, int a2)
{
  _DWORD *v2; // r10
  int v3; // r5
  unsigned int v4; // lr
  unsigned int v5; // r12
  unsigned int v6; // r3
  int v7; // r11
  unsigned int v8; // r4
  unsigned int v9; // r8
  int v10; // r0
  unsigned int v11; // r7
  int v12; // r6
  int result; // r0
  int v14; // r3
  unsigned int v15; // r2
  __int64 v16; // r4
  unsigned int v17; // r4
  int v18; // r0
  char v19; // r4
  unsigned int v20; // r3
  int v21; // r0
  int v22; // r3
  unsigned int v23; // r0
  unsigned int v24; // r4
  unsigned int v25; // r3
  int v26; // r7
  int v27; // r2
  _DWORD *v28; // r7
  unsigned int v29; // r3
  unsigned int v30; // r10
  _BYTE *v31; // r0
  int v32; // r6
  unsigned int v33; // r7
  int v34; // r6
  int v35; // r5
  int v36; // r5
  unsigned int v37; // r7
  unsigned int v38; // r0
  int v40; // r3
  unsigned int v41; // r3
  unsigned int v42; // r0
  char **v43; // r2
  unsigned int v44; // [sp+8h] [bp-24h]
  unsigned int v45; // [sp+Ch] [bp-20h]
  unsigned int v46; // [sp+14h] [bp-18h]
  unsigned int v47; // [sp+18h] [bp-14h]
  int v48; // [sp+1Ch] [bp-10h]
  unsigned int v49; // [sp+20h] [bp-Ch]
  unsigned int v50; // [sp+24h] [bp-8h]
  unsigned int v51; // [sp+28h] [bp-4h]

  v2 = a1;
  if ( !*(_DWORD *)a2 )
  {
    if ( *(_BYTE *)(a2 + 14) )
      goto LABEL_6;
    v14 = *(unsigned __int8 *)(a2 + 12);
    v15 = *(_DWORD *)(a2 + 4);
    v16 = *(_QWORD *)(a2 + 48);
    *(_BYTE *)(a2 + 12) = v14 ^ 1;
    if ( v15 )
    {
      if ( HIDWORD(v16) <= v15 )
      {
        if ( HIDWORD(v16) != v15 )
LABEL_10:
          core::str::slice_error_fail((char *)v16, HIDWORD(v16), v15, HIDWORD(v16), (int)&off_2ED9D4);
      }
      else if ( *(char *)(v16 + v15) <= -65 )
      {
        goto LABEL_10;
      }
    }
    if ( v15 == HIDWORD(v16) )
    {
      if ( !v14 )
        goto LABEL_68;
    }
    else
    {
      v31 = (_BYTE *)(v16 + v15);
      v32 = *(char *)(v16 + v15);
      v33 = (unsigned __int8)v32;
      if ( v32 <= -1 )
      {
        v34 = v32 & 0x1F;
        v35 = v31[1] & 0x3F;
        if ( v33 <= 0xDF )
        {
          v33 = v35 | (v34 << 6);
        }
        else
        {
          v36 = v31[2] & 0x3F | (v35 << 6);
          if ( v33 < 0xF0 )
            v33 = v36 | (v34 << 12);
          else
            v33 = v31[3] & 0x3F | (v36 << 6) | ((v34 & 7) << 18);
        }
      }
      if ( !v14 )
      {
        if ( v33 != 1114112 )
        {
          v40 = 1;
          if ( v33 >= 0x80 )
            v40 = 2;
          result = 1;
          if ( v33 >= 0x800 )
          {
            v40 = 4;
            if ( v33 < 0x10000 )
              v40 = 3;
          }
          v41 = v40 + v15;
          *(_DWORD *)(a2 + 4) = v41;
          *v2 = 1;
          v2[1] = v15;
          v2[2] = v41;
          return result;
        }
LABEL_68:
        *v2 = 2;
        *(_BYTE *)(a2 + 14) = 1;
        return 1;
      }
    }
    v2[2] = v15;
    *v2 = 0;
    v2[1] = v15;
    return 0;
  }
  v3 = *(_DWORD *)(a2 + 28);
  v4 = *(_DWORD *)(a2 + 52);
  if ( v3 == v4 )
  {
LABEL_6:
    *a1 = 2;
    return 2;
  }
  v5 = *(_DWORD *)(a2 + 60);
  v6 = *(_DWORD *)(a2 + 52);
  v7 = *(_DWORD *)(a2 + 48);
  v48 = v3 + v5;
  v8 = v3 + v5 - 1;
  if ( v8 < v4 )
  {
    v9 = *(_DWORD *)(a2 + 16);
    v49 = *(_DWORD *)(a2 + 12);
    v10 = *(_DWORD *)(a2 + 24);
    v11 = *(_DWORD *)(a2 + 8);
    v12 = *(_DWORD *)(a2 + 56);
    v45 = v10 + v3;
    v6 = *(_DWORD *)(a2 + 28);
    v44 = v5 - v10;
    v47 = v5 - 1;
    v51 = *(_DWORD *)(a2 + 36);
    v50 = v51;
    v46 = v11;
    while ( v3 == v6 )
    {
      v18 = *(_BYTE *)(v7 + v8) & 0x3F;
      v19 = 32 - v18;
      v20 = v11 >> v18;
      v21 = v18 - 32;
      v22 = v20 | (v49 << v19);
      if ( v21 >= 0 )
        v22 = v49 >> v21;
      if ( (v22 & 1) == 0 )
      {
        v6 = v3 + v5;
        v17 = 0;
        *(_DWORD *)(a2 + 28) = v48;
        if ( v51 == -1 )
          goto LABEL_13;
LABEL_12:
        *(_DWORD *)(a2 + 36) = v17;
        v50 = v17;
        goto LABEL_13;
      }
      v23 = v50;
      v24 = v5;
      if ( v9 > v50 )
        v23 = v9;
      if ( v51 == -1 )
        v23 = v9;
      if ( v23 > v5 )
        v24 = v23;
      v25 = v23;
      while ( v24 != v25 )
      {
        if ( v3 + v25 >= v4 )
        {
          v42 = v23 + v3;
          v43 = &off_2ED964;
          if ( v4 > v42 )
            v42 = v4;
LABEL_81:
          core::panicking::panic_bounds_check(v42, v4, (int)v43);
        }
        v26 = *(unsigned __int8 *)(v7 + v3 + v25);
        v27 = *(unsigned __int8 *)(v12 + v25++);
        if ( v27 != v26 )
        {
          v6 = v3 - v9 + v25;
          *(_DWORD *)(a2 + 28) = v6;
          if ( v51 == -1 )
          {
            v11 = v46;
            goto LABEL_13;
          }
          v17 = 0;
          v11 = v46;
          goto LABEL_12;
        }
      }
      v28 = v2;
      v29 = v9;
      v30 = v51 + 1;
      if ( v51 != -1 )
        v30 = v50;
      do
      {
        if ( v30 >= v29 )
        {
          *(_DWORD *)(a2 + 28) = v48;
          if ( v51 != -1 )
            *(_DWORD *)(a2 + 36) = 0;
          *v28 = 0;
          v28[1] = v3;
          v28[2] = v48;
          return v3 + v5;
        }
        if ( --v29 >= v5 )
          core::panicking::panic_bounds_check(v29, v5, (int)&off_2ED974);
        if ( v29 + v3 >= v4 )
        {
          v42 = v29 + v3;
          v43 = &off_2ED984;
          goto LABEL_81;
        }
      }
      while ( *(unsigned __int8 *)(v12 + v29) == *(unsigned __int8 *)(v7 + v29 + v3) );
      v6 = v45;
      v2 = v28;
      v17 = v44;
      v11 = v46;
      *(_DWORD *)(a2 + 28) = v45;
      if ( v51 != -1 )
        goto LABEL_12;
LABEL_13:
      v8 = v47 + v6;
      if ( v47 + v6 >= v4 )
      {
        v6 = v4;
        break;
      }
    }
  }
  v37 = 0;
  if ( !v6 )
    goto LABEL_60;
  v38 = v6;
  while ( v38 < v4 )
  {
    if ( *(char *)(v7 + v38) >= -64 )
    {
      v37 = v38;
      goto LABEL_60;
    }
LABEL_55:
    if ( __CFADD__(v38++, 1) )
      goto LABEL_60;
  }
  if ( v4 != v38 )
    goto LABEL_55;
  v37 = v4;
LABEL_60:
  result = 1;
  if ( v37 > v6 )
    v6 = v37;
  *v2 = 1;
  v2[1] = v3;
  v2[2] = v37;
  *(_DWORD *)(a2 + 28) = v6;
  return result;
}
