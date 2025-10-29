int __fastcall std::sys::unix::os_str::Buf::push_slice(size_t *a1, void *src, size_t n)
{
  int v4; // r7

  v4 = a1[2];
  if ( *a1 - v4 < n )
  {
    sub_797F8(a1, v4, n);
    v4 = a1[2];
  }
  memcpy((void *)(a1[1] + v4), src, n);
  a1[2] = v4 + n;
  return v4 + n;
}
