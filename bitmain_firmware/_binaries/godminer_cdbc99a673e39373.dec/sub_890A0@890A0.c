int sub_890A0()
{
  int v0; // r3

  v0 = ++dword_2D3A88;
  if ( dword_2D3A88 > total_pools )
  {
    add_pool();
    v0 = dword_2D3A88;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
