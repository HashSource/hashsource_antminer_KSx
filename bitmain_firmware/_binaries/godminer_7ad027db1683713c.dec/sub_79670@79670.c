void __fastcall sub_79670(_DWORD *a1, _BYTE *a2, size_t a3)
{
  void *v4; // r0
  bool v5; // zf
  char *v6; // r5
  int v7; // r6
  char *v8; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+4h] [bp-14h]
  void *ptr; // [sp+8h] [bp-10h]
  char *v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v8, a2, a3);
  v4 = ptr;
  if ( ptr )
  {
    v5 = v9 == 0;
    *a1 = dword_2CA158;
    a1[1] = &off_2CA14C;
    if ( !v5 )
      _rust_dealloc(v4);
  }
  else
  {
    v6 = v8;
    v7 = v9;
    v12 = v9;
    v11 = v8;
    sub_1DCBC8(a1, v8);
    *v6 = 0;
    if ( v7 )
      _rust_dealloc(v6);
  }
}
