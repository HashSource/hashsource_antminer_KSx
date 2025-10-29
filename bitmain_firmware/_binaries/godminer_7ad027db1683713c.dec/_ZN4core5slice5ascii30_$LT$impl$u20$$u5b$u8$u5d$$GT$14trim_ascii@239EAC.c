int __fastcall core::slice::ascii::<impl [u8]>::trim_ascii_end(int result, int a2)
{
  unsigned int v2; // r3

  for ( ; a2; --a2 )
  {
    v2 = *(unsigned __int8 *)(result - 1 + a2) - 9;
    if ( v2 > 0x17 )
      break;
    if ( ((1 << v2) & 0x80001B) == 0 )
      break;
  }
  return result;
}
