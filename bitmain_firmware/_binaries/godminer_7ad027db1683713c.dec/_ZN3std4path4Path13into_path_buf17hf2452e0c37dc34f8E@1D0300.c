_DWORD *__fastcall std::path::Path::into_path_buf(_DWORD *result, int a2, int a3)
{
  *result = a3;
  result[1] = a2;
  result[2] = a3;
  return result;
}
