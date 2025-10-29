_DWORD *__fastcall <&std::fs::File as std::sys::unix::kernel_copy::CopyWrite>::properties(_DWORD *result, _DWORD **a2)
{
  _DWORD *v2; // r1

  v2 = *a2;
  *result = 1;
  result[1] = *v2;
  result[2] = 4;
  result[3] = 0;
  return result;
}
