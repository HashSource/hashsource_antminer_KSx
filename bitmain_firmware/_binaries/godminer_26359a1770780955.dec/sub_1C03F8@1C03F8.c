void __fastcall sub_1C03F8(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // r1
  int v10; // r1
  const void *v11; // r4
  size_t v12; // r7
  int v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r3
  int v16; // r2
  char v17; // r0
  __int64 v18; // kr00_8
  void *v19; // r6
  size_t v20; // r2
  void *v21; // r1
  bool v22; // zf
  char v23; // r0
  __int64 v24; // kr08_8
  void *v25; // r5
  size_t v26; // r2
  void *v27; // r1
  bool v28; // zf
  void *v29; // r1
  size_t v30; // r2
  char v31; // r1
  __int16 v32; // r2
  int v33; // r7
  int v34; // r6
  int v35; // r3
  __int16 v36; // r2
  int v37; // r5
  int v38; // r6
  size_t v39; // [sp+8h] [bp-8Ch] BYREF
  void *ptr; // [sp+Ch] [bp-88h]
  size_t v41; // [sp+10h] [bp-84h]
  __int64 v42; // [sp+18h] [bp-7Ch] BYREF
  size_t v43; // [sp+20h] [bp-74h]
  size_t v44; // [sp+24h] [bp-70h]
  __int16 v45; // [sp+2Ch] [bp-68h]
  char v46; // [sp+2Eh] [bp-66h]
  __int64 v47; // [sp+30h] [bp-64h]
  size_t v48; // [sp+38h] [bp-5Ch]
  size_t v49; // [sp+3Ch] [bp-58h]
  __int64 v50; // [sp+40h] [bp-54h]
  size_t v51; // [sp+48h] [bp-4Ch]
  size_t v52; // [sp+4Ch] [bp-48h]
  int v53; // [sp+58h] [bp-3Ch] BYREF
  const void *v54; // [sp+5Ch] [bp-38h]
  signed int v55; // [sp+60h] [bp-34h]
  size_t v56; // [sp+64h] [bp-30h]
  char v57; // [sp+70h] [bp-24h] BYREF
  __int16 v58; // [sp+71h] [bp-23h]
  char v59; // [sp+73h] [bp-21h]
  int v60; // [sp+74h] [bp-20h]
  int v61; // [sp+78h] [bp-1Ch]
  int v62; // [sp+7Ch] [bp-18h]
  __int64 v63; // [sp+80h] [bp-14h] BYREF
  size_t size; // [sp+88h] [bp-Ch]
  size_t v65; // [sp+8Ch] [bp-8h]

  v6 = *(_DWORD *)(a2 + 120);
  if ( v6 )
  {
    alloc::string::String::from_utf8_lossy(&v53, v6, *(_DWORD *)(a2 + 124));
    v11 = v54;
    v12 = v55;
    if ( v53 )
    {
      ptr = (void *)v55;
      v12 = (size_t)v54;
      v41 = v56;
      v39 = (size_t)v54;
      goto LABEL_12;
    }
    if ( v55 )
    {
      if ( v55 <= -1 )
        alloc::raw_vec::capacity_overflow(0, v10);
      v13 = _rust_alloc(v55);
      if ( !v13 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v13 = 1;
    }
    memcpy((void *)v13, v11, v12);
    v41 = v12;
    ptr = (void *)v13;
  }
  else
  {
    v12 = 0;
    v41 = 0;
    ptr = (void *)1;
  }
  v39 = v12;
LABEL_12:
  v14 = *(_DWORD *)(a3 + 32);
  if ( *(unsigned __int16 *)(a4 + 142) >= 5u )
  {
    if ( *(_DWORD *)(a4 + 112) <= v14 )
      goto LABEL_28;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    if ( --v14 >= *(_DWORD *)(a4 + 112) )
      goto LABEL_28;
LABEL_17:
    sub_1BD2B8((int)&v42, (_DWORD *)(*(_DWORD *)(a4 + 108) + 16 * v14));
    if ( v42 == 46 )
      goto LABEL_28;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)a4 )
    goto LABEL_28;
  v43 = *(_DWORD *)a4;
  v42 = 31;
  v44 = *(_DWORD *)(a4 + 4);
LABEL_21:
  v15 = *(_DWORD *)(a2 + 312);
  v16 = *(unsigned __int8 *)(a2 + 89);
  v63 = v42;
  size = v43;
  v65 = v44;
  sub_1BAB5C((int)&v57, a5, v16, v15, &v63);
  v17 = v57;
  if ( v57 != 75 )
  {
    v35 = v60;
    v36 = v58;
    v37 = v62;
    v38 = v61;
    v46 = v59;
    v45 = v58;
    *(_BYTE *)(a1 + 3) = v59;
    *(_WORD *)(a1 + 1) = v36;
    *(_DWORD *)(a1 + 4) = v35;
    *(_DWORD *)(a1 + 8) = v38;
    *(_DWORD *)(a1 + 12) = v37;
    *(_BYTE *)a1 = v17;
    if ( !v12 )
      return;
LABEL_37:
    _rust_dealloc(ptr);
    return;
  }
  alloc::string::String::from_utf8_lossy(&v63, v60, v61);
  v18 = v63;
  v19 = (void *)size;
  v20 = v65;
  v56 = v65;
  v50 = v63;
  v51 = size;
  v52 = v65;
  v48 = size;
  v47 = v63;
  v49 = v65;
  v21 = (void *)size;
  if ( !(_DWORD)v63 )
  {
    v21 = (void *)HIDWORD(v63);
    v20 = size;
  }
  addr2line::path_push((int)&v39, v21, v20);
  v22 = (_DWORD)v18 == 0;
  if ( (_DWORD)v18 )
    v22 = HIDWORD(v18) == 0;
  if ( !v22 )
    _rust_dealloc(v19);
LABEL_28:
  sub_1BD2B8((int)&v63, (_DWORD *)(a3 + 16));
  sub_1BAB5C((int)&v57, a5, *(unsigned __int8 *)(a2 + 89), *(_DWORD *)(a2 + 312), &v63);
  v23 = v57;
  if ( v57 != 75 )
  {
    v31 = v59;
    v32 = v58;
    v33 = v61;
    v34 = v62;
    *(_DWORD *)(a1 + 4) = v60;
    *(_DWORD *)(a1 + 8) = v33;
    BYTE2(v42) = v31;
    LOWORD(v42) = v32;
    *(_BYTE *)(a1 + 3) = v31;
    *(_WORD *)(a1 + 1) = v32;
    *(_DWORD *)(a1 + 12) = v34;
    *(_BYTE *)a1 = v23;
    if ( !v39 )
      return;
    goto LABEL_37;
  }
  alloc::string::String::from_utf8_lossy(&v63, v60, v61);
  v24 = v63;
  v25 = (void *)size;
  v26 = v65;
  v56 = v65;
  v50 = v63;
  v51 = size;
  v52 = v65;
  v48 = size;
  v47 = v63;
  v49 = v65;
  v27 = (void *)size;
  if ( !(_DWORD)v63 )
  {
    v27 = (void *)HIDWORD(v63);
    v26 = size;
  }
  addr2line::path_push((int)&v39, v27, v26);
  v28 = (_DWORD)v24 == 0;
  if ( (_DWORD)v24 )
    v28 = HIDWORD(v24) == 0;
  if ( !v28 )
    _rust_dealloc(v25);
  v29 = ptr;
  v30 = v41;
  *(_DWORD *)(a1 + 4) = v39;
  *(_DWORD *)(a1 + 8) = v29;
  *(_DWORD *)(a1 + 12) = v30;
  *(_BYTE *)a1 = 75;
}
