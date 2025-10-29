_DWORD *__fastcall <alloc::string::String as core::convert::From<alloc::boxed::Box<str>>>::from(
        _DWORD *result,
        int a2,
        int a3)
{
  *result = a3;
  result[1] = a2;
  result[2] = a3;
  return result;
}
