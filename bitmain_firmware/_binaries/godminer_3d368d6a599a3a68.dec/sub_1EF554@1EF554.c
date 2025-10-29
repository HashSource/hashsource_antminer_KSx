void *sub_1EF554()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_307C9C <= 0x3FFFFFFF && (dword_307C9C & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_307C9C);
    if ( v0 == dword_307C9C )
    {
      if ( !__strex(dword_307C9C + 1, (unsigned int *)&dword_307C9C) )
      {
        __dmb(0xBu);
        return &unk_307CA5;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_307C9C);
  return &unk_307CA5;
}
