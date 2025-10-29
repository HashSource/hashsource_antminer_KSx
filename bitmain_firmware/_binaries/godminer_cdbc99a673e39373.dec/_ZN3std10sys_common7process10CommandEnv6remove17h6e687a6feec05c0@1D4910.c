void __fastcall std::sys_common::process::CommandEnv::remove(int a1, const void *a2, signed int size)
{
  int v6; // r5
  bool v7; // zf
  _DWORD *v8; // r0
  int v9; // r7
  unsigned __int16 *v10; // r6
  unsigned __int16 *v11; // r10
  int v12; // r9
  int v13; // r8
  size_t v14; // r2
  int v15; // r11
  int v16; // r0
  bool v17; // nf
  int v18; // r11
  int v19; // r0
  unsigned __int16 *v20; // r0
  int i; // r1
  int v22; // r11
  int v23; // r1
  int *v24; // r2
  unsigned int v25; // r0
  int *v26; // r1
  bool v27; // zf
  int v28; // r8
  int *v29; // r0
  int v30; // r7
  int v31; // r1
  void *v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  void *v37; // r6
  void *v38; // r5
  _DWORD *v39; // r3
  int v40; // r6
  void *v41; // r7
  bool v42; // zf
  _DWORD *v43; // [sp+0h] [bp-7Ch]
  int v44; // [sp+4h] [bp-78h]
  _DWORD *v45; // [sp+8h] [bp-74h]
  int v46; // [sp+Ch] [bp-70h]
  char v47; // [sp+1Fh] [bp-5Dh] BYREF
  int v48; // [sp+20h] [bp-5Ch] BYREF
  int v49; // [sp+24h] [bp-58h]
  void *v50; // [sp+28h] [bp-54h]
  int v51; // [sp+2Ch] [bp-50h]
  int v52; // [sp+30h] [bp-4Ch]
  int v53; // [sp+34h] [bp-48h]
  size_t v54; // [sp+38h] [bp-44h] BYREF
  void *v55; // [sp+3Ch] [bp-40h]
  void *ptr; // [sp+40h] [bp-3Ch]
  int v57; // [sp+44h] [bp-38h]
  void *v58; // [sp+48h] [bp-34h]
  int v59; // [sp+4Ch] [bp-30h]
  int *v60; // [sp+54h] [bp-28h]
  unsigned int v61; // [sp+58h] [bp-24h]
  size_t v62; // [sp+60h] [bp-1Ch] BYREF
  void *v63; // [sp+64h] [bp-18h]
  void *v64; // [sp+68h] [bp-14h]
  int v65; // [sp+6Ch] [bp-10h]
  void *v66; // [sp+70h] [bp-Ch]
  int v67; // [sp+74h] [bp-8h]

  if ( size )
  {
    if ( size <= -1 )
      alloc::raw_vec::capacity_overflow(a1, a2);
    v6 = _rust_alloc(size);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v6 = 1;
  }
  memcpy((void *)v6, a2, size);
  v7 = *(_BYTE *)(a1 + 13) == 0;
  if ( !*(_BYTE *)(a1 + 13) )
    v7 = size == 4;
  if ( v7 )
  {
    if ( *(_DWORD *)v6 == 1213481296 )
      *(_BYTE *)(a1 + 13) = 1;
    if ( *(_BYTE *)(a1 + 12) )
      goto LABEL_10;
  }
  else if ( *(_BYTE *)(a1 + 12) )
  {
LABEL_10:
    v8 = *(_DWORD **)(a1 + 4);
    if ( !v8 )
      goto LABEL_56;
    v9 = *(_DWORD *)a1;
    v45 = (_DWORD *)a1;
    v10 = *(unsigned __int16 **)(a1 + 4);
    v43 = v8;
    v44 = v9;
    while ( 2 )
    {
      v11 = v10 + 2;
      v46 = v10[135];
      v12 = 67;
      v13 = 12 * v46;
      do
      {
        if ( !v13 )
        {
          v19 = v46;
          goto LABEL_24;
        }
        v14 = *((_DWORD *)v11 + 2);
        v15 = size - v14;
        if ( size < v14 )
          v14 = size;
        v16 = memcmp((const void *)v6, *((const void **)v11 + 1), v14);
        ++v12;
        if ( v16 )
          v15 = v16;
        v17 = v15 < 0;
        v18 = v15 != 0;
        v13 -= 12;
        v11 += 6;
        if ( v17 )
          v18 = -1;
      }
      while ( v18 == 1 );
      if ( (_BYTE)v18 )
      {
        v19 = v12 - 68;
LABEL_24:
        if ( !v9 )
          goto LABEL_56;
        --v9;
        v10 = *(unsigned __int16 **)&v10[2 * v19 + 136];
        continue;
      }
      break;
    }
    v47 = 0;
    if ( v9 )
    {
      v20 = *(unsigned __int16 **)&v10[2 * v12];
      if ( v9 != 1 )
      {
        for ( i = 1; i != v9; ++i )
          v20 = *(unsigned __int16 **)&v20[2 * v20[135] + 136];
      }
      v22 = v6;
      v23 = v20[135];
      v63 = v20;
      v64 = (void *)(v23 - 1);
      v62 = 0;
      sub_1A4724((int *)&v54, (int *)&v62, &v47);
      v48 = v54;
      v49 = (int)v55;
      v50 = ptr;
      v51 = v57;
      v52 = (int)v58;
      v53 = v59;
      v24 = v60;
      v25 = v61;
      if ( v61 >= *((unsigned __int16 *)v60 + 135) )
      {
        while ( 1 )
        {
          v26 = (int *)*v24;
          if ( !*v24 )
            break;
          v25 = *((unsigned __int16 *)v24 + 134);
          v24 = (int *)*v24;
          if ( v25 < *((unsigned __int16 *)v26 + 135) )
            goto LABEL_45;
        }
        v26 = 0;
      }
      else
      {
        v26 = v60;
      }
LABEL_45:
      v28 = v49;
      v29 = &v26[3 * v25];
      v30 = (int)v50;
      v31 = v29[34];
      v32 = (void *)v29[35];
      v33 = v29[36];
      v62 = v29[1];
      v65 = v31;
      v66 = v32;
      v67 = v33;
      v34 = v51;
      v35 = v52;
      v36 = v53;
      v37 = (void *)v29[2];
      v38 = (void *)v29[3];
      v29[1] = v48;
      v29[2] = v28;
      v29[3] = v30;
      v29 += 34;
      v64 = v38;
      v63 = v37;
      *v29 = v34;
      v29[1] = v35;
      v29[2] = v36;
      v54 = v62;
      v55 = v63;
      ptr = v64;
      v57 = v65;
      v58 = v66;
      v59 = v67;
    }
    else
    {
      v22 = v6;
      v64 = (void *)(v12 - 68);
      v63 = v10;
      v62 = 0;
      sub_1A4724((int *)&v54, (int *)&v62, &v47);
    }
    v62 = v54;
    v63 = v55;
    v64 = ptr;
    v65 = v57;
    v66 = v58;
    v67 = v59;
    v6 = v22;
    v7 = v47 == 0;
    --v45[2];
    if ( !v7 )
    {
      if ( !v44 )
        core::panicking::panic((int)aAssertionFaile_5, 33, (int)&off_2CA438);
      v39 = (_DWORD *)v43[68];
      *v45 = v44 - 1;
      v45[1] = v39;
      *v39 = 0;
      _rust_dealloc(v43);
    }
    if ( !v63 )
      goto LABEL_56;
    v40 = v65;
    v41 = v66;
    if ( v62 )
      _rust_dealloc(v63);
    v42 = v41 == 0;
    if ( v41 )
      v42 = v40 == 0;
    if ( !v42 )
    {
      _rust_dealloc(v41);
      if ( !size )
        return;
    }
    else
    {
LABEL_56:
      if ( !size )
        return;
    }
    _rust_dealloc((void *)v6);
    return;
  }
  v48 = size;
  v49 = v6;
  v50 = (void *)size;
  v63 = 0;
  sub_1A1B70(&v54, (int *)a1, (size_t *)&v48, &v62);
  if ( v54 )
  {
    v27 = ptr == 0;
    if ( ptr )
      v27 = v55 == 0;
    if ( !v27 )
      _rust_dealloc(ptr);
  }
}
