int __fastcall sub_1D6964(int *a1, int a2, _DWORD *a3, int *a4, int a5, int a6, int a7, char **a8)
{
  int v9; // r6
  bool v10; // zf
  int v11; // r11
  int *v12; // r5
  char *v13; // r10
  int v14; // r4
  int v15; // r7
  int *v16; // r0
  int *v17; // r8
  int v18; // r1
  char **v19; // r0
  char **v20; // r0
  int v21; // r1
  int v22; // r10
  int v23; // r1
  char **v24; // r2
  int v25; // r3
  int *v26; // r5
  int **v27; // r7
  int v28; // r8
  int v29; // r2
  int v30; // r3
  int v31; // r4
  int v32; // r7
  int *v33; // r0
  int *v34; // r0
  int v35; // lr
  int v36; // r8
  int v37; // r2
  char **v38; // r3
  int v39; // r4
  int *v40; // r5
  int **v41; // r7
  int v42; // r2
  int v43; // r3
  int v44; // r4
  int v45; // r7
  int v47; // r1
  int *v48; // r5
  int v49; // r1
  char **v50; // r0
  int *v51; // r0
  int v52; // r0
  int v53; // r2
  char *v54; // r1
  int (__fastcall *v55)(int); // r3
  int *v56; // r0
  int *v57; // r0
  int *v58; // r0
  int *v59; // [sp+4h] [bp-58h]
  int v60; // [sp+8h] [bp-54h]
  int v61; // [sp+Ch] [bp-50h] BYREF
  char *v62; // [sp+10h] [bp-4Ch] BYREF
  int v63; // [sp+14h] [bp-48h]
  char **v64; // [sp+18h] [bp-44h]
  int v65; // [sp+1Ch] [bp-40h]
  int **v66; // [sp+20h] [bp-3Ch]
  int v67; // [sp+24h] [bp-38h]
  int v68; // [sp+28h] [bp-34h]
  int v69; // [sp+2Ch] [bp-30h]
  int v70; // [sp+30h] [bp-2Ch]
  int v71; // [sp+34h] [bp-28h]
  int *v72; // [sp+38h] [bp-24h] BYREF
  int v73; // [sp+3Ch] [bp-20h]
  char **v74; // [sp+40h] [bp-1Ch]
  int v75; // [sp+44h] [bp-18h]
  char ***v76; // [sp+48h] [bp-14h]
  int v77; // [sp+4Ch] [bp-10h]
  char **v78; // [sp+50h] [bp-Ch] BYREF
  int (__fastcall *v79)(_DWORD *, int *); // [sp+54h] [bp-8h]
  int v80; // [sp+58h] [bp-4h] BYREF

  v9 = a1[1];
  v10 = a2 == 0;
  v60 = a4[2];
  v11 = *a1;
  v12 = a3 + 1;
  v13 = (char *)*a3;
  if ( !a2 )
    v10 = *(_BYTE *)(v9 + 16) == 0;
  v14 = *a4;
  v15 = a4[1];
  v61 = a2;
  if ( v10 )
    goto LABEL_32;
  v16 = *(int **)(v9 + 12);
  if ( v11 )
  {
    v64 = &off_2CA4E0;
    v65 = 1;
    v67 = 0;
    v62 = 0;
    v66 = (int **)aRustc9eb3afe9e;
    if ( core::fmt::Formatter::write_fmt(v16, (int *)&v62) )
      return 1;
    if ( *(_BYTE *)(v9 + 16) == 1 )
    {
      v17 = *(int **)(v9 + 12);
      core::fmt::ArgumentV1::from_usize();
      v75 = v18;
      v67 = 2;
      v74 = v19;
      v66 = &v72;
      v65 = 1;
      v63 = 1;
      v73 = (int)sub_19A74C;
      v72 = (int *)&off_2C9980;
      v64 = &off_2C9980;
      v62 = &byte_28F810;
      if ( core::fmt::Formatter::write_fmt(v17, (int *)&v62) )
        return 1;
    }
  }
  else
  {
    v65 = 2;
    v67 = 1;
    v66 = &v72;
    v63 = 1;
    v64 = &off_2CA4E8;
    v73 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v72 = (int *)(v9 + 8);
    v62 = (char *)&unk_28F830;
    if ( core::fmt::Formatter::write_fmt(v16, (int *)&v62) )
      return 1;
    if ( *(_BYTE *)(v9 + 16) == 1 )
    {
      v59 = *(int **)(v9 + 12);
      core::fmt::ArgumentV1::from_usize();
      v74 = v20;
      v72 = &v61;
      v65 = 2;
      v67 = 2;
      v75 = v21;
      v63 = 1;
      v73 = (int)sub_19EAF0;
      v64 = &off_2CA4F8;
      v66 = &v72;
      v62 = &byte_28F810;
      if ( core::fmt::Formatter::write_fmt(v59, (int *)&v62) )
        return 1;
    }
  }
  if ( v13 != (char *)3 )
  {
    if ( *(_BYTE *)(v9 + 16) == 1 )
    {
      v62 = v13;
      v35 = v14;
      v36 = v15;
      v37 = *v12;
      v38 = (char **)v12[1];
      v39 = v12[2];
      v41 = (int **)v12[3];
      v40 = v12 + 4;
      v63 = v37;
      v64 = v38;
      v65 = v39;
      v66 = v41;
      v42 = v40[1];
      v43 = v40[2];
      v44 = v40[3];
      v45 = v40[4];
      v67 = *v40;
      v68 = v42;
      v69 = v43;
      v70 = v44;
      v71 = v45;
      v15 = v36;
      v33 = *(int **)(v9 + 12);
      v14 = v35;
      v75 = 1;
      v74 = &off_2C9980;
      v76 = &v78;
      v77 = 1;
      v72 = 0;
      v79 = <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt;
      v78 = &v62;
LABEL_19:
      if ( !core::fmt::Formatter::write_fmt(v33, (int *)&v72) )
        goto LABEL_20;
      return 1;
    }
    if ( !*(_BYTE *)(v9 + 16) )
    {
      v62 = v13;
      v22 = v15;
      v23 = *v12;
      v24 = (char **)v12[1];
      v25 = v12[2];
      v27 = (int **)v12[3];
      v26 = v12 + 4;
      v28 = v14;
      v63 = v23;
      v64 = v24;
      v65 = v25;
      v66 = v27;
      v29 = v26[1];
      v30 = v26[2];
      v31 = v26[3];
      v32 = v26[4];
      v67 = *v26;
      v68 = v29;
      v69 = v30;
      v70 = v31;
      v71 = v32;
      v15 = v22;
      v33 = *(int **)(v9 + 12);
      v14 = v28;
      v75 = 1;
      v74 = &off_2C9980;
      v77 = 1;
      v76 = &v78;
      v73 = 1;
      v72 = (int *)&unk_28F7D0;
      v79 = <std::backtrace_rs::symbolize::SymbolName as core::fmt::Display>::fmt;
      v78 = &v62;
      goto LABEL_19;
    }
  }
  v34 = *(int **)(v9 + 12);
  v66 = (int **)aRustc9eb3afe9e;
  v64 = &off_2CA508;
  v65 = 1;
  v67 = 0;
  v62 = 0;
  if ( core::fmt::Formatter::write_fmt(v34, (int *)&v62) )
    return 1;
LABEL_20:
  if ( <core::fmt::Formatter as core::fmt::Write>::write_str(*(_DWORD **)(v9 + 12)) )
    return 1;
  if ( a5 == 1 && v14 != 2 )
  {
    v47 = *(unsigned __int8 *)(v9 + 16);
    v80 = a6;
    if ( v47 == 1 )
    {
      v48 = *(int **)(v9 + 12);
      core::fmt::ArgumentV1::from_usize();
      v75 = v49;
      v67 = 2;
      v74 = v50;
      v66 = &v72;
      v65 = 1;
      v63 = 1;
      v73 = (int)sub_19A74C;
      v72 = (int *)&off_2C9980;
      v64 = &off_2C9980;
      v62 = &byte_28F810;
      if ( core::fmt::Formatter::write_fmt(v48, (int *)&v62) )
        return 1;
    }
    v51 = *(int **)(v9 + 12);
    v65 = 1;
    v64 = &off_2CA510;
    v66 = (int **)aRustc9eb3afe9e;
    v67 = 0;
    v62 = 0;
    if ( core::fmt::Formatter::write_fmt(v51, (int *)&v62) )
      return 1;
    v52 = *(_DWORD *)v9;
    v53 = *(_DWORD *)(v9 + 4);
    v54 = *(char **)(v9 + 12);
    v65 = v60;
    v55 = *(int (__fastcall **)(int))(v53 + 16);
    v64 = (char **)v15;
    v63 = v14;
    v62 = v54;
    if ( v55(v52) )
      return 1;
    v56 = *(int **)(v9 + 12);
    v65 = 1;
    v67 = 1;
    v62 = 0;
    v64 = (char **)&off_2CA518;
    v66 = &v72;
    v72 = &v80;
    v73 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    if ( core::fmt::Formatter::write_fmt(v56, (int *)&v62) )
      return 1;
    if ( a7 == 1 )
    {
      v78 = a8;
      v57 = *(int **)(v9 + 12);
      v65 = 1;
      v67 = 1;
      v62 = 0;
      v72 = (int *)&v78;
      v64 = (char **)&off_2CA518;
      v66 = &v72;
      v73 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      if ( core::fmt::Formatter::write_fmt(v57, (int *)&v62) )
        return 1;
    }
    v58 = *(int **)(v9 + 12);
    v65 = 1;
    v64 = (char **)&off_2CA520;
    v66 = (int **)aRustc9eb3afe9e;
    v67 = 0;
    v62 = 0;
    if ( core::fmt::Formatter::write_fmt(v58, (int *)&v62) )
      return 1;
  }
LABEL_32:
  *a1 = v11 + 1;
  return 0;
}
