void *__fastcall std::sys::unix::os_str::Slice::to_string_lossy(_DWORD *a1, int a2, signed int a3)
{
  return alloc::string::String::from_utf8_lossy(a1, a2, a3);
}
