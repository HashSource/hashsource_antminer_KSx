int __fastcall sub_1ED12C(int a1, int a2, unsigned int *a3)
{
  const char *v3; // r7
  bool v6; // zf
  int v7; // r8
  size_t v8; // r5
  size_t v9; // r4
  size_t v10; // r6
  int v11; // r8
  int v12; // r0
  _DWORD *v13; // r3
  int v14; // r1
  size_t v15; // r2
  int v16; // r7
  int v17; // r5
  int v18; // r7
  int v19; // r0
  int v20; // r7
  unsigned int v21; // r3
  int v22; // r1
  int v23; // r0
  size_t *v24; // r0
  size_t v25; // r6
  int v26; // r7
  size_t v27; // r5
  int v28; // r6
  size_t v29; // r7
  size_t v31; // [sp+0h] [bp-24h]
  int v32; // [sp+4h] [bp-20h]
  size_t v33; // [sp+8h] [bp-1Ch] BYREF
  size_t v34; // [sp+Ch] [bp-18h]
  int v35; // [sp+10h] [bp-14h]
  size_t v36; // [sp+14h] [bp-10h]
  size_t v37; // [sp+18h] [bp-Ch]
  int v38; // [sp+1Ch] [bp-8h]
  size_t v39; // [sp+20h] [bp-4h]

  v3 = *(const char **)(a1 + 4);
  v6 = v3 == 0;
  if ( v3 )
    v6 = *v3 == 0;
  if ( v6 )
  {
    v7 = 1;
    v8 = 0;
    if ( !a3[2] )
    {
      std::env::current_exe((int *)&v33);
      if ( !v33 )
      {
        v9 = v34;
        v7 = v35;
        v8 = v36;
        v10 = *(unsigned __int16 *)(a1 + 12);
        if ( *(_WORD *)(a1 + 12) )
          goto LABEL_7;
        goto LABEL_23;
      }
      if ( (unsigned __int8)v34 == 3 )
      {
        v20 = v35;
        (**(void (__fastcall ***)(_DWORD))(v35 + 4))(*(_DWORD *)v35);
        if ( *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4) )
          _rust_dealloc(*(void **)v20);
        _rust_dealloc((void *)v20);
        v9 = 0;
        v10 = *(unsigned __int16 *)(a1 + 12);
        if ( *(_WORD *)(a1 + 12) )
          goto LABEL_7;
        goto LABEL_23;
      }
    }
    v9 = 0;
    v10 = *(unsigned __int16 *)(a1 + 12);
    if ( *(_WORD *)(a1 + 12) )
      goto LABEL_7;
LABEL_23:
    v15 = 0;
    v12 = 4;
    goto LABEL_24;
  }
  v19 = core::ffi::c_str::CStr::from_ptr::strlen_rt(v3);
  v8 = v19;
  if ( v19 )
  {
    if ( v19 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v7 = _rust_alloc(v19);
    if ( !v7 )
LABEL_14:
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v7 = 1;
  }
  memcpy((void *)v7, v3, v8);
  v9 = v8;
  v10 = *(unsigned __int16 *)(a1 + 12);
  if ( !*(_WORD *)(a1 + 12) )
    goto LABEL_23;
LABEL_7:
  v31 = v8;
  v32 = v7;
  v11 = *(_DWORD *)(a1 + 8);
  v12 = _rust_alloc(8 * v10);
  if ( !v12 )
    goto LABEL_14;
  v13 = (_DWORD *)(v12 + 4);
  v14 = 32 * v10;
  v15 = 0;
  do
  {
    v16 = v11 + 32 * v15;
    v14 -= 32;
    ++v15;
    v17 = *(_DWORD *)(v16 + 8);
    v18 = *(_DWORD *)(v16 + 20);
    *(v13 - 1) = v17;
    *v13 = v18;
    v13 += 2;
  }
  while ( v14 );
  v8 = v31;
  v7 = v32;
LABEL_24:
  v21 = *a3;
  v22 = a3[2];
  v38 = v12;
  v23 = *(_DWORD *)a1;
  v39 = v15;
  v37 = v10;
  v36 = v8;
  v35 = v7;
  v34 = v9;
  v33 = v23;
  if ( v22 == v21 )
  {
    sub_1A3F74(a3, v22);
    v22 = a3[2];
  }
  v24 = (size_t *)(a3[1] + 28 * v22);
  v25 = v34;
  v26 = v35;
  *v24 = v33;
  v24[1] = v25;
  v24[2] = v26;
  v24 += 3;
  v27 = v37;
  v28 = v38;
  v29 = v39;
  *v24 = v36;
  v24[1] = v27;
  v24[2] = v28;
  v24[3] = v29;
  a3[2] = v22 + 1;
  return 0;
}
