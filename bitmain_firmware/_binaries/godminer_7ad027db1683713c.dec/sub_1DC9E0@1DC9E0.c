void *sub_1DC9E0()
{
  unsigned int v0; // r2

  if ( (unsigned int)dword_2E966C <= 0x3FFFFFFF && (dword_2E966C & 0x3FFFFFFE) != 0x3FFFFFFE )
  {
    v0 = __ldrex((unsigned int *)&dword_2E966C);
    if ( v0 == dword_2E966C )
    {
      if ( !__strex(dword_2E966C + 1, (unsigned int *)&dword_2E966C) )
      {
        __dmb(0xBu);
        return &unk_2E9675;
      }
    }
    else
    {
      __clrex();
    }
  }
  std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_2E966C);
  return &unk_2E9675;
}
