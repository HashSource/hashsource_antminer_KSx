// Alternative name is '_ZN3std2io8buffered9bufwriter14WriterPanicked10into_inner17h111dc7ab4eecd4d7E'
_DWORD *__fastcall <std::sys::unix::os_str::Buf as std::sys_common::IntoInner<alloc::vec::Vec<u8>>>::into_inner(
        _DWORD *result,
        int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  *result = v2;
  result[1] = v3;
  result[2] = v4;
  return result;
}
