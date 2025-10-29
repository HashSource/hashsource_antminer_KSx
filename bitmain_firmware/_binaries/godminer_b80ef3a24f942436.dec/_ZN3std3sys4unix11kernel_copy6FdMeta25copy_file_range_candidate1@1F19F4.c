unsigned int __fastcall std::sys::unix::kernel_copy::FdMeta::copy_file_range_candidate(int a1)
{
  unsigned __int64 v1; // r4
  unsigned int result; // r0
  int v4; // r2
  __int64 v5; // r2
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0

  v1 = *(_QWORD *)a1;
  result = 0;
  v4 = v1 > 1;
  if ( v1 > 1 )
    v4 = v1 - 1;
  if ( v4 == 3 )
    return 1;
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a1 + 128);
    v6 = (*(_DWORD *)(a1 + 96) & 0xF000) - 0x8000;
    v7 = v5 | HIDWORD(v5);
    v8 = __clz(v6);
    if ( v5 )
      v7 = 1;
    return (v8 >> 5) & v7;
  }
  return result;
}
