unsigned int __fastcall std::fs::read_to_string::inner(int a1, const void *a2, size_t n)
{
  int v5; // r5
  unsigned int v6; // r0
  int v7; // r6
  signed int v8; // r6
  int v9; // r0
  int v10; // r2
  unsigned int result; // r0
  __int16 v12; // r2
  char v13; // r3
  bool v14; // zf
  int v15; // r7
  unsigned int v16; // r1
  int v17; // [sp+4h] [bp-1ACh] BYREF
  int v18; // [sp+8h] [bp-1A8h] BYREF
  int v19; // [sp+Ch] [bp-1A4h]
  int v20; // [sp+10h] [bp-1A0h]
  __int16 v21; // [sp+14h] [bp-19Ch]
  int v22; // [sp+18h] [bp-198h] BYREF
  _UNKNOWN **v23; // [sp+1Ch] [bp-194h]
  unsigned __int64 dest; // [sp+20h] [bp-190h] BYREF
  int v25; // [sp+28h] [bp-188h] BYREF
  int v26; // [sp+2Ch] [bp-184h]
  signed int v27; // [sp+A0h] [bp-110h]
  _DWORD v28[3]; // [sp+1A4h] [bp-Ch] BYREF

  v19 = 438;
  v20 = 1;
  v21 = 0;
  v18 = 0;
  if ( n >> 7 > 2 )
  {
    sub_7B538(&v22, (int)a2, n, (int)&v18);
    if ( (unsigned __int8)v22 != 4 )
      goto LABEL_8;
LABEL_6:
    v5 = (int)v23;
    goto LABEL_9;
  }
  memcpy(&dest, a2, n);
  *((_BYTE *)&dest + n) = 0;
  core::ffi::c_str::CStr::from_bytes_with_nul(v28, &dest, n + 1);
  if ( !v28[0] )
  {
    sub_1EC04C(&v22, v28[1], v28[2], &v18);
    if ( (unsigned __int8)v22 != 4 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v22 = dword_2E0158;
  v23 = &off_2E014C;
  if ( (unsigned __int8)dword_2E0158 == 4 )
    goto LABEL_6;
LABEL_8:
  v6 = v22;
  v5 = (int)v23;
  if ( (unsigned __int8)v22 != 4 )
  {
    *(_BYTE *)(a1 + 4) = v22;
    *(_DWORD *)a1 = 1;
    v16 = HIBYTE(v6);
    result = v6 >> 8;
    *(_DWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 7) = v16;
    *(_WORD *)(a1 + 5) = result;
    return result;
  }
LABEL_9:
  v17 = v5;
  std::fs::File::metadata(&dest, &v17);
  if ( dest == 2 )
  {
    if ( (unsigned __int8)v25 == 3 )
    {
      v7 = v26;
      (**(void (__fastcall ***)(_DWORD))(v26 + 4))(*(_DWORD *)v26);
      if ( *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4) )
        _rust_dealloc(*(void **)v7);
      _rust_dealloc((void *)v7);
    }
  }
  else
  {
    v8 = v27;
    if ( v27 )
    {
      if ( v27 <= -1 )
        alloc::raw_vec::capacity_overflow(&v25, dest ^ 2 | HIDWORD(dest));
      v9 = _rust_alloc(v27);
      if ( !v9 )
        alloc::alloc::handle_alloc_error();
      goto LABEL_19;
    }
  }
  v9 = 1;
  v8 = 0;
LABEL_19:
  v25 = 0;
  dest = __PAIR64__(v9, v8);
  sub_1D6C44(&v18, v5, &dest);
  if ( (unsigned __int8)v18 == 4 )
  {
    *(_DWORD *)a1 = 0;
    v10 = v25;
    *(_QWORD *)(a1 + 4) = dest;
    *(_DWORD *)(a1 + 12) = v10;
    return close(v5);
  }
  v12 = *(_WORD *)((char *)&v18 + 1);
  v13 = HIBYTE(v18);
  v14 = (_DWORD)dest == 0;
  v15 = v19;
  *(_BYTE *)(a1 + 4) = v18;
  LOWORD(v28[0]) = v12;
  BYTE2(v28[0]) = v13;
  *(_BYTE *)(a1 + 7) = v13;
  *(_WORD *)(a1 + 5) = v12;
  *(_DWORD *)(a1 + 8) = v15;
  *(_DWORD *)a1 = 1;
  if ( v14 )
    return close(v5);
  _rust_dealloc((void *)HIDWORD(dest));
  return close(v5);
}
