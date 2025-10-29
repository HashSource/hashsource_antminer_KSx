void __fastcall sub_7A7BC(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf
  _BYTE *v4; // r5
  int v5; // r6
  _BYTE *v6; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+4h] [bp-14h]
  void *ptr; // [sp+8h] [bp-10h]
  _BYTE *v9; // [sp+10h] [bp-8h]
  int v10; // [sp+14h] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v6);
  v2 = ptr;
  if ( ptr )
  {
    v3 = v7 == 0;
    *a1 = 1;
    a1[1] = dword_2DF158;
    a1[2] = &off_2DF14C;
    if ( !v3 )
      _rust_dealloc(v2);
  }
  else
  {
    v4 = v6;
    v5 = v7;
    v10 = v7;
    v9 = v6;
    sub_1EC258(a1, v6);
    *v4 = 0;
    if ( v5 )
      _rust_dealloc(v4);
  }
}
