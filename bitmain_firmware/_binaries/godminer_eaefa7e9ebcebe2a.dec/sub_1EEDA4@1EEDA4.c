void *sub_1EEDA4()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_307C94 <= 0x3FFFFFFF && (dword_307C94 & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_307C94);
    if ( v0 == dword_307C94 )
    {
      if ( !__strex(dword_307C94 + 1, (unsigned int *)&dword_307C94) )
      {
        __dmb(0xBu);
        return &unk_307C9D;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_307C94);
  return &unk_307C9D;
}
