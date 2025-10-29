unsigned int __fastcall std::io::buffered::bufwriter::BufWriter<W>::flush_buf::BufGuard::remaining(unsigned int *a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r2
  unsigned int v4; // r1

  v2 = *a1;
  v3 = a1[1];
  v4 = *(_DWORD *)(v3 + 8);
  if ( v4 < v2 )
    core::slice::index::slice_start_index_len_fail(v2, v4, (int)&off_2C9970);
  return *(_DWORD *)(v3 + 4) + v2;
}
