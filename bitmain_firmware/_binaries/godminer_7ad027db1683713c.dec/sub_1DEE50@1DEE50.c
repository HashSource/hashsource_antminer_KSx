__int64 __fastcall sub_1DEE50(_BYTE *a1, size_t a2, _BYTE *a3)
{
  void *v4; // r3
  int v5; // r5
  __int64 v6; // kr00_8
  __int64 v7; // r4
  __int64 v9; // [sp+8h] [bp-40h] BYREF
  void *v10; // [sp+10h] [bp-38h]
  int v11; // [sp+14h] [bp-34h]
  __int64 v12; // [sp+18h] [bp-30h]
  void *ptr; // [sp+20h] [bp-28h]
  int v14; // [sp+24h] [bp-24h]
  __int64 v15; // [sp+28h] [bp-20h] BYREF
  int v16; // [sp+30h] [bp-18h]
  int v17; // [sp+34h] [bp-14h]
  __int64 v18; // [sp+38h] [bp-10h] BYREF
  int v19; // [sp+40h] [bp-8h]
  int v20; // [sp+44h] [bp-4h]

  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v9, a1, a2);
  if ( !v10 )
    return v9;
  v6 = v9;
  v4 = v10;
  v5 = v11;
  *a3 = 1;
  v12 = v6;
  ptr = v4;
  v14 = v5;
  <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v15, aStringWithNul, 0x11u);
  if ( v16 )
  {
    v20 = v17;
    v18 = v15;
    v19 = v16;
    core::result::unwrap_failed((int)&unk_28F6DA, 43, (int)&v18, (int)&off_2C9348, (int)&off_2CA928);
  }
  v7 = v15;
  if ( HIDWORD(v12) )
    _rust_dealloc(ptr);
  return v7;
}
