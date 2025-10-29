void *sub_1F29E0()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_31244C <= 0x3FFFFFFF && (dword_31244C & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_31244C);
    if ( v0 == dword_31244C )
    {
      if ( !__strex(dword_31244C + 1, (unsigned int *)&dword_31244C) )
      {
        __dmb(0xBu);
        return &unk_312455;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_31244C);
  return &unk_312455;
}
