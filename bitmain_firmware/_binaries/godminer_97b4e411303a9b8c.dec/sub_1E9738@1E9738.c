int __fastcall sub_1E9738(int *a1, int a2, _DWORD *a3, int *a4, int a5, int a6, int a7, char **a8)
{
  int *v9; // r6
  bool v10; // zf
  int v11; // r11
  int *v12; // r5
  char *v13; // r10
  int v14; // r4
  char **v15; // r7
  int v16; // r0
  int v17; // r8
  __int64 v18; // r0
  char **v19; // r10
  int v20; // r1
  char **v21; // r2
  int v22; // r3
  int *v23; // r5
  char ****v24; // r7
  int v25; // r8
  int v26; // r2
  int v27; // r3
  int v28; // r4
  int v29; // r7
  int v30; // r0
  int v31; // r0
  int v32; // lr
  char **v33; // r8
  int v34; // r2
  char **v35; // r3
  int v36; // r4
  int *v37; // r5
  char ****v38; // r7
  int v39; // r2
  int v40; // r3
  int v41; // r4
  int v42; // r7
  int v44; // r1
  int v45; // r5
  __int64 v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r2
  char *v50; // r1
  int (__fastcall *v51)(int); // r3
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // [sp+4h] [bp-58h]
  int v56; // [sp+8h] [bp-54h]
  int v57; // [sp+Ch] [bp-50h] BYREF
  char *v58; // [sp+10h] [bp-4Ch] BYREF
  int v59; // [sp+14h] [bp-48h]
  char **v60; // [sp+18h] [bp-44h]
  int v61; // [sp+1Ch] [bp-40h]
  char ****v62; // [sp+20h] [bp-3Ch]
  int v63; // [sp+24h] [bp-38h]
  int v64; // [sp+28h] [bp-34h]
  int v65; // [sp+2Ch] [bp-30h]
  int v66; // [sp+30h] [bp-2Ch]
  int v67; // [sp+34h] [bp-28h]
  char ***v68; // [sp+38h] [bp-24h] BYREF
  int v69; // [sp+3Ch] [bp-20h]
  __int64 v70; // [sp+40h] [bp-1Ch]
  char ***v71; // [sp+48h] [bp-14h]
  int v72; // [sp+4Ch] [bp-10h]
  char **v73; // [sp+50h] [bp-Ch] BYREF
  int (*v74)(); // [sp+54h] [bp-8h]
  int v75; // [sp+58h] [bp-4h] BYREF

  v9 = (int *)a1[1];
  v10 = a2 == 0;
  v56 = a4[2];
  v11 = *a1;
  v12 = a3 + 1;
  v13 = (char *)*a3;
  if ( !a2 )
    v10 = *((_BYTE *)v9 + 16) == 0;
  v14 = *a4;
  v15 = (char **)a4[1];
  v57 = a2;
  if ( v10 )
    goto LABEL_32;
  v16 = v9[3];
  if ( v11 )
  {
    v60 = &off_2E04E0;
    v61 = 1;
    v63 = 0;
    v58 = 0;
    v62 = (char ****)aRustc9eb3afe9e;
    if ( core::fmt::Formatter::write_fmt(v16, &v58) )
      return 1;
    if ( *((_BYTE *)v9 + 16) == 1 )
    {
      v17 = v9[3];
      v18 = core::fmt::ArgumentV1::from_usize(&unk_2A567C);
      v63 = 2;
      v70 = v18;
      v62 = &v68;
      v61 = 1;
      v59 = 1;
      v69 = (int)sub_1AD520;
      v68 = (char ***)&off_2DF980;
      v60 = &off_2DF980;
      v58 = &byte_2A5160;
      if ( core::fmt::Formatter::write_fmt(v17, &v58) )
        return 1;
    }
  }
  else
  {
    v61 = 2;
    v63 = 1;
    v62 = &v68;
    v59 = 1;
    v60 = &off_2E04E8;
    v69 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v68 = (char ***)(v9 + 2);
    v58 = (char *)&unk_2A5180;
    if ( core::fmt::Formatter::write_fmt(v16, &v58) )
      return 1;
    if ( *((_BYTE *)v9 + 16) == 1 )
    {
      v55 = v9[3];
      v70 = core::fmt::ArgumentV1::from_usize("\n");
      v68 = (char ***)&v57;
      v61 = 2;
      v63 = 2;
      v59 = 1;
      v69 = (int)sub_1B18C4;
      v60 = &off_2E04F8;
      v62 = &v68;
      v58 = &byte_2A5160;
      if ( core::fmt::Formatter::write_fmt(v55, &v58) )
        return 1;
    }
  }
  if ( v13 != (char *)3 )
  {
    if ( *((_BYTE *)v9 + 16) == 1 )
    {
      v58 = v13;
      v32 = v14;
      v33 = v15;
      v34 = *v12;
      v35 = (char **)v12[1];
      v36 = v12[2];
      v38 = (char ****)v12[3];
      v37 = v12 + 4;
      v59 = v34;
      v60 = v35;
      v61 = v36;
      v62 = v38;
      v39 = v37[1];
      v40 = v37[2];
      v41 = v37[3];
      v42 = v37[4];
      v63 = *v37;
      v64 = v39;
      v65 = v40;
      v66 = v41;
      v67 = v42;
      v15 = v33;
      v30 = v9[3];
      v14 = v32;
      HIDWORD(v70) = 1;
      LODWORD(v70) = &off_2DF980;
      v71 = &v73;
      v72 = 1;
      v68 = 0;
      v74 = <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt;
      v73 = &v58;
LABEL_19:
      if ( !core::fmt::Formatter::write_fmt(v30, &v68) )
        goto LABEL_20;
      return 1;
    }
    if ( !*((_BYTE *)v9 + 16) )
    {
      v58 = v13;
      v19 = v15;
      v20 = *v12;
      v21 = (char **)v12[1];
      v22 = v12[2];
      v24 = (char ****)v12[3];
      v23 = v12 + 4;
      v25 = v14;
      v59 = v20;
      v60 = v21;
      v61 = v22;
      v62 = v24;
      v26 = v23[1];
      v27 = v23[2];
      v28 = v23[3];
      v29 = v23[4];
      v63 = *v23;
      v64 = v26;
      v65 = v27;
      v66 = v28;
      v67 = v29;
      v15 = v19;
      v30 = v9[3];
      v14 = v25;
      HIDWORD(v70) = 1;
      LODWORD(v70) = &off_2DF980;
      v72 = 1;
      v71 = &v73;
      v69 = 1;
      v68 = (char ***)&unk_2A5120;
      v74 = <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt;
      v73 = &v58;
      goto LABEL_19;
    }
  }
  v31 = v9[3];
  v62 = (char ****)aRustc9eb3afe9e;
  v60 = &off_2E0508;
  v61 = 1;
  v63 = 0;
  v58 = 0;
  if ( core::fmt::Formatter::write_fmt(v31, &v58) )
    return 1;
LABEL_20:
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(v9[3], asc_2A57A1, 1) )
    return 1;
  if ( a5 == 1 && v14 != 2 )
  {
    v44 = *((unsigned __int8 *)v9 + 16);
    v75 = a6;
    if ( v44 == 1 )
    {
      v45 = v9[3];
      v46 = core::fmt::ArgumentV1::from_usize("\n");
      v63 = 2;
      v70 = v46;
      v62 = &v68;
      v61 = 1;
      v59 = 1;
      v69 = (int)sub_1AD520;
      v68 = (char ***)&off_2DF980;
      v60 = &off_2DF980;
      v58 = &byte_2A5160;
      if ( core::fmt::Formatter::write_fmt(v45, &v58) )
        return 1;
    }
    v47 = v9[3];
    v61 = 1;
    v60 = &off_2E0510;
    v62 = (char ****)aRustc9eb3afe9e;
    v63 = 0;
    v58 = 0;
    if ( core::fmt::Formatter::write_fmt(v47, &v58) )
      return 1;
    v48 = *v9;
    v49 = v9[1];
    v50 = (char *)v9[3];
    v61 = v56;
    v51 = *(int (__fastcall **)(int))(v49 + 16);
    v60 = v15;
    v59 = v14;
    v58 = v50;
    if ( v51(v48) )
      return 1;
    v52 = v9[3];
    v61 = 1;
    v63 = 1;
    v58 = 0;
    v60 = (char **)&off_2E0518;
    v62 = &v68;
    v68 = (char ***)&v75;
    v69 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    if ( core::fmt::Formatter::write_fmt(v52, &v58) )
      return 1;
    if ( a7 == 1 )
    {
      v73 = a8;
      v53 = v9[3];
      v61 = 1;
      v63 = 1;
      v58 = 0;
      v68 = &v73;
      v60 = (char **)&off_2E0518;
      v62 = &v68;
      v69 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      if ( core::fmt::Formatter::write_fmt(v53, &v58) )
        return 1;
    }
    v54 = v9[3];
    v61 = 1;
    v60 = (char **)&off_2E0520;
    v62 = (char ****)aRustc9eb3afe9e;
    v63 = 0;
    v58 = 0;
    if ( core::fmt::Formatter::write_fmt(v54, &v58) )
      return 1;
  }
LABEL_32:
  *a1 = v11 + 1;
  return 0;
}
