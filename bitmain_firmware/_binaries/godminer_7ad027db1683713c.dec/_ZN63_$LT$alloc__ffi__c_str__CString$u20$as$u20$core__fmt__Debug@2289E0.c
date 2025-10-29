bool __fastcall <alloc::ffi::c_str::CString as core::fmt::Debug>::fmt(int *a1, int *a2)
{
  return <core::ffi::c_str::CStr as core::fmt::Debug>::fmt(*a1, a1[1], a2);
}
