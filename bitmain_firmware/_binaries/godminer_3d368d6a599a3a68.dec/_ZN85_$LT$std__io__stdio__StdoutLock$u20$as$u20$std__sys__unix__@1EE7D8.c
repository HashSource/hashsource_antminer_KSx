_DWORD *__fastcall <std::io::stdio::StdoutLock as std::sys::unix::kernel_copy::CopyWrite>::properties(_DWORD *result)
{
  *result = 1;
  result[1] = 1;
  result[2] = 4;
  result[3] = 0;
  return result;
}
