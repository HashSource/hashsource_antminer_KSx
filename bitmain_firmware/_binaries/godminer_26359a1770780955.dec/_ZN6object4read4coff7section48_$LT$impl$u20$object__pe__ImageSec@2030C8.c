int __fastcall object::read::coff::section::<impl object::pe::ImageSectionHeader>::kind(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = *(_DWORD *)(a1 + 36);
  result = 1;
  if ( (v1 & 0x20000020) == 0 )
  {
    if ( (v1 & 0x40) != 0 )
    {
      result = 11;
      if ( (v1 & 0x2000000) == 0 )
      {
        result = 2;
        if ( v1 > -1 )
          return 3;
      }
    }
    else
    {
      result = 5;
      if ( (v1 & 0x80) == 0 )
        return (v1 << 22 >> 31) & 0xD;
    }
  }
  return result;
}
