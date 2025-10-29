int sub_88AEC()
{
  int v0; // r3

  v0 = ++dword_2D2598;
  if ( dword_2D2598 > total_pools )
  {
    add_pool();
    v0 = dword_2D2598;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
