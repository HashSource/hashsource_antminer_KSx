void __fastcall sub_7B7C4(_DWORD *a1, int a2, int a3, const void *a4, size_t n)
{
  void *v7; // r0
  bool v8; // zf
  char *v9; // r4
  int v10; // r8
  char *v11; // [sp+0h] [bp-1A8h] BYREF
  int v12; // [sp+4h] [bp-1A4h]
  void *ptr; // [sp+8h] [bp-1A0h]
  char *v14; // [sp+10h] [bp-198h]
  int v15; // [sp+14h] [bp-194h]
  _BYTE dest[388]; // [sp+18h] [bp-190h] BYREF
  _DWORD v17[3]; // [sp+19Ch] [bp-Ch] BYREF

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v11);
  v7 = ptr;
  if ( !ptr )
  {
    v9 = v11;
    v10 = v12;
    v15 = v12;
    v14 = v11;
    if ( n >> 7 <= 2 )
    {
      memcpy(dest, a4, n);
      dest[n] = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(v17, dest, n + 1);
      if ( v17[0] )
      {
        *a1 = dword_2DF158;
        a1[1] = &off_2DF14C;
        *v9 = 0;
        if ( !v10 )
          return;
LABEL_7:
        _rust_dealloc(v9);
        return;
      }
      sub_1EEE1C((int)a1, v9, (char *)v17[1]);
    }
    else
    {
      sub_7AD98(a1, (int)a4, n, v11);
    }
    *v9 = 0;
    if ( !v10 )
      return;
    goto LABEL_7;
  }
  v8 = v12 == 0;
  *a1 = dword_2DF158;
  a1[1] = &off_2DF14C;
  if ( !v8 )
    _rust_dealloc(v7);
}
