unsigned __int8 *__fastcall core::slice::ascii::<impl [u8]>::trim_ascii_start(unsigned __int8 *result, int a2)
{
  unsigned __int8 *v2; // r12
  unsigned int v3; // r3

  if ( a2 )
  {
    v2 = &result[a2];
    while ( 1 )
    {
      v3 = *result - 9;
      if ( v3 > 0x17 || ((1 << v3) & 0x80001B) == 0 )
        break;
      ++result;
      if ( !--a2 )
        return v2;
    }
  }
  return result;
}
