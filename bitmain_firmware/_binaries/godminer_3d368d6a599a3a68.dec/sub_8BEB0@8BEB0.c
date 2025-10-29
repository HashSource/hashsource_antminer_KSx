int sub_8BEB0()
{
  int v0; // r3

  v0 = ++dword_2E85D8;
  if ( dword_2E85D8 > total_pools )
  {
    add_pool();
    v0 = dword_2E85D8;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
