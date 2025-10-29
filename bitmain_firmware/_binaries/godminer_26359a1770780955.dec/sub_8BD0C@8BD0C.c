int sub_8BD0C()
{
  int v0; // r3

  v0 = ++dword_2E85D0;
  if ( dword_2E85D0 > total_pools )
  {
    add_pool();
    v0 = dword_2E85D0;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
