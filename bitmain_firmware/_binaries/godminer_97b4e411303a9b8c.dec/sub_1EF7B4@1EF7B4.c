void *sub_1EF7B4()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_30CCE4 <= 0x3FFFFFFF && (dword_30CCE4 & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_30CCE4);
    if ( v0 == dword_30CCE4 )
    {
      if ( !__strex(dword_30CCE4 + 1, (unsigned int *)&dword_30CCE4) )
      {
        __dmb(0xBu);
        return &unk_30CCED;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_30CCE4);
  return &unk_30CCED;
}
