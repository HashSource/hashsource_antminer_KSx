int sub_8BEE0()
{
  int v0; // r3

  v0 = ++dword_2E95E0;
  if ( dword_2E95E0 > total_pools )
  {
    add_pool();
    v0 = dword_2E95E0;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
