int __fastcall <std::backtrace::Backtrace as core::fmt::Display>::fmt(_DWORD *a1, int a2)
{
  int v3; // r0
  int v6; // r0
  _DWORD *v7; // r6
  unsigned int v8; // r7
  char v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r1
  int v12; // r1
  int v13; // r0
  int v14; // r8
  unsigned int v15; // r10
  bool v16; // zf
  _DWORD *v17; // r11
  int *v18; // r7
  int *v19; // r5
  int v20; // r9
  int v21; // r0
  int *v22; // r1
  int *v23; // r2
  int v24; // r0
  unsigned int v25; // r1
  int v26; // r0
  void **v27; // r5
  void *v28; // r0
  void **v29; // r5
  void *v30; // r0
  int v31; // [sp+4h] [bp-D8h]
  int v32; // [sp+Ch] [bp-D0h]
  _DWORD *v33; // [sp+20h] [bp-BCh]
  _DWORD *v34; // [sp+2Ch] [bp-B0h]
  int v35; // [sp+30h] [bp-ACh]
  int v36; // [sp+34h] [bp-A8h]
  _DWORD v37[4]; // [sp+38h] [bp-A4h] BYREF
  int v38; // [sp+48h] [bp-94h] BYREF
  int v39; // [sp+4Ch] [bp-90h]
  void *ptr; // [sp+50h] [bp-8Ch]
  int v41; // [sp+54h] [bp-88h]
  char v42; // [sp+58h] [bp-84h]
  _DWORD v43[4]; // [sp+5Ch] [bp-80h] BYREF
  char v44; // [sp+6Ch] [bp-70h]
  int v45; // [sp+70h] [bp-6Ch] BYREF
  _DWORD *v46; // [sp+74h] [bp-68h]
  int *v47[10]; // [sp+78h] [bp-64h] BYREF
  int *v48; // [sp+A0h] [bp-3Ch] BYREF
  int *v49; // [sp+A4h] [bp-38h]
  int *v50; // [sp+A8h] [bp-34h]
  int *v51; // [sp+ACh] [bp-30h]
  int *v52; // [sp+B0h] [bp-2Ch]
  int *v53; // [sp+B4h] [bp-28h]
  int *v54; // [sp+B8h] [bp-24h]
  int v55; // [sp+BCh] [bp-20h] BYREF
  int *v56; // [sp+C0h] [bp-1Ch]
  int *v57; // [sp+C4h] [bp-18h]
  int *v58; // [sp+C8h] [bp-14h]
  int *v59; // [sp+CCh] [bp-10h]
  int *v60; // [sp+D0h] [bp-Ch]
  int *v61; // [sp+D4h] [bp-8h]
  int *v62; // [sp+D8h] [bp-4h]

  v3 = *a1;
  if ( !v3 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aUnsupportedBac, 21);
  if ( v3 == 1 )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aDisabledBacktr, 18);
  v6 = a1[1];
  __dmb(0xBu);
  if ( v6 == 4 )
  {
    if ( core::fmt::Formatter::alternate(a2) )
    {
LABEL_7:
      v7 = (_DWORD *)a1[4];
      v8 = a1[5];
      v9 = 1;
      goto LABEL_11;
    }
  }
  else
  {
    v47[0] = &v55;
    v55 = (int)(a1 + 1);
    sub_7C0E8(a1 + 1, v47);
    if ( core::fmt::Formatter::alternate(a2) )
      goto LABEL_7;
  }
  v10 = a1[2];
  v11 = a1[5];
  if ( v11 < v10 )
    core::slice::index::slice_start_index_len_fail();
  v8 = v11 - v10;
  v12 = a1[4];
  v9 = 0;
  v7 = (_DWORD *)(v12 + 28 * v10);
