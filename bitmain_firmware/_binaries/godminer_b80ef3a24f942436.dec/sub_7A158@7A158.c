void __fastcall sub_7A158(int a1, _BYTE *a2, size_t a3, const void *a4, size_t n)
{
  void *v7; // r0
  bool v8; // zf
  _BYTE *v9; // r4
  int v10; // r8
  _UNKNOWN **v11; // r0
  _BYTE *v12; // [sp+8h] [bp-1A8h] BYREF
  int v13; // [sp+Ch] [bp-1A4h]
  void *ptr; // [sp+10h] [bp-1A0h]
  _BYTE *v15; // [sp+18h] [bp-198h]
  int v16; // [sp+1Ch] [bp-194h]
  _BYTE dest[388]; // [sp+20h] [bp-190h] BYREF
  _DWORD v18[3]; // [sp+1A4h] [bp-Ch] BYREF

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v12, a2, a3);
  v7 = ptr;
  if ( !ptr )
  {
    v9 = v12;
    v10 = v13;
    v16 = v13;
    v15 = v12;
    if ( n >> 7 > 2 )
    {
      sub_7B2E8(a1, a4, n, v12);
      *v9 = 0;
      if ( !v10 )
        return;
      goto LABEL_6;
    }
    memcpy(dest, a4, n);
    dest[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v18, dest, n + 1);
    if ( v18[0] )
    {
      v11 = &off_2EA14C;
      *(_DWORD *)a1 = dword_2EA158;
    }
    else
    {
      if ( linkat(-100, v9, -100, v18[1], 0) != -1 )
      {
        *(_BYTE *)a1 = 4;
        *v9 = 0;
        if ( !v10 )
          return;
LABEL_6:
        _rust_dealloc(v9);
        return;
      }
      v11 = (_UNKNOWN **)*_errno_location();
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
    }
    *(_DWORD *)(a1 + 4) = v11;
    *v9 = 0;
    if ( !v10 )
      return;
    goto LABEL_6;
  }
  v8 = v13 == 0;
  *(_DWORD *)a1 = dword_2EA158;
  *(_DWORD *)(a1 + 4) = &off_2EA14C;
  if ( !v8 )
    _rust_dealloc(v7);
}
