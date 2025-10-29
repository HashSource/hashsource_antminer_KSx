int __fastcall sub_8D404(int a1, int a2, char *a3, const char **a4, int *a5, char a6)
{
  char v6; // r7
  int v9; // r0
  int v10; // r3
  int v11; // r2
  int *v12; // r8
  int v13; // r3
  int v14; // r2
  char *v15; // r5
  int v16; // r1
  int v17; // r6
  int v18; // r5
  int v19; // r5
  int v20; // r3
  char *v21; // r3
  int v22; // r6
  void *v23; // r7
  int v24; // r5
  char *v25; // r0
  int v26; // r1
  _BOOL4 v27; // r2
  int v28; // r3
  int v29; // r2
  char *v30; // r0
  int v31; // r8
  int v32; // r0
  int v33; // r5
  int v34; // r6
  int v36; // r2
  int v37; // r3
  int v38; // r1
  int v39; // r5
  int v40; // r2
  char *s; // [sp+8h] [bp-14h]
  char *v42; // [sp+Ch] [bp-10h]
  int v43; // [sp+Ch] [bp-10h]

  s = a3;
  v6 = a6;
  if ( !a3 )
    return -1;
  v9 = dword_2D06B8;
  if ( dword_2D06B8 == -1 )
  {
    v9 = getenv("POSIXLY_CORRECT") != 0;
    dword_2D06B8 = v9;
  }
  v10 = (unsigned __int8)*s;
  if ( v9 )
  {
    v6 = a6 & 0xFE;
    if ( (((_BYTE)v10 - 43) & 0xFD) != 0 )
      goto LABEL_6;
LABEL_37:
    ++s;
    goto LABEL_38;
  }
  if ( v10 != 43 )
  {
    if ( v10 != 45 )
    {
LABEL_6:
      v11 = optind;
      LOWORD(v12) = (unsigned __int16)&optreset;
      if ( optind )
        goto LABEL_7;
      goto LABEL_39;
    }
    v6 = a6 | 2;
    goto LABEL_37;
  }
  v6 = a6 & 0xFE;
  ++s;
LABEL_38:
  v11 = optind;
  LOWORD(v12) = -24764;
  if ( optind )
  {
LABEL_7:
    HIWORD(v12) = (unsigned int)&optreset >> 16;
    v13 = *v12;
    optarg = 0;
    if ( !v13 )
      goto LABEL_8;
    goto LABEL_40;
  }
LABEL_39:
  HIWORD(v12) = (unsigned int)&optreset >> 16;
  v13 = 1;
  *v12 = 1;
  optind = 1;
  optarg = v11;
LABEL_40:
  dword_2D06BC = -1;
  dword_2D06C0 = -1;
LABEL_8:
  if ( !v13 )
    goto LABEL_18;
  while ( 1 )
  {
    v14 = optind;
    *v12 = 0;
    if ( v14 >= a1 )
    {
      v33 = dword_2D06BC;
      v34 = dword_2D06C0;
      off_2D06AC = "";
      if ( dword_2D06BC == -1 )
      {
        if ( dword_2D06C0 != -1 )
          optind = dword_2D06C0;
      }
      else
      {
        sub_8D128(dword_2D06C0, dword_2D06BC, v14, a2);
        optind -= v33 - v34;
      }
      goto LABEL_57;
    }
    v15 = *(char **)(a2 + 4 * v14);
    v16 = (unsigned __int8)*v15;
    off_2D06AC = v15;
    if ( v16 == 45 )
      break;
LABEL_11:
    off_2D06AC = "";
    if ( (v6 & 2) != 0 )
    {
      optind = v14 + 1;
      optarg = (int)v15;
      return 1;
    }
    if ( (v6 & 1) == 0 )
      return -1;
    v17 = dword_2D06C0;
    if ( dword_2D06C0 == -1 )
    {
      dword_2D06C0 = v14;
      optind = v14 + 1;
LABEL_18:
      v21 = (char *)off_2D06AC;
      v22 = *(unsigned __int8 *)off_2D06AC;
      if ( *(_BYTE *)off_2D06AC )
        goto LABEL_19;
    }
    else
    {
      v18 = dword_2D06BC;
      if ( dword_2D06BC == -1 )
      {
        optind = v14 + 1;
        goto LABEL_18;
      }
      sub_8D128(dword_2D06C0, dword_2D06BC, v14, a2);
      dword_2D06BC = -1;
      v19 = optind - (v18 - v17);
      ++optind;
      v20 = *v12;
      dword_2D06C0 = v19;
      if ( !v20 )
        goto LABEL_18;
    }
  }
  v22 = (unsigned __int8)v15[1];
  if ( v15[1] )
  {
    v31 = dword_2D06C0;
    if ( dword_2D06C0 != -1 )
    {
LABEL_44:
      if ( dword_2D06BC == -1 )
        dword_2D06BC = v14;
      if ( !v22 )
        goto LABEL_65;
    }
    v21 = v15 + 1;
    off_2D06AC = v15 + 1;
    if ( v22 != 45 )
    {
LABEL_19:
      if ( !a4 || v21 == *(char **)(a2 + 4 * optind) )
        goto LABEL_23;
      if ( v22 != 45 )
      {
        if ( (v6 & 4) == 0 )
          goto LABEL_23;
        v32 = v22 != 58 && strchr(s, v22) != 0;
        goto LABEL_52;
      }
LABEL_51:
      v32 = 0;
      off_2D06AC = v21 + 1;
LABEL_52:
      v24 = sub_8D1F0(a2, s, a4, a5, v32);
      if ( v24 != -1 )
      {
LABEL_53:
        off_2D06AC = "";
        return v24;
      }
      v21 = (char *)off_2D06AC;
      v22 = *(unsigned __int8 *)off_2D06AC;
LABEL_23:
      v23 = v21 + 1;
      v24 = v22;
      off_2D06AC = v21 + 1;
      if ( v22 == 58 )
        goto LABEL_99;
      if ( v22 == 45 )
      {
        v15 = v21;
        goto LABEL_66;
      }
      v42 = v21;
      v25 = strchr(s, v22);
      v21 = v42;
      if ( !v25 )
      {
LABEL_99:
        if ( !v21[1] )
          ++optind;
LABEL_78:
        optopt = v24;
        return 63;
      }
      v26 = (unsigned __int8)v25[1];
      v27 = v22 == 87;
      if ( !a4 )
        v27 = 0;
      if ( v27 && v26 == 59 )
      {
        if ( !v42[1] )
        {
          v28 = optind + 1;
          optind = v28;
          if ( v28 >= a1 )
          {
            optopt = 87;
            v29 = (unsigned __int8)*s;
            off_2D06AC = "";
            if ( v29 != 58 )
              return 63;
            return 58;
          }
          off_2D06AC = *(_UNKNOWN **)(a2 + 4 * v28);
        }
        v24 = sub_8D1F0(a2, s, a4, a5, 0);
        goto LABEL_53;
      }
LABEL_69:
      if ( v26 != 58 )
      {
        if ( !*(_BYTE *)v23 )
          ++optind;
        return v24;
      }
      v36 = optind;
      optarg = 0;
      v37 = optind + 1;
      if ( *(_BYTE *)v23 )
      {
        optarg = (int)v23;
      }
      else if ( v25[2] != 58 )
      {
        ++optind;
        if ( a1 <= v37 )
        {
          optopt = v24;
          off_2D06AC = "";
          if ( *s != 58 )
            return 63;
          return 58;
        }
        v38 = *(_DWORD *)(a2 + 4 * v37);
        v37 = v36 + 2;
        optarg = v38;
      }
      optind = v37;
      off_2D06AC = "";
      return v24;
    }
    if ( v15[2] )
    {
      if ( !a4 )
      {
        v23 = v15 + 2;
        ++v15;
        off_2D06AC = v23;
        goto LABEL_66;
      }
      if ( v21 == *(char **)(a2 + 4 * optind) )
        goto LABEL_23;
      goto LABEL_51;
    }
    v39 = dword_2D06BC;
    v40 = v14 + 1;
    optind = v40;
    off_2D06AC = "";
    if ( dword_2D06BC != -1 )
    {
      sub_8D128(v31, dword_2D06BC, v40, a2);
      optind -= v39 - v31;
    }
LABEL_57:
    dword_2D06BC = -1;
    dword_2D06C0 = -1;
    return -1;
  }
  v43 = v14;
  v30 = strchr(s, 45);
  v14 = v43;
  if ( !v30 )
    goto LABEL_11;
  v31 = dword_2D06C0;
  if ( dword_2D06C0 != -1 )
    goto LABEL_44;
LABEL_65:
  v23 = v15 + 1;
  off_2D06AC = v15 + 1;
LABEL_66:
  if ( !v15[1] )
  {
    v25 = strchr(s, 45);
    if ( v25 )
    {
      v26 = (unsigned __int8)v25[1];
      v24 = 45;
      goto LABEL_69;
    }
  }
  if ( *(_BYTE *)v23 )
  {
    v24 = 45;
    goto LABEL_78;
  }
  return -1;
}
