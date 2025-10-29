void __fastcall sub_7B6C0(_DWORD *a1, _BYTE *a2, size_t a3)
{
  void *v4; // r0
  bool v5; // zf
  char *v6; // r5
  int v7; // r6
  char *v8; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v8, a2, a3);
  v4 = ptr;
  if ( ptr )
  {
    v5 = v9 == 0;
    *a1 = dword_2EA158;
    a1[1] = &off_2EA14C;
    if ( !v5 )
      _rust_dealloc(v4);
  }
  else
  {
    v6 = v8;
    v7 = v9;
    a1[1] = realpath(v8, 0);
    *(_BYTE *)a1 = 4;
    *v6 = 0;
    if ( v7 )
      _rust_dealloc(v6);
  }
}
