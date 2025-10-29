int __fastcall <std::ffi::os_str::OsString as core::fmt::Write>::write_str(size_t *a1, void *src, size_t n)
{
  int v4; // r7

  v4 = a1[2];
  if ( *a1 - v4 < n )
  {
    sub_79740(a1, v4, n);
    v4 = a1[2];
  }
  memcpy((void *)(a1[1] + v4), src, n);
  a1[2] = v4 + n;
  return 0;
}
