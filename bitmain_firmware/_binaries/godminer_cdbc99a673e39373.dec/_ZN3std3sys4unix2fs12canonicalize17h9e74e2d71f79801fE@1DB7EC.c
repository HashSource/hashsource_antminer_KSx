int __fastcall std::sys::unix::fs::canonicalize(int a1, const void *a2, size_t n)
{
  char v5; // r0
  char *v6; // r6
  int v7; // r0
  int v8; // r1
  size_t v9; // r5
  int v10; // r7
  int result; // r0
  __int16 v12; // r1
  char v13; // r2
  char *v14; // r3
  int v15; // [sp+8h] [bp-198h] BYREF
  char *s; // [sp+Ch] [bp-194h]
  _BYTE dest[388]; // [sp+10h] [bp-190h] BYREF
  _DWORD v18[3]; // [sp+194h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7A010(&v15);
    v5 = v15;
    if ( (unsigned __int8)v15 != 4 )
    {
LABEL_15:
      v12 = *(_WORD *)((char *)&v15 + 1);
      v13 = HIBYTE(v15);
      v14 = s;
      *(_BYTE *)(a1 + 4) = v5;
      *(_BYTE *)(a1 + 7) = v13;
      *(_WORD *)(a1 + 5) = v12;
      *(_DWORD *)(a1 + 8) = v14;
      *(_DWORD *)a1 = 1;
      return 1;
    }
  }
  else
  {
    memcpy(dest, a2, n);
    dest[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v18, dest, n + 1);
    if ( v18[0] )
    {
      s = (char *)&off_2CB14C;
      v5 = dword_2CB158;
      v15 = dword_2CB158;
      if ( (unsigned __int8)dword_2CB158 != 4 )
        goto LABEL_15;
    }
    else
    {
      s = realpath((const char *)v18[1], 0);
    }
  }
  v6 = s;
  if ( s )
  {
    v7 = core::ffi::c_str::CStr::from_ptr::strlen_rt(s);
    v9 = v7;
    if ( v7 )
    {
      if ( v7 <= -1 )
        alloc::raw_vec::capacity_overflow(v7, v8);
      v10 = _rust_alloc(v7);
      if ( !v10 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v10 = 1;
    }
    memcpy((void *)v10, v6, v9);
    free(v6);
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v10;
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
