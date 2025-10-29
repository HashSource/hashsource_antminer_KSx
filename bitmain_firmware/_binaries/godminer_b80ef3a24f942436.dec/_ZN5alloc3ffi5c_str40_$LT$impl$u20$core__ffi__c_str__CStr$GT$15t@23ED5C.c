void *__fastcall alloc::ffi::c_str::<impl core::ffi::c_str::CStr>::to_string_lossy(_DWORD *a1, int a2, int a3)
{
  return alloc::string::String::from_utf8_lossy(a1, a2, a3 - 1);
}
