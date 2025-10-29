int __fastcall std::sys::unix::fs::canonicalize(int a1, _BYTE *a2, size_t n)
{
  char v5; // r0
  char *v6; // r6
  int v7; // r0
  size_t v8; // r5
  int v9; // r7
  int result; // r0
  __int16 v11; // r1
  char v12; // r2
  char *v13; // r3
  int v14; // [sp+8h] [bp-198h] BYREF
  char *s; // [sp+Ch] [bp-194h]
  _BYTE dest[388]; // [sp+10h] [bp-190h] BYREF
  _DWORD v17[3]; // [sp+194h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_79F08(&v14, a2, n);
    v5 = v14;
    if ( (unsigned __int8)v14 != 4 )
    {
LABEL_15:
      v11 = *(_WORD *)((char *)&v14 + 1);
      v12 = HIBYTE(v14);
      v13 = s;
      *(_BYTE *)(a1 + 4) = v5;
      *(_BYTE *)(a1 + 7) = v12;
      *(_WORD *)(a1 + 5) = v11;
      *(_DWORD *)(a1 + 8) = v13;
      *(_DWORD *)a1 = 1;
      return 1;
    }
  }
  else
  {
    memcpy(dest, a2, n);
    dest[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v17, dest, n + 1);
    if ( v17[0] )
    {
      s = (char *)&off_2CA14C;
      v5 = dword_2CA158;
      v14 = dword_2CA158;
      if ( (unsigned __int8)dword_2CA158 != 4 )
        goto LABEL_15;
    }
    else
    {
      s = realpath((const char *)v17[1], 0);
    }
  }
  v6 = s;
  if ( s )
  {
    v7 = core::ffi::c_str::CStr::from_ptr::strlen_rt(s);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v9 = _rust_alloc(v7);
      if ( !v9 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v9 = 1;
    }
    memcpy((void *)v9, v6, v8);
    free(v6);
    *(_DWORD *)(a1 + 12) = v8;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v8;
    *(_DWORD *)(a1 + 8) = v9;
    return 0;
  }
  else
  {
    result = *_errno_location();
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
