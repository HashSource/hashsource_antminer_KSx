int sub_8C138()
{
  int v0; // r3

  v0 = ++dword_2EA8E8;
  if ( dword_2EA8E8 > total_pools )
  {
    add_pool();
    v0 = dword_2EA8E8;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
