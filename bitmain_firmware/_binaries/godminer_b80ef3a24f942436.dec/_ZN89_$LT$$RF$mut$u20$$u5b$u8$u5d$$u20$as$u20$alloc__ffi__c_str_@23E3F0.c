int __fastcall <&mut [u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(
        _DWORD *a1,
        _BYTE *a2,
        size_t a3)
{
  int v3; // r7
  size_t v6; // r5
  void *v7; // r0
  int v8; // r0
  size_t v9; // r1
  unsigned int v10; // r0
  bool v11; // zf
  unsigned int v12; // r0
  int result; // r0
  int v14; // r1
  unsigned int v15; // [sp+4h] [bp-1Ch]
  unsigned int v16; // [sp+8h] [bp-18h]
  unsigned int v17[4]; // [sp+10h] [bp-10h] BYREF

  v3 = a3 + 1;
  if ( a3 == -1 )
    core::panicking::panic((int)aCalledOptionUn_2, 43, (int)&off_2EE7E0);
  if ( v3 <= -1 )
    alloc::raw_vec::capacity_overflow();
  v6 = a3;
  v7 = (void *)_rust_alloc(a3 + 1);
  if ( !v7 )
    alloc::alloc::handle_alloc_error();
  v15 = (unsigned int)v7;
  memcpy(v7, a2, v6);
  v16 = v6;
  if ( v6 >= 8 )
  {
    v8 = core::slice::memchr::memchr_aligned(0, (int)a2, v6);
    v6 = v9;
    goto LABEL_30;
  }
  if ( !v6 )
  {
    v6 = 0;
    v8 = 0;
    goto LABEL_30;
  }
  if ( !*a2 )
  {
    v8 = 1;
    v6 = 0;
    goto LABEL_30;
  }
  if ( v6 == 1 )
    goto LABEL_18;
  v8 = 1;
  if ( !a2[1] )
  {
    v6 = 1;
    goto LABEL_30;
  }
  if ( v6 == 2 )
    goto LABEL_18;
  if ( !a2[2] )
  {
    v6 = 2;
    goto LABEL_30;
  }
  if ( v6 == 3 )
    goto LABEL_18;
  if ( !a2[3] )
  {
    v6 = 3;
    goto LABEL_30;
  }
  if ( v6 == 4 )
    goto LABEL_18;
  if ( !a2[4] )
  {
    v6 = 4;
    goto LABEL_30;
  }
  if ( v6 == 5 )
  {
LABEL_18:
    v8 = 0;
    goto LABEL_30;
  }
  if ( a2[5] )
  {
    if ( v6 == 6 )
      goto LABEL_18;
    v10 = (unsigned __int8)a2[6];
    v11 = v10 == 0;
    v12 = __clz(v10);
    if ( v11 )
      v6 = 6;
    v8 = v12 >> 5;
  }
  else
  {
    v6 = 5;
  }
LABEL_30:
  if ( v8 )
  {
    *a1 = v6;
    a1[1] = v3;
    a1[2] = v15;
    a1[3] = v16;
    return v3;
  }
  else
  {
    v17[0] = v3;
    v17[1] = v15;
    v17[2] = v16;
    result = alloc::ffi::c_str::CString::_from_vec_unchecked(v17);
    *a1 = result;
    a1[1] = v14;
    a1[2] = 0;
  }
  return result;
}
