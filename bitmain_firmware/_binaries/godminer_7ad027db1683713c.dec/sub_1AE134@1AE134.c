void __fastcall sub_1AE134(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // r1
  const void *v10; // r4
  size_t v11; // r7
  int v12; // r5
  unsigned int v13; // r0
  unsigned int v14; // r3
  int v15; // r2
  char v16; // r0
  __int64 v17; // kr00_8
  void *v18; // r6
  size_t v19; // r2
  unsigned __int8 *v20; // r1
  bool v21; // zf
  char v22; // r0
  __int64 v23; // kr08_8
  void *v24; // r5
  size_t v25; // r2
  unsigned __int8 *v26; // r1
  bool v27; // zf
  void *v28; // r1
  size_t v29; // r2
  char v30; // r1
  __int16 v31; // r2
  signed int v32; // r7
  int v33; // r6
  int v34; // r3
  __int16 v35; // r2
  int v36; // r5
  signed int v37; // r6
  size_t v38; // [sp+8h] [bp-8Ch] BYREF
  void *ptr; // [sp+Ch] [bp-88h]
  size_t v40; // [sp+10h] [bp-84h]
  __int64 v41; // [sp+18h] [bp-7Ch] BYREF
  size_t v42; // [sp+20h] [bp-74h]
  size_t v43; // [sp+24h] [bp-70h]
  __int16 v44; // [sp+2Ch] [bp-68h]
  char v45; // [sp+2Eh] [bp-66h]
  __int64 v46; // [sp+30h] [bp-64h]
  size_t v47; // [sp+38h] [bp-5Ch]
  size_t v48; // [sp+3Ch] [bp-58h]
  __int64 v49; // [sp+40h] [bp-54h]
  size_t v50; // [sp+48h] [bp-4Ch]
  size_t v51; // [sp+4Ch] [bp-48h]
  int v52; // [sp+58h] [bp-3Ch] BYREF
  const void *v53; // [sp+5Ch] [bp-38h]
  signed int v54; // [sp+60h] [bp-34h]
  size_t v55; // [sp+64h] [bp-30h]
  char v56; // [sp+70h] [bp-24h] BYREF
  __int16 v57; // [sp+71h] [bp-23h]
  char v58; // [sp+73h] [bp-21h]
  int v59; // [sp+74h] [bp-20h]
  signed int v60; // [sp+78h] [bp-1Ch]
  int v61; // [sp+7Ch] [bp-18h]
  __int64 v62; // [sp+80h] [bp-14h] BYREF
  size_t size; // [sp+88h] [bp-Ch]
  size_t v64; // [sp+8Ch] [bp-8h]

  v6 = *(_DWORD *)(a2 + 120);
  if ( v6 )
  {
    alloc::string::String::from_utf8_lossy(&v52, v6, *(_DWORD *)(a2 + 124));
    v10 = v53;
    v11 = v54;
    if ( v52 )
    {
      ptr = (void *)v54;
      v11 = (size_t)v53;
      v40 = v55;
      v38 = (size_t)v53;
      goto LABEL_12;
    }
    if ( v54 )
    {
      if ( v54 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v12 = _rust_alloc(v54);
      if ( !v12 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v12 = 1;
    }
    memcpy((void *)v12, v10, v11);
    v40 = v11;
    ptr = (void *)v12;
  }
  else
  {
    v11 = 0;
    v40 = 0;
    ptr = (void *)1;
  }
  v38 = v11;
LABEL_12:
  v13 = *(_DWORD *)(a3 + 32);
  if ( *(unsigned __int16 *)(a4 + 142) >= 5u )
  {
    if ( *(_DWORD *)(a4 + 112) <= v13 )
      goto LABEL_28;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    if ( --v13 >= *(_DWORD *)(a4 + 112) )
      goto LABEL_28;
LABEL_17:
    sub_1AAFF4((int)&v41, (_DWORD *)(*(_DWORD *)(a4 + 108) + 16 * v13));
    if ( v41 == 46 )
      goto LABEL_28;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)a4 )
    goto LABEL_28;
  v42 = *(_DWORD *)a4;
  v41 = 31;
  v43 = *(_DWORD *)(a4 + 4);
LABEL_21:
  v14 = *(_DWORD *)(a2 + 312);
  v15 = *(unsigned __int8 *)(a2 + 89);
  v62 = v41;
  size = v42;
  v64 = v43;
  sub_1A8898((int)&v56, a5, v15, v14, &v62);
  v16 = v56;
  if ( v56 != 75 )
  {
    v34 = v59;
    v35 = v57;
    v36 = v61;
    v37 = v60;
    v45 = v58;
    v44 = v57;
    *(_BYTE *)(a1 + 3) = v58;
    *(_WORD *)(a1 + 1) = v35;
    *(_DWORD *)(a1 + 4) = v34;
    *(_DWORD *)(a1 + 8) = v37;
    *(_DWORD *)(a1 + 12) = v36;
    *(_BYTE *)a1 = v16;
    if ( !v11 )
      return;
LABEL_37:
    _rust_dealloc(ptr);
    return;
  }
  alloc::string::String::from_utf8_lossy(&v62, v59, v60);
  v17 = v62;
  v18 = (void *)size;
  v19 = v64;
  v55 = v64;
  v49 = v62;
  v50 = size;
  v51 = v64;
  v47 = size;
  v46 = v62;
  v48 = v64;
  v20 = (unsigned __int8 *)size;
  if ( !(_DWORD)v62 )
  {
    v20 = (unsigned __int8 *)HIDWORD(v62);
    v19 = size;
  }
  addr2line::path_push((int)&v38, v20, v19);
  v21 = (_DWORD)v17 == 0;
  if ( (_DWORD)v17 )
    v21 = HIDWORD(v17) == 0;
  if ( !v21 )
    _rust_dealloc(v18);
LABEL_28:
  sub_1AAFF4((int)&v62, (_DWORD *)(a3 + 16));
  sub_1A8898((int)&v56, a5, *(unsigned __int8 *)(a2 + 89), *(_DWORD *)(a2 + 312), &v62);
  v22 = v56;
  if ( v56 != 75 )
  {
    v30 = v58;
    v31 = v57;
    v32 = v60;
    v33 = v61;
    *(_DWORD *)(a1 + 4) = v59;
    *(_DWORD *)(a1 + 8) = v32;
    BYTE2(v41) = v30;
    LOWORD(v41) = v31;
    *(_BYTE *)(a1 + 3) = v30;
    *(_WORD *)(a1 + 1) = v31;
    *(_DWORD *)(a1 + 12) = v33;
    *(_BYTE *)a1 = v22;
    if ( !v38 )
      return;
    goto LABEL_37;
  }
  alloc::string::String::from_utf8_lossy(&v62, v59, v60);
  v23 = v62;
  v24 = (void *)size;
  v25 = v64;
  v55 = v64;
  v49 = v62;
  v50 = size;
  v51 = v64;
  v47 = size;
  v46 = v62;
  v48 = v64;
  v26 = (unsigned __int8 *)size;
  if ( !(_DWORD)v62 )
  {
    v26 = (unsigned __int8 *)HIDWORD(v62);
    v25 = size;
  }
  addr2line::path_push((int)&v38, v26, v25);
  v27 = (_DWORD)v23 == 0;
  if ( (_DWORD)v23 )
    v27 = HIDWORD(v23) == 0;
  if ( !v27 )
    _rust_dealloc(v24);
  v28 = ptr;
  v29 = v40;
  *(_DWORD *)(a1 + 4) = v38;
  *(_DWORD *)(a1 + 8) = v28;
  *(_DWORD *)(a1 + 12) = v29;
  *(_BYTE *)a1 = 75;
}
