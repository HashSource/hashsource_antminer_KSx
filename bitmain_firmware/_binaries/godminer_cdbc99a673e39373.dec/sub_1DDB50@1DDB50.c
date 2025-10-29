void *sub_1DDB50()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_2EAB64 <= 0x3FFFFFFF && (dword_2EAB64 & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_2EAB64);
    if ( v0 == dword_2EAB64 )
    {
      if ( !__strex(dword_2EAB64 + 1, (unsigned int *)&dword_2EAB64) )
      {
        __dmb(0xBu);
        return &unk_2EAB6D;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_2EAB64);
  return &unk_2EAB6D;
}
