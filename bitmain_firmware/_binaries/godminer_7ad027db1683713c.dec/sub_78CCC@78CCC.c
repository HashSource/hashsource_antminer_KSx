void __fastcall sub_78CCC(_DWORD *a1, _BYTE *a2, size_t a3)
{
  int v4; // r2
  void *v5; // r0
  bool v6; // zf
  _BYTE *v7; // r5
  int v8; // r6
  _BYTE *v9; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-14h]
  void *ptr; // [sp+10h] [bp-10h]
  int v12; // [sp+18h] [bp-8h]
  int v13; // [sp+1Ch] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v9, a2, a3);
  v5 = ptr;
  if ( ptr )
  {
    v6 = v10 == 0;
    *a1 = dword_2CA158;
    a1[1] = &off_2CA14C;
    if ( !v6 )
      _rust_dealloc(v5);
  }
  else
  {
    v7 = v9;
    v8 = v10;
    v13 = v10;
    v12 = (int)v9;
    sub_1DB0A4((int)a1, 0, v4, (int)v9);
    *v7 = 0;
    if ( v8 )
      _rust_dealloc(v7);
  }
}
