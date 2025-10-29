// Alternative name is '_ZN5alloc3ffi5c_str7CString27from_vec_with_nul_unchecked17h48a6590e96a110fcE'
int __fastcall alloc::string::<impl core::convert::From<alloc::string::String> for alloc::boxed::Box<str>>::from(
        int *a1)
{
  int v1; // r1
  int v2; // r2
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v4[2] = a1[2];
  v4[0] = v1;
  v4[1] = v2;
  return sub_23CFF8(v4);
}
