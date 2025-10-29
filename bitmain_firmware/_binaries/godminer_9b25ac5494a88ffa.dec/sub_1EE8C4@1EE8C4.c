void *sub_1EE8C4()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_30ACC4 <= 0x3FFFFFFF && (dword_30ACC4 & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_30ACC4);
    if ( v0 == dword_30ACC4 )
    {
      if ( !__strex(dword_30ACC4 + 1, (unsigned int *)&dword_30ACC4) )
      {
        __dmb(0xBu);
        return &unk_30ACCD;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_30ACC4);
  return &unk_30ACCD;
}
