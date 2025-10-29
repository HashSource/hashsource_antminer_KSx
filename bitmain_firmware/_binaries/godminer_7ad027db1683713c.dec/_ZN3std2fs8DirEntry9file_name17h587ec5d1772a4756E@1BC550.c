void *__fastcall std::fs::DirEntry::file_name(int *a1, int a2)
{
  __int64 v2; // r8
  int v3; // r4
  int v5; // r6
  void *result; // r0

  v2 = *(_QWORD *)(a2 + 16);
  v3 = HIDWORD(v2) - 1;
  if ( HIDWORD(v2) == 1 )
  {
    v5 = 1;
  }
  else
  {
    if ( v3 <= -1 )
      alloc::raw_vec::capacity_overflow();
    v5 = _rust_alloc(HIDWORD(v2) - 1);
    if ( !v5 )
      alloc::alloc::handle_alloc_error();
  }
  result = memcpy((void *)v5, (const void *)v2, HIDWORD(v2) - 1);
  *a1 = v3;
  a1[1] = v5;
  a1[2] = v3;
  return result;
}
