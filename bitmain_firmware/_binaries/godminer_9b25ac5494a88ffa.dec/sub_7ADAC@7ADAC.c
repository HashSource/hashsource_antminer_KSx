void __fastcall sub_7ADAC(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf
  char *v4; // r5
  int v5; // r6
  char *v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]
  void *ptr; // [sp+8h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v6);
  v2 = ptr;
  if ( ptr )
  {
    v3 = v7 == 0;
    *a1 = dword_2DE158;
    a1[1] = &off_2DE14C;
    if ( !v3 )
      _rust_dealloc(v2);
  }
  else
  {
    v4 = v6;
    v5 = v7;
    a1[1] = chdir(v6);
    *(_BYTE *)a1 = 4;
    *v4 = 0;
    if ( v5 )
      _rust_dealloc(v4);
  }
}
