void __fastcall sub_7A824(int a1, int a2, int a3, const void *a4, size_t n)
{
  void *v7; // r0
  bool v8; // zf
  _BYTE *v9; // r4
  int v10; // r8
  _UNKNOWN **v11; // r0
  int v12; // r1
  int *v13; // r0
  _BYTE *v14; // [sp+0h] [bp-1A8h] BYREF
  int v15; // [sp+4h] [bp-1A4h]
  void *ptr; // [sp+8h] [bp-1A0h]
  _BYTE *v17; // [sp+10h] [bp-198h]
  int v18; // [sp+14h] [bp-194h]
  _BYTE dest[388]; // [sp+18h] [bp-190h] BYREF
  _DWORD v20[3]; // [sp+19Ch] [bp-Ch] BYREF

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v14);
  v7 = ptr;
  if ( !ptr )
  {
    v9 = v14;
    v10 = v15;
    v18 = v15;
    v17 = v14;
    if ( n >> 7 <= 2 )
    {
      memcpy(dest, a4, n);
      dest[n] = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(v20, dest, n + 1);
      if ( v20[0] )
      {
        v11 = &off_2E114C;
        v12 = dword_2E1158;
      }
      else
      {
        if ( symlink(v9, (const char *)v20[1]) != -1 )
        {
          *(_BYTE *)a1 = 4;
          *v9 = 0;
          if ( !v10 )
            return;
LABEL_10:
          _rust_dealloc(v9);
          return;
        }
        v13 = _errno_location();
        v12 = 0;
        v11 = (_UNKNOWN **)*v13;
      }
      *(_DWORD *)a1 = v12;
      *(_DWORD *)(a1 + 4) = v11;
    }
    else
    {
      sub_7AB40(a1, a4, n, v14);
    }
    *v9 = 0;
    if ( !v10 )
      return;
    goto LABEL_10;
  }
  v8 = v15 == 0;
  *(_DWORD *)a1 = dword_2E1158;
  *(_DWORD *)(a1 + 4) = &off_2E114C;
  if ( !v8 )
    _rust_dealloc(v7);
}
