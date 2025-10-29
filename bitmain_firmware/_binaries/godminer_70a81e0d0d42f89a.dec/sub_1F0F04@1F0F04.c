void *sub_1F0F04()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_30DFFC <= 0x3FFFFFFF && (dword_30DFFC & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_30DFFC);
    if ( v0 == dword_30DFFC )
    {
      if ( !__strex(dword_30DFFC + 1, (unsigned int *)&dword_30DFFC) )
      {
        __dmb(0xBu);
        return &unk_30E005;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_30DFFC);
  return &unk_30E005;
}
