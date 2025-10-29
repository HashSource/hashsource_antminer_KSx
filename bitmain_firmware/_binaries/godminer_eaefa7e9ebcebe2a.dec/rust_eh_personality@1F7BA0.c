int __fastcall rust_eh_personality(char a1, int a2, int a3)
{
  int v3; // r8
  int v6; // r7
  int v7; // r1
  int v8; // r0
  unsigned int v10; // r9
  unsigned __int8 *LanguageSpecificData; // r11
  int IPInfo; // r4
  int v13; // r5
  int RegionStart; // r0
  unsigned int v15; // r2
  char *v16; // r11
  unsigned int v17; // t1
  int v18; // r0
  int v19; // r1
  int v20; // r0
  char *v21; // r11
  int v22; // t1
  int v23; // t1
  char *v24; // r11
  unsigned int v25; // t1
  int v26; // r9
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // t1
  char v31; // r3
  bool v32; // nf
  char v33; // r5
  unsigned int v34; // r4
  unsigned int v35; // r7
  char v36; // r3
  unsigned int v37; // r3
  char *v38; // r0
  int v39; // r1
  int v41; // r1
  int v42; // r10
  int v43; // r0
  int v44; // r1
  bool v45; // zf
  int v46; // r0
  int v47; // lr
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r5
  int v52; // t1
  char v53; // r7
  bool v54; // nf
  char v55; // r12
  unsigned int v56; // r4
  unsigned int v57; // r6
  char v58; // r7
  unsigned int v59; // r7
  int v60; // r0
  int v61; // r1
  int v62; // r3
  char *v63; // r2
  unsigned int v64; // r0
  int v65; // r7
  int v66; // t1
  char v67; // r6
  bool v68; // nf
  char v69; // r12
  unsigned int v70; // r4
  unsigned int v71; // r5
  char v72; // r6
  unsigned int v73; // r6
  int v74; // r1
  int v75; // [sp+0h] [bp-4Ch]
  int v76; // [sp+4h] [bp-48h]
  int v77; // [sp+8h] [bp-44h]
  unsigned int v78; // [sp+Ch] [bp-40h]
  unsigned int v79; // [sp+10h] [bp-3Ch]
  int v80; // [sp+18h] [bp-34h]
  int v81; // [sp+1Ch] [bp-30h]
  int v82; // [sp+20h] [bp-2Ch] BYREF
  int v83; // [sp+24h] [bp-28h] BYREF
  int v84[6]; // [sp+28h] [bp-24h] BYREF
  int *v85; // [sp+40h] [bp-Ch] BYREF
  int *v86; // [sp+44h] [bp-8h] BYREF
  char *v87; // [sp+48h] [bp-4h] BYREF

  if ( (a1 & 3) == 2 )
    goto LABEL_5;
  v6 = 9;
  if ( (a1 & 3) == 1 )
  {
    v7 = 0;
  }
  else
  {
    if ( (a1 & 3) != 0 )
      return v6;
    v7 = 1;
    if ( (a1 & 8) != 0 )
    {
LABEL_5:
      v8 = a2;
      goto LABEL_6;
    }
  }
  v77 = v7;
  v76 = a2;
  unwind::libunwind::_Unwind_SetGR(a3, 12);
  v82 = a3;
  v10 = 0;
  LanguageSpecificData = (unsigned __int8 *)Unwind_GetLanguageSpecificData(a3);
  v83 = 0;
  IPInfo = unwind::libunwind::_Unwind_GetIPInfo(a3, &v83);
  v13 = v83;
  RegionStart = Unwind_GetRegionStart(a3);
  if ( !v13 )
    --IPInfo;
  v80 = RegionStart;
  v84[5] = RegionStart;
  v84[2] = (int)&v86;
  v84[1] = (int)&off_2DFE54;
  v84[4] = IPInfo;
  v84[3] = (int)&off_2DFE6C;
  v85 = &v82;
  v84[0] = (int)&v85;
  v86 = &v82;
  if ( !LanguageSpecificData )
  {
LABEL_63:
    if ( v77 )
      goto LABEL_64;
    goto LABEL_68;
  }
  v17 = *LanguageSpecificData;
  v16 = (char *)(LanguageSpecificData + 1);
  v15 = v17;
  v87 = v16;
  v79 = IPInfo;
  if ( v17 != 255 )
  {
    v18 = sub_1E87A4(&v87, v84, v15);
    v75 = v19;
    if ( !v18 )
    {
      v21 = v87 + 1;
      v20 = (unsigned __int8)*v87++;
      if ( v20 == 255 )
        goto LABEL_20;
      goto LABEL_18;
    }
    return v6;
  }
  v75 = RegionStart;
  v22 = (unsigned __int8)*v16;
  v21 = v16 + 1;
  v87 = v21;
  if ( v22 == 255 )
    goto LABEL_20;
  do
LABEL_18:
    v23 = *v21++;
  while ( v23 < 0 );
  v87 = v21;
LABEL_20:
  v25 = (unsigned __int8)*v21;
  v24 = v21 + 1;
  v26 = 0;
  v78 = v25;
  v27 = 0;
  v28 = 0;
  v87 = v24;
  do
  {
    v30 = *v24++;
    v29 = v30;
    v31 = v27 & 0x3F;
    v33 = (v27 & 0x3F) - 32;
    v32 = (v27 & 0x3F) - 32 < 0;
    v27 += 7;
    v34 = v30 & 0x7F;
    v35 = v34 << v31;
    v36 = 32 - v31;
    if ( !v32 )
      v35 = 0;
    v26 |= v35;
    v37 = v34 >> v36;
    if ( !v32 )
      v37 = v34 << v33;
    v28 |= v37;
  }
  while ( v29 < 0 );
  v38 = v24;
  v6 = 9;
  v87 = v24;
  do
  {
    if ( v38 < &v24[v26] )
    {
      if ( sub_1E87A4(&v87, v84, v78) )
        return v6;
      v3 = v39;
      if ( sub_1E87A4(&v87, v84, v78) )
        return v6;
      v42 = v41;
      v43 = sub_1E87A4(&v87, v84, v78);
      v45 = v43 == 0;
      v46 = v81;
      if ( v45 )
        v46 = v44;
      v81 = v46;
      if ( !v45 )
        return v6;
      v38 = v87;
      v47 = a3;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      do
      {
        v52 = *v38++;
        v51 = v52;
        v53 = v48 & 0x3F;
        v55 = (v48 & 0x3F) - 32;
        v54 = (v48 & 0x3F) - 32 < 0;
        v48 += 7;
        v56 = v52 & 0x7F;
        v57 = v56 << v53;
        v58 = 32 - v53;
        if ( !v54 )
          v57 = 0;
        v49 |= v57;
        v59 = v56 >> v58;
        if ( !v54 )
          v59 = v56 << v55;
        v50 |= v59;
      }
      while ( v51 < 0 );
      a3 = v47;
      v6 = 9;
      v87 = v38;
      if ( v79 >= v3 + v80 )
        continue;
    }
    v10 = 3;
    goto LABEL_63;
  }
  while ( v79 >= v42 + v3 + v80 );
  if ( !v81 )
  {
    v10 = 0;
    if ( v77 )
      goto LABEL_64;
    goto LABEL_68;
  }
  v3 = v81 + v75;
  if ( !(v49 | v50) )
  {
    v10 = 1;
    if ( v77 )
      goto LABEL_64;
LABEL_68:
    if ( v10 - 1 < 2 )
    {
      unwind::libunwind::_Unwind_SetGR(a3, 0);
      unwind::libunwind::_Unwind_SetGR(a3, 1);
      v6 = 7;
      unwind::libunwind::_Unwind_SetIP(a3, v3);
      return v6;
    }
    if ( v10 )
      return v6;
LABEL_71:
    v8 = v76;
LABEL_6:
    v6 = 9;
    if ( !_gnu_unwind_frame(v8, a3) )
      return 8;
    return v6;
  }
  v60 = v26 + v49;
  v61 = 0;
  v62 = 0;
  v63 = &v24[v60 - 1];
  v64 = 0;
  do
  {
    v66 = *v63++;
    v65 = v66;
    v67 = v64 & 0x3F;
    v69 = (v64 & 0x3F) - 32;
    v68 = (int)((v64 & 0x3F) - 32) < 0;
    v64 += 7;
    v70 = v66 & 0x7F;
    v71 = v70 << v67;
    v72 = 32 - v67;
    if ( !v68 )
      v71 = 0;
    v61 |= v71;
    v73 = v70 >> v72;
    if ( !v68 )
      v73 = v70 << v69;
    v62 |= v73;
  }
  while ( v65 < 0 );
  v45 = (v61 | v62) == 0;
  v74 = 2;
  v10 = 2;
  if ( v45 )
    v74 = 1;
  if ( (v65 & 0x40) == 0 )
    v10 = v74;
  if ( v64 > 0x3F )
    v10 = v74;
  a3 = v47;
  v6 = 9;
  if ( !v77 )
    goto LABEL_68;
LABEL_64:
  if ( v10 < 2 )
    goto LABEL_71;
  if ( v10 != 2 )
    return v6;
  *(_DWORD *)(v76 + 32) = unwind::libunwind::_Unwind_GetGR(a3, 13);
  return 6;
}
