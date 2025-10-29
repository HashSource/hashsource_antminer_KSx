void __fastcall sub_7B498(int a1, int a2, int a3, int a4)
{
  void *v6; // r0
  bool v7; // zf
  _BYTE *v8; // r5
  int v9; // r6
  int v10; // r0
  _BYTE *v11; // [sp+8h] [bp-10h] BYREF
  int v12; // [sp+Ch] [bp-Ch]
  void *ptr; // [sp+10h] [bp-8h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v11);
  v6 = ptr;
  if ( !ptr )
  {
    v8 = v11;
    v9 = v12;
    if ( linkat(-100, a4, -100, v11, 0) == -1 )
    {
      v10 = *_errno_location();
      *(_BYTE *)(a1 + 3) = 0;
      *(_WORD *)(a1 + 1) = 0;
      *(_BYTE *)a1 = 0;
      *(_DWORD *)(a1 + 4) = v10;
      *v8 = 0;
      if ( !v9 )
        return;
    }
    else
    {
      *(_BYTE *)a1 = 4;
      *v8 = 0;
      if ( !v9 )
        return;
    }
    _rust_dealloc(v8);
    return;
  }
  v7 = v12 == 0;
  *(_DWORD *)a1 = dword_2DE158;
  *(_DWORD *)(a1 + 4) = &off_2DE14C;
  if ( !v7 )
    _rust_dealloc(v6);
}
