__int64 __fastcall object::read::coff::section::<impl object::pe::ImageSectionHeader>::raw_name(unsigned int a1)
{
  __int64 v1; // r4
  unsigned int v2; // r1

  v1 = a1 | 0x800000000LL;
  if ( memchr::memchr::fallback::memchr(0, a1, 8) )
  {
    if ( v2 >= 9 )
      core::slice::index::slice_end_index_len_fail(v2, 8, (int)&off_2CB268);
    HIDWORD(v1) = v2;
  }
  return v1;
}
