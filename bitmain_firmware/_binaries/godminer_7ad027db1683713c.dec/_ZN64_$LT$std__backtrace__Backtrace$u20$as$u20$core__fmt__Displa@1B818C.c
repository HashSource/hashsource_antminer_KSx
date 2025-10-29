int __fastcall <std::backtrace::Backtrace as core::fmt::Display>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v5; // r0
  _DWORD *v6; // r6
  unsigned int v7; // r7
  char v8; // r5
  unsigned int v9; // r0
  unsigned int v10; // r1
  int v11; // r1
  int v12; // r0
  int v13; // r8
  unsigned int v14; // r10
  bool v15; // zf
  int v16; // r11
  int *v17; // r7
  int *v18; // r5
  int v19; // r9
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r0
  unsigned int v24; // r1
  int v25; // r0
  void **v26; // r5
  void *v27; // r0
  void **v28; // r5
  void *v29; // r0
  int v30; // [sp+4h] [bp-D8h]
  char **v31; // [sp+Ch] [bp-D0h]
  _DWORD *v32; // [sp+20h] [bp-BCh]
  _DWORD *v33; // [sp+2Ch] [bp-B0h]
  int v34; // [sp+30h] [bp-ACh]
  int v35; // [sp+34h] [bp-A8h]
  _DWORD v36[4]; // [sp+38h] [bp-A4h] BYREF
  int v37; // [sp+48h] [bp-94h] BYREF
  int v38; // [sp+4Ch] [bp-90h]
  void *ptr; // [sp+50h] [bp-8Ch]
  int v40; // [sp+54h] [bp-88h]
  char v41; // [sp+58h] [bp-84h]
  _DWORD v42[4]; // [sp+5Ch] [bp-80h] BYREF
  char v43; // [sp+6Ch] [bp-70h]
  int v44; // [sp+70h] [bp-6Ch] BYREF
  _DWORD *v45; // [sp+74h] [bp-68h]
  int *v46[10]; // [sp+78h] [bp-64h] BYREF
  int *v47; // [sp+A0h] [bp-3Ch] BYREF
  int *v48; // [sp+A4h] [bp-38h]
  int *v49; // [sp+A8h] [bp-34h]
  int *v50; // [sp+ACh] [bp-30h]
  int *v51; // [sp+B0h] [bp-2Ch]
  int *v52; // [sp+B4h] [bp-28h]
  int *v53; // [sp+B8h] [bp-24h]
  int v54; // [sp+BCh] [bp-20h] BYREF
  int *v55; // [sp+C0h] [bp-1Ch]
  int *v56; // [sp+C4h] [bp-18h]
  int *v57; // [sp+C8h] [bp-14h]
  int *v58; // [sp+CCh] [bp-10h]
  int *v59; // [sp+D0h] [bp-Ch]
  int *v60; // [sp+D4h] [bp-8h]
  int *v61; // [sp+D8h] [bp-4h]

  if ( *a1 <= 1u )
    return <core::fmt::Formatter as core::fmt::Write>::write_str(a2);
  v5 = a1[1];
  __dmb(0xBu);
  if ( v5 == 4 )
  {
    if ( core::fmt::Formatter::alternate((int)a2) )
    {
LABEL_5:
      v6 = (_DWORD *)a1[4];
      v7 = a1[5];
      v8 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    v46[0] = &v54;
    v54 = (int)(a1 + 1);
    sub_7A6C8(a1 + 1, v46);
    if ( core::fmt::Formatter::alternate((int)a2) )
      goto LABEL_5;
  }
  v9 = a1[2];
  v10 = a1[5];
  if ( v10 < v9 )
    core::slice::index::slice_start_index_len_fail(v9, v10, (int)&off_2C9830);
  v7 = v10 - v9;
  v11 = a1[4];
  v8 = 0;
  v6 = (_DWORD *)(v11 + 28 * v9);
LABEL_9:
  std::env::current_dir(v36);
  v40 = v36[3];
  v42[3] = a2;
  v42[2] = 0;
  v41 = v8;
  v37 = v36[0];
  v38 = v36[1];
  ptr = (void *)v36[2];
  v43 = v8;
  v42[1] = &off_2C9840;
  v42[0] = &v37;
  if ( !v7 )
  {
LABEL_33:
    if ( v37 )
    {
      if ( (unsigned __int8)v38 == 3 )
      {
        v26 = (void **)ptr;
        (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
        if ( *((_DWORD *)v26[1] + 1) )
          _rust_dealloc(*v26);
        v27 = ptr;
        goto LABEL_49;
      }
    }
    else if ( v38 )
    {
      v27 = ptr;
LABEL_49:
      _rust_dealloc(v27);
    }
    return 0;
  }
  v32 = &v6[7 * v7];
  while ( 1 )
  {
    v12 = v6[6];
    if ( v12 )
    {
      v13 = 0;
      v34 = 44 * v12;
      v35 = v6[5];
      v33 = v6;
      while ( 1 )
      {
        v14 = v6[1];
        v15 = *v6 == 0;
        v45 = v42;
        v44 = 0;
        if ( v15 )
        {
          v46[0] = 0;
          Unwind_VRS_Get(v14, 0, 15, 0, v46);
          v14 = (int)v46[0] & 0xFFFFFFFE;
        }
        v16 = v35 + v13;
        v17 = *(int **)(v35 + v13 + 36);
        if ( v17 )
        {
          v18 = *(int **)(v16 + 40);
          core::str::converts::from_utf8((int)&v54, *(_DWORD *)(v35 + v13 + 36), (unsigned int)v18);
          v19 = 2;
          if ( !v54 )
          {
            if ( v55 )
            {
              rustc_demangle::try_demangle(&v54, (int)v55, (int)v56);
              if ( v54 != 2 )
              {
                v19 = v54;
                v47 = v55;
                v48 = v56;
                v49 = v57;
                v50 = v58;
                v51 = v59;
                v52 = v60;
                v53 = v61;
              }
            }
          }
          v46[1] = v47;
          v46[2] = v48;
          v46[3] = v49;
          v46[4] = v50;
          v46[5] = v51;
          v46[6] = v52;
          v46[7] = v53;
          v6 = v33;
          v46[9] = v18;
          v46[8] = v17;
          v46[0] = (int *)v19;
          v20 = *(_DWORD *)(v35 + v13);
          if ( v20 != 2 )
          {
LABEL_24:
            v21 = *(_DWORD *)(v16 + 8);
            v22 = *(_DWORD *)(v16 + 12);
            v54 = v20;
            v55 = (int *)v21;
            v56 = (int *)v22;
            goto LABEL_25;
          }
        }
        else
        {
          v46[0] = (int *)3;
          v20 = *(_DWORD *)(v35 + v13);
          if ( v20 != 2 )
            goto LABEL_24;
        }
        v54 = 2;
LABEL_25:
        v23 = sub_1D6964(
                &v44,
                v14,
                v46,
                &v54,
                *(_DWORD *)(v16 + 16),
                *(_DWORD *)(v16 + 20),
                *(_DWORD *)(v16 + 24),
                *(char ***)(v16 + 28));
        ++v45[2];
        if ( v23 )
          goto LABEL_38;
        v13 += 44;
        if ( v34 == v13 )
          goto LABEL_32;
      }
    }
    v24 = v6[1];
    v15 = *v6 == 0;
    v48 = v42;
    v47 = 0;
    if ( v15 )
    {
      v46[0] = 0;
      Unwind_VRS_Get(v24, 0, 15, 0, v46);
      v24 = (int)v46[0] & 0xFFFFFFFE;
    }
    v46[0] = (int *)3;
    v54 = 2;
    v25 = sub_1D6964((int *)&v47, v24, v46, &v54, 0, v30, 0, v31);
    ++v48[2];
    if ( v25 )
      break;
LABEL_32:
    v6 += 7;
    if ( v6 == v32 )
      goto LABEL_33;
  }
LABEL_38:
  if ( v37 )
  {
    if ( (unsigned __int8)v38 == 3 )
    {
      v28 = (void **)ptr;
      (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
      if ( *((_DWORD *)v28[1] + 1) )
        _rust_dealloc(*v28);
      v29 = ptr;
LABEL_45:
      _rust_dealloc(v29);
    }
  }
  else if ( v38 )
  {
    v29 = ptr;
    goto LABEL_45;
  }
  return 1;
}