LABEL_11:
  std::env::current_dir(v37);
  v41 = v37[3];
  v43[3] = a2;
  v43[2] = 0;
  v42 = v9;
  v38 = v37[0];
  v39 = v37[1];
  ptr = (void *)v37[2];
  v44 = v9;
  v43[1] = &off_2DE840;
  v43[0] = &v38;
  if ( !v8 )
  {
LABEL_35:
    if ( v38 )
    {
      if ( (unsigned __int8)v39 == 3 )
      {
        v27 = (void **)ptr;
        (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
        if ( *((_DWORD *)v27[1] + 1) )
          _rust_dealloc(*v27);
        v28 = ptr;
        goto LABEL_51;
      }
    }
    else if ( v39 )
    {
      v28 = ptr;
LABEL_51:
      _rust_dealloc(v28);
    }
    return 0;
  }
  v33 = &v7[7 * v8];
  while ( 1 )
  {
    v13 = v7[6];
    if ( v13 )
    {
      v14 = 0;
      v35 = 44 * v13;
      v36 = v7[5];
      v34 = v7;
      while ( 1 )
      {
        v15 = v7[1];
        v16 = *v7 == 0;
        v46 = v43;
        v45 = 0;
        if ( v16 )
        {
          v47[0] = 0;
          Unwind_VRS_Get(v15, 0, 15, 0, v47);
          v15 = (int)v47[0] & 0xFFFFFFFE;
        }
        v17 = (_DWORD *)(v36 + v14);
        v18 = *(int **)(v36 + v14 + 36);
        if ( v18 )
        {
          v19 = (int *)v17[10];
          core::str::converts::from_utf8(&v55, *(_DWORD *)(v36 + v14 + 36));
          v20 = 2;
          if ( !v55 )
          {
            if ( v56 )
            {
              rustc_demangle::try_demangle(&v55, v56, v57);
              if ( v55 != 2 )
              {
                v20 = v55;
                v48 = v56;
                v49 = v57;
                v50 = v58;
                v51 = v59;
                v52 = v60;
                v53 = v61;
                v54 = v62;
              }
            }
          }
          v47[1] = v48;
          v47[2] = v49;
          v47[3] = v50;
          v47[4] = v51;
          v47[5] = v52;
          v47[6] = v53;
          v47[7] = v54;
          v7 = v34;
          v47[9] = v19;
          v47[8] = v18;
          v47[0] = (int *)v20;
          v21 = *(_DWORD *)(v36 + v14);
          if ( v21 != 2 )
          {
LABEL_26:
            v22 = (int *)v17[2];
            v23 = (int *)v17[3];
            v55 = v21;
            v56 = v22;
            v57 = v23;
            goto LABEL_27;
          }
        }
        else
        {
          v47[0] = (int *)3;
          v21 = *(_DWORD *)(v36 + v14);
          if ( v21 != 2 )
            goto LABEL_26;
        }
        v55 = 2;
LABEL_27:
        v24 = sub_1E8D28(&v45, v15, v47, &v55, v17[4], v17[5], v17[6], v17[7]);
        ++v46[2];
        if ( v24 )
          goto LABEL_40;
        v14 += 44;
        if ( v35 == v14 )
          goto LABEL_34;
      }
    }
    v25 = v7[1];
    v16 = *v7 == 0;
    v49 = v43;
    v48 = 0;
    if ( v16 )
    {
      v47[0] = 0;
      Unwind_VRS_Get(v25, 0, 15, 0, v47);
      v25 = (int)v47[0] & 0xFFFFFFFE;
    }
    v47[0] = (int *)3;
    v55 = 2;
    v26 = sub_1E8D28(&v48, v25, v47, &v55, 0, v31, 0, v32);
    ++v49[2];
    if ( v26 )
      break;
LABEL_34:
    v7 += 7;
    if ( v7 == v33 )
      goto LABEL_35;
  }
LABEL_40:
  if ( v38 )
  {
    if ( (unsigned __int8)v39 == 3 )
    {
      v29 = (void **)ptr;
      (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
      if ( *((_DWORD *)v29[1] + 1) )
        _rust_dealloc(*v29);
      v30 = ptr;
LABEL_47:
      _rust_dealloc(v30);
    }
  }
  else if ( v39 )
  {
    v30 = ptr;
    goto LABEL_47;
  }
  return 1;
}
