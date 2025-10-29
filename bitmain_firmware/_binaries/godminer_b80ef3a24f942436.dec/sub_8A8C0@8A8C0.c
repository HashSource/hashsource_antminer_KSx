int sub_8A8C0()
{
  int v0; // r3

  v0 = ++dword_2F2D70;
  if ( dword_2F2D70 > total_pools )
  {
    add_pool();
    v0 = dword_2F2D70;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
