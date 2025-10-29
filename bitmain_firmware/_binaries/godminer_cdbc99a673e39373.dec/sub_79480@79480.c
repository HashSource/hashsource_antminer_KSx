void __fastcall sub_79480(_DWORD *a1, int a2, int a3, char *a4)
{
  void *v6; // r0
  bool v7; // zf
  char *v8; // r6
  int v9; // r7
  char *v10; // [sp+0h] [bp-18h] BYREF
  int v11; // [sp+4h] [bp-14h]
  void *ptr; // [sp+8h] [bp-10h]
  char *v13; // [sp+10h] [bp-8h]
  int v14; // [sp+14h] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v10);
  v6 = ptr;
  if ( ptr )
  {
    v7 = v11 == 0;
    *a1 = dword_2CB158;
    a1[1] = &off_2CB14C;
    if ( !v7 )
      _rust_dealloc(v6);
  }
  else
  {
    v8 = v10;
    v9 = v11;
    v14 = v11;
    v13 = v10;
    sub_1DDBC8((int)a1, a4, v10);
    *v8 = 0;
    if ( v9 )
      _rust_dealloc(v8);
  }
}
