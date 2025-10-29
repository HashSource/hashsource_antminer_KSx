void __fastcall sub_78DD4(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf
  _BYTE *v4; // r5
  int v5; // r6
  _BYTE *v6; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h]
  void *ptr; // [sp+10h] [bp-10h]
  _BYTE *v9; // [sp+18h] [bp-8h]
  int v10; // [sp+1Ch] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v6);
  v2 = ptr;
  if ( ptr )
  {
    v3 = v7 == 0;
    *a1 = dword_2CB158;
    a1[1] = &off_2CB14C;
    if ( !v3 )
      _rust_dealloc(v2);
  }
  else
  {
    v4 = v6;
    v5 = v7;
    v10 = v7;
    v9 = v6;
    sub_1DC214(a1, 0);
    *v4 = 0;
    if ( v5 )
      _rust_dealloc(v4);
  }
}
