_DWORD *__fastcall std::ffi::os_str::OsStr::into_os_string(_DWORD *result, int a2, int a3)
{
  *result = a3;
  result[1] = a2;
  result[2] = a3;
  return result;
}
