int __fastcall core::num::flt2dec::strategy::grisu::max_pow10_no_more_than(unsigned int a1)
{
  int result; // r0

  if ( a1 >= 0x2710 )
  {
    if ( a1 >= 0xF4240 )
    {
      if ( a1 >= 0x5F5E100 )
      {
        result = 9;
        if ( a1 < 0x3B9ACA00 )
          return 8;
      }
      else
      {
        result = 7;
        if ( a1 < 0x989680 )
          return 6;
      }
    }
    else
    {
      result = 5;
      if ( a1 < (unsigned int)&elf_hash_chain[4398] )
        return 4;
    }
  }
  else if ( a1 >= 0x64 )
  {
    result = 3;
    if ( a1 < 0x3E8 )
      return 2;
  }
  else
  {
    return a1 > 9;
  }
  return result;
}
