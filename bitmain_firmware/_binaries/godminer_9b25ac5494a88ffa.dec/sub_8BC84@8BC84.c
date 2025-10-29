int sub_8BC84()
{
  int v0; // r3

  v0 = ++dword_2E75C8;
  if ( dword_2E75C8 > total_pools )
  {
    add_pool();
    v0 = dword_2E75C8;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
